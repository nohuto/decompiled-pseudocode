/*
 * XREFs of PspGetRateControlSize @ 0x1406989B4
 * Callers:
 *     PspFreeRateControl @ 0x1406988D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698920 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400E79A8 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
