/*
 * XREFs of MiGetCommittedPages @ 0x140071488
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x1400DF264 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402DE8F0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1406086F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140608960 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x14088C9C0 (MiInitializeImageExtents.c)
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
