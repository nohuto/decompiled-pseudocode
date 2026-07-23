/*
 * XREFs of CmpAllocateSiloContext @ 0x140731E20
 * Callers:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140731B1C (CmpGetOrCreateContextForSiloNoRef.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PsCreateSiloContext @ 0x140731E90 (PsCreateSiloContext.c)
 */

__int64 __fastcall CmpAllocateSiloContext(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  void *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = PsCreateSiloContext(a1, 40, 1, (unsigned int)CmpFreeSiloContextCallback, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    memset(v5, 0, 0x28uLL);
    *v4 = 0LL;
    v4[3] = v4 + 2;
    v4[2] = v4 + 2;
    result = 0LL;
    *a2 = v4;
  }
  return result;
}
