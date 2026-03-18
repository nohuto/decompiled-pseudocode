/*
 * XREFs of MiUnlockAllMemoryLists @ 0x1401603E8
 * Callers:
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140160440 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404660E0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404660F0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
