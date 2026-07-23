/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiFlushRelease @ 0x1400792BC (MiFlushRelease.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DEE04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x1400E7798 (MiDecrementSubsection.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x140131A24 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140134568 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x14016983C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402A1A54 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A29B0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2B70 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402A34FC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x1402AC2CC (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1402B4908 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x14061F0D0 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( a2 )
    MiReturnCommit(a1, a3);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a3);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a3);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
