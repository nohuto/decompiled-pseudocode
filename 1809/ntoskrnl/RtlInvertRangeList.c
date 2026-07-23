/*
 * XREFs of RtlInvertRangeList @ 0x140739590
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x1407397A0 (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
