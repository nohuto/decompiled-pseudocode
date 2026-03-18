/*
 * XREFs of PopConsoleSessionActiveInput @ 0x140725C70
 * Callers:
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14074884C (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x1408B59D4 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x140725CE4 (PopUpdateTimeouts.c)
 *     PopRemoteSessionActiveInput @ 0x140725F54 (PopRemoteSessionActiveInput.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(__int64 a1, __int64 a2, int *a3)
{
  int v4; // edi
  unsigned int v5; // esi
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = a2;
  v5 = a1;
  PopRemoteSessionActiveInput(a1, a2, a3);
  v6 = *a3;
  LODWORD(v8) = a3[1];
  LODWORD(v9) = v6;
  byte_1404387A4 = v6 != 0;
  dword_140438798 = v4;
  PopUpdateTimeouts(v5, &v8, &v9);
  result = (unsigned int)v8;
  *a3 = v6;
  a3[1] = result;
  return result;
}
