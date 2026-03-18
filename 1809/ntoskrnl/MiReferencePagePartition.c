/*
 * XREFs of MiReferencePagePartition @ 0x1402B4554
 * Callers:
 *     MiUnlinkBadPages @ 0x1402A6F88 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7310 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140090CE8 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1)
{
  char v1; // al
  __int64 v2; // r8

  v1 = PsReferencePartitionSafe(*(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                                          + 168LL));
  return v2 & -(__int64)(v1 != 0);
}
