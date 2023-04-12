#include <iostream>
using namespace std;

int main()
{
	int myNumbers[5] = { 1,3,5,7,9 };
	//regular way
	for (int i = 0; i < 5; i++) cout << myNumbers[i] << " ";
	cout << "\n\n";
	//range-based way
	for (int i : myNumbers) cout << i << " ";
	cout << "\n\n";
	//using auto
	for (auto i : myNumbers) cout << i << " ";
	return 0;
}