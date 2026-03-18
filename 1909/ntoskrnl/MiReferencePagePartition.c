/*
 * XREFs of MiReferencePagePartition @ 0x1402C9AA4
 * Callers:
 *     MiUnlinkBadPages @ 0x1402BE5B4 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1)
{
  char v1; // al
  __int64 v2; // r8

  v1 = PsReferencePartitionSafe(*(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                                          + 168LL));
  return v2 & -(__int64)(v1 != 0);
}
