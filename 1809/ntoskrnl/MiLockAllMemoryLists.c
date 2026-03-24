/*
 * XREFs of MiLockAllMemoryLists @ 0x140152830
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1401528C0 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043A6E8);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043A6D8);
}
