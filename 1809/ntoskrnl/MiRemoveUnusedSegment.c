/*
 * XREFs of MiRemoveUnusedSegment @ 0x14007BB68
 * Callers:
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     MmGetImageFileSignatureInformation @ 0x140023A40 (MmGetImageFileSignatureInformation.c)
 *     MiComputeDataFlushRange @ 0x140076E30 (MiComputeDataFlushRange.c)
 *     MiPrepareSegmentForDeletion @ 0x1400958BC (MiPrepareSegmentForDeletion.c)
 *     MiPreventControlAreaDeletion @ 0x1400E94F8 (MiPreventControlAreaDeletion.c)
 *     MiCheckForControlAreaDeletion @ 0x140119F3C (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x140122170 (MiAttemptSectionDelete.c)
 *     MiReferencePfBackedSection @ 0x140130420 (MiReferencePfBackedSection.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1402A330C (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14007BAD0 (MiUnlinkUnusedControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_14043A748 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  }
}
