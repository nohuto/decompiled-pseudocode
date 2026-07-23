/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14011587C
 * Callers:
 *     PspGetRateControlSize @ 0x140699C54 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
