/*
 * XREFs of RtlCompareMemoryUlong @ 0x1401CCDF0
 * Callers:
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MiDeleteSystemPageTable @ 0x1401235A0 (MiDeleteSystemPageTable.c)
 *     MiHashIsCommon @ 0x140143030 (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1401862B4 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x1402E81BC (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030ED6C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F154 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x140314F38 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
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
