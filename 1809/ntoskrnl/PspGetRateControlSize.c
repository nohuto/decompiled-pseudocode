/*
 * XREFs of PspGetRateControlSize @ 0x140698AB4
 * Callers:
 *     PspFreeRateControl @ 0x1406989D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698A20 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1401157EC (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
