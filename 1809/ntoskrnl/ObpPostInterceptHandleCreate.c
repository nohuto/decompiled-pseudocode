/*
 * XREFs of ObpPostInterceptHandleCreate @ 0x1408637F4
 * Callers:
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpCallPostOperationCallbacks @ 0x140863750 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpPostInterceptHandleCreate(__int64 a1, unsigned __int8 a2, int a3, int a4, _QWORD *a5)
{
  unsigned __int64 v9; // rcx
  _QWORD v11[6]; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[3] = 0LL;
  v11[5] = &v12;
  LODWORD(v11[0]) = 1;
  v11[1] = a1;
  HIDWORD(v11[0]) ^= (BYTE4(v11[0]) ^ a2) & 1;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  LODWORD(v11[4]) = a3;
  v12 = a4;
  v11[2] = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObpCallPostOperationCallbacks((__int64)v11, a5);
  return 0LL;
}
