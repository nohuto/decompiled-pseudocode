/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800FEEF0
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800FEC30 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
