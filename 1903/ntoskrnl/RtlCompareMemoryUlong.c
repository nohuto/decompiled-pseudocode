/*
 * XREFs of RtlCompareMemoryUlong @ 0x1401CC270
 * Callers:
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 *     MiHashIsCommon @ 0x140142AF0 (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x140185D04 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x1402E845C (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030F31C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F704 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x1403154E8 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x1409F26EC (MiSwitchToPfns.c)
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
