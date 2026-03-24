/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14011580C
 * Callers:
 *     PspGetRateControlSize @ 0x140698A94 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407152BC (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
