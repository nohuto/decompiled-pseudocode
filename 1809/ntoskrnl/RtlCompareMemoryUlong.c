/*
 * XREFs of RtlCompareMemoryUlong @ 0x1401C5C50
 * Callers:
 *     MiEvictPageTableLock @ 0x1400983A0 (MiEvictPageTableLock.c)
 *     MiDeleteSystemPageTable @ 0x14011F050 (MiDeleteSystemPageTable.c)
 *     MiFreeUnusedPfnPages @ 0x140183FE0 (MiFreeUnusedPfnPages.c)
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0774 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1402F0B64 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x1402F7E8C (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x14068BD28 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x1409BA954 (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
