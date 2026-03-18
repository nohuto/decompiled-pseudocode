/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x140071544 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A72D4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1400EB07C (MiUpdateLastSubsectionSize.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiDecrementSubsection @ 0x14012EAA4 (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x14013318C (MiReleaseFaultCharges.c)
 *     MiCleanSection @ 0x14017016C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B9B70 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402BA6BC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C531C (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1402C9E08 (MiUpdateActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( a2 )
    MiReturnCommit(a1, a3);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a3);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a3);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
