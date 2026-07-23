/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x180062DE4
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180062E38 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpInitializeUCRIndex @ 0x180066B94 (RtlpInitializeUCRIndex.c)
 */

int __fastcall RtlpPerformHeapMaintenance(__int64 a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 120);
  if ( (result & 0x20000000) != 0 )
  {
    result &= ~0x20000000u;
    *(_DWORD *)(a1 + 120) = result;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
    {
      RtlpActivateLowFragmentationHeap(a1);
      result = *(_DWORD *)(a1 + 120);
    }
  }
  if ( (result & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    *(_DWORD *)(a1 + 120) &= ~0x10000000u;
  }
  return result;
}
