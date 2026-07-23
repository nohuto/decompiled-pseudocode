/*
 * XREFs of RtlCopyRangeList @ 0x140739CE0
 * Callers:
 *     ArbTestAllocation @ 0x140739030 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140739310 (ArbBootAllocation.c)
 *     RtlMergeRangeLists @ 0x140891580 (RtlMergeRangeLists.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140906C00 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x140739D70 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14073A010 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlCopyRangeList(PRTL_RANGE_LIST CopyRangeList, PRTL_RANGE_LIST RangeList)
{
  struct _RTL_RANGE_LIST *i; // rax
  unsigned int *p_Stamp; // rsi
  __int64 v6; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax

  if ( CopyRangeList->Count )
    return -1073741811;
  CopyRangeList->Flags = RangeList->Flags;
  CopyRangeList->Count = RangeList->Count;
  CopyRangeList->Stamp = RangeList->Stamp;
  for ( i = (struct _RTL_RANGE_LIST *)RangeList->ListHead.Flink; ; i = (struct _RTL_RANGE_LIST *)*((_QWORD *)p_Stamp + 5) )
  {
    p_Stamp = &i[-2].Stamp;
    if ( RangeList == i )
      return 0;
    v6 = RtlpCopyRangeListEntry(&i[-2].Stamp);
    if ( !v6 )
      break;
    Blink = CopyRangeList->ListHead.Blink;
    v8 = (struct _LIST_ENTRY *)(v6 + 40);
    if ( (PRTL_RANGE_LIST)Blink->Flink != CopyRangeList )
      __fastfail(3u);
    v8->Flink = &CopyRangeList->ListHead;
    v8->Blink = Blink;
    Blink->Flink = v8;
    CopyRangeList->ListHead.Blink = v8;
  }
  RtlFreeRangeList(CopyRangeList);
  return -1073741670;
}
