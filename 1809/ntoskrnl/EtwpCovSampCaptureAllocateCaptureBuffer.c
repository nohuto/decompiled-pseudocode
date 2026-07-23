/*
 * XREFs of EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1408C4D10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateCaptureBuffer(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *(_DWORD *)(a1 + 924) + 64), 0x56777445u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v5[6] = a2;
    v5[2] = 3401298175LL;
    *((_WORD *)v5 + 30) = *(_WORD *)(a1 + 924);
  }
  return v5;
}
