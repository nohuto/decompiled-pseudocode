/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140152868
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1401528C0 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043A6D8);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043A6E8);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
