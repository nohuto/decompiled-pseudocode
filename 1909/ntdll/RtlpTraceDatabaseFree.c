/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800FC44C
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800FC190 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
