/*
 * XREFs of ArbRollbackAllocation @ 0x140905B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x140738E20 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
  return 0LL;
}
