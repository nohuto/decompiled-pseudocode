/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400E79A8
 * Callers:
 *     PspGetRateControlSize @ 0x1406989B4 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
