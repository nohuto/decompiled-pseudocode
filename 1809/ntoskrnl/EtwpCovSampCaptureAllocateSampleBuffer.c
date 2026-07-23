/*
 * XREFs of EtwpCovSampCaptureAllocateSampleBuffer @ 0x1408C4D90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateSampleBuffer(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  v1 = *(_DWORD *)(a1 + 928);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x56777445u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v3[2] = 1342288122LL;
    *((_DWORD *)v3 + 16) = v1 - 72;
  }
  return v3;
}
