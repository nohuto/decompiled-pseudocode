/*
 * XREFs of RtlInitializeRangeList @ 0x14073A610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeRangeList(PRTL_RANGE_LIST RangeList)
{
  RangeList->ListHead.Blink = &RangeList->ListHead;
  RangeList->ListHead.Flink = &RangeList->ListHead;
  *(_QWORD *)&RangeList->Flags = 0LL;
  RangeList->Stamp = 0;
}
