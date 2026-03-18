/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x14093D124
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14030B17C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14030B2DC (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
