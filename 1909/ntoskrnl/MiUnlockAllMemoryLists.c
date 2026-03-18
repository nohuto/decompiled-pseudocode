/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140169FBC
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14016A014 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465DE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465DF0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
