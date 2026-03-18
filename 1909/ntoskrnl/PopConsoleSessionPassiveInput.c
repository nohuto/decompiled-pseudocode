/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x140725BF4
 * Callers:
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x140725CE4 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x140726344 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  byte_1404387A4 = 0;
  PopGetLockConsoleTimeout();
  dword_140438798 = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = qword_14043878C;
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v9, &v8);
}
