/*
 * XREFs of KeGetSchedulingGroupSize @ 0x140114620
 * Callers:
 *     PspGetRateControlSize @ 0x1406BD37C (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
