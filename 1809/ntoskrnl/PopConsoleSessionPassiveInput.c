/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x1406DC3C0
 * Callers:
 *     PopSessionInputChange @ 0x1406DC520 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x1406DC820 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406DC9D8 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x1406DCE14 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 256;
  v8 = 0;
  v10 = 0LL;
  byte_14040FDC4 = 0;
  PopGetLockConsoleTimeout();
  dword_14040FDB8 = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = qword_14040FDAC;
  *a3 = 0;
  LODWORD(v10) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v10, &v8);
}
