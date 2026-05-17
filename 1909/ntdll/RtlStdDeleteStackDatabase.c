/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x1800FAC30
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800FB030 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

__int64 RtlStdDeleteStackDatabase()
{
  return ZwFreeVirtualMemory();
}
