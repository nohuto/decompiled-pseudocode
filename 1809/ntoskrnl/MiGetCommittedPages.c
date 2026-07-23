/*
 * XREFs of MiGetCommittedPages @ 0x1400957D4
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x140094D78 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402C4BAC (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x140854124 (MiInitializeImageExtents.c)
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
