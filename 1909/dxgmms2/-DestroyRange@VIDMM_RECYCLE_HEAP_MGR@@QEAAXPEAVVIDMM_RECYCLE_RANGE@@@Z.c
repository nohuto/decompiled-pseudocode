/*
 * XREFs of ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081158
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068170 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069818 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00698D8 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00813E8 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00BA9D8 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C000233C (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C00144E4 (-FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C001451C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        const GUID *a3)
{
  __int64 v5; // rax
  VIDMM_RECYCLE_BLOCK *v6; // rcx

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0p((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  v5 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  WdLogEvent5_WdEvent(v5);
  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)a2 + 9), 1, (__int64)a2);
  v6 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)a2 + 9);
  if ( (*(_QWORD *)v6)-- == 1LL )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v6);
  *((_BYTE *)a2 + 168) = 1;
  VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
    v6,
    *((struct _LOOKASIDE_LIST_EX **)this + 164),
    (struct _SLIST_ENTRY *)a2,
    (void **)this + 202,
    (unsigned int *)this + 402);
}
