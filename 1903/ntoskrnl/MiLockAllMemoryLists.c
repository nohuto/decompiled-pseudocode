/*
 * XREFs of MiLockAllMemoryLists @ 0x1401603B0
 * Callers:
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140160440 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1404660F0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1404660E0);
}
