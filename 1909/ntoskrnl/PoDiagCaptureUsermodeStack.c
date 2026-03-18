/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x1406A51C4
 * Callers:
 *     NtSetTimerResolution @ 0x1406A63D0 (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PVOID *PoDiagCaptureUsermodeStack()
{
  PVOID *PoolWithTag; // rax
  PVOID *v1; // rbx
  ULONG v2; // eax

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x50455654u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x108uLL);
    v2 = RtlWalkFrameChain(v1 + 1, 0x20u, 1u);
    if ( v2 )
    {
      *(_DWORD *)v1 = v2;
    }
    else
    {
      ExFreePoolWithTag(v1, 0x50455654u);
      return 0LL;
    }
  }
  return v1;
}
