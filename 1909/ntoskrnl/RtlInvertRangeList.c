/*
 * XREFs of RtlInvertRangeList @ 0x140766370
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x140766580 (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
