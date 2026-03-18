/*
 * XREFs of MiRemoveUnusedSegment @ 0x1400745DC
 * Callers:
 *     MiComputeDataFlushRange @ 0x140071AB0 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140074684 (MiReferenceActiveControlArea.c)
 *     MiPrepareSegmentForDeletion @ 0x1400BF684 (MiPrepareSegmentForDeletion.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A178 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1401257AC (MiAttemptSectionDelete.c)
 *     MmGetImageFileSignatureInformation @ 0x14012BEB0 (MmGetImageFileSignatureInformation.c)
 *     MiPreventControlAreaDeletion @ 0x14012F308 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1402BA41C (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14011F784 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  }
}
