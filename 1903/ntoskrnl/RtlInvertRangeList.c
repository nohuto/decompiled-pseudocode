/*
 * XREFs of RtlInvertRangeList @ 0x140761960
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x140761B70 (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
