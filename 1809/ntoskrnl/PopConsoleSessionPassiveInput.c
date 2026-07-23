/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x1406DD640
 * Callers:
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x1406DDAA0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406DDC58 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x1406DE094 (PopGetLockConsoleTimeout.c)
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
  byte_140410E44 = 0;
  PopGetLockConsoleTimeout();
  dword_140410E38 = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = qword_140410E2C;
  *a3 = 0;
  LODWORD(v10) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v10, &v8);
}
