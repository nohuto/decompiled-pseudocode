/*
 * XREFs of MiRemoveUnusedSegment @ 0x14007436C
 * Callers:
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140074414 (MiReferenceActiveControlArea.c)
 *     MiPrepareSegmentForDeletion @ 0x1400DF804 (MiPrepareSegmentForDeletion.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A5A8 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14012513C (MiAttemptSectionDelete.c)
 *     MmGetImageFileSignatureInformation @ 0x14012B3E0 (MmGetImageFileSignatureInformation.c)
 *     MiPreventControlAreaDeletion @ 0x14012E9B8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14012EB2C (MiReferencePfBackedSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1402BA6BC (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14011E9D4 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  }
}
