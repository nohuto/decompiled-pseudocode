/*
 * XREFs of _HamConnectToServer@8 @ 0x100081C0
 * Callers:
 *     <none>
 * Callees:
 *     _HamConnectToServerEx@12 @ 0x10008300 (_HamConnectToServerEx@12.c)
 */

int __stdcall HamConnectToServer(int a1, int a2)
{
  return HamConnectToServerEx(a1, 0, a2);
}
