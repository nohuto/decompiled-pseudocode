/*
 * XREFs of PopConsoleSessionActiveInput @ 0x1406DC420
 * Callers:
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14071D72C (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x140878F20 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopRemoteSessionActiveInput @ 0x1406DC494 (PopRemoteSessionActiveInput.c)
 *     PopUpdateTimeouts @ 0x1406DC800 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(unsigned int a1, int a2, int *a3)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  PopRemoteSessionActiveInput();
  v6 = *a3;
  LODWORD(v8) = a3[1];
  LODWORD(v9) = v6;
  byte_14040FDC4 = v6 != 0;
  dword_14040FDB8 = a2;
  PopUpdateTimeouts(a1, &v8, &v9);
  result = (unsigned int)v8;
  *a3 = v6;
  a3[1] = result;
  return result;
}
