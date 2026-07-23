/*
 * XREFs of RtlFreeRangeList @ 0x14073A010
 * Callers:
 *     ArbCommitAllocation @ 0x140739000 (ArbCommitAllocation.c)
 *     ArbTestAllocation @ 0x140739030 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140739310 (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x140739CE0 (RtlCopyRangeList.c)
 *     RtlMergeRangeLists @ 0x140891580 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x140906770 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140906C00 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140906DC0 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140906DE0 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x14073A088 (RtlpDeleteRangeListEntry.c)
 */

void __stdcall RtlFreeRangeList(PRTL_RANGE_LIST RangeList)
{
  struct _RTL_RANGE_LIST *Flink; // rax
  char *p_Stamp; // rcx
  __int64 p_Blink; // rdi
  struct _LIST_ENTRY *v5; // r8
  struct _LIST_ENTRY *Blink; // rdx

  Flink = (struct _RTL_RANGE_LIST *)RangeList->ListHead.Flink;
  RangeList->Flags = 0;
  RangeList->Count = 0;
  p_Stamp = (char *)&Flink[-2].Stamp;
  p_Blink = (__int64)&Flink->ListHead.Flink[-3].Blink;
  if ( RangeList != Flink )
  {
    do
    {
      v5 = Flink->ListHead.Flink;
      if ( (struct _RTL_RANGE_LIST *)Flink->ListHead.Flink->Blink != Flink
        || (Blink = Flink->ListHead.Blink, (struct _RTL_RANGE_LIST *)Blink->Flink != Flink) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v5;
      v5->Blink = Blink;
      RtlpDeleteRangeListEntry(p_Stamp);
      p_Stamp = (char *)p_Blink;
      p_Blink = *(_QWORD *)(p_Blink + 40) - 40LL;
      Flink = (struct _RTL_RANGE_LIST *)(p_Stamp + 40);
    }
    while ( RangeList != (PRTL_RANGE_LIST)(p_Stamp + 40) );
  }
}
