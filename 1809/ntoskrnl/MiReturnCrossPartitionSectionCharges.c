/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1402C4BB4
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x140077170 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140077950 (MiReferenceActiveSubsection.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiFlushRelease @ 0x1400792CC (MiFlushRelease.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiAppendSubsectionChain @ 0x140092AA4 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DED64 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x1400E76F8 (MiDecrementSubsection.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E0C (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x140131934 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140134478 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x14016971C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A217C (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A26C0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3134 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402A320C (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402A3350 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x1402ABFDC (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1402B4618 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D23BC (MiReturnCrossPartitionCharges.c)
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
