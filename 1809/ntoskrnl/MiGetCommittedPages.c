/*
 * XREFs of MiGetCommittedPages @ 0x140095894
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077950 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x140094E38 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402C48BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405F0650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F08A0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x140852EE4 (MiInitializeImageExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
