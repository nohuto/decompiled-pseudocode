/*
 * XREFs of PspGetRateControlSize @ 0x140698A94
 * Callers:
 *     PspFreeRateControl @ 0x1406989B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698A00 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14011580C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
