/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800FD970
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800FDD70 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
