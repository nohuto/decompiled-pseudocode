/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140152968
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x1401529C0 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043B798);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043B7A8);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
