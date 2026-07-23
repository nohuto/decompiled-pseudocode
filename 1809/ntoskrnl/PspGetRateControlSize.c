/*
 * XREFs of PspGetRateControlSize @ 0x140699C54
 * Callers:
 *     PspFreeRateControl @ 0x140699B74 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140699BC0 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14011587C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
