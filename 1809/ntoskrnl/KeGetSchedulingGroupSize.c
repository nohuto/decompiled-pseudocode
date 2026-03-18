/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1401157EC
 * Callers:
 *     PspGetRateControlSize @ 0x140698AB4 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407152DC (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
