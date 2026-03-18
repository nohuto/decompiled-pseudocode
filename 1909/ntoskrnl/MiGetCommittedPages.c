/*
 * XREFs of MiGetCommittedPages @ 0x1400716F8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x1400BF0E4 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402DE650 (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x14088C1E0 (MiInitializeImageExtents.c)
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
