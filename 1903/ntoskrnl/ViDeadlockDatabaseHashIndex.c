/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x14097C570
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140328F38 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140329094 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
