/*
 * XREFs of PspGetRateControlSize @ 0x1406BD37C
 * Callers:
 *     PspFreeRateControl @ 0x1406BD29C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1406BD2E8 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x140114620 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
