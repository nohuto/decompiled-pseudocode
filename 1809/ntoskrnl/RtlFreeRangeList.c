/*
 * XREFs of RtlFreeRangeList @ 0x140738E20
 * Callers:
 *     ArbCommitAllocation @ 0x140737E10 (ArbCommitAllocation.c)
 *     ArbTestAllocation @ 0x140737E40 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140738120 (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x140738AF0 (RtlCopyRangeList.c)
 *     RtlMergeRangeLists @ 0x140890320 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x1409054B0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1409055C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140905940 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140905B00 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140905B20 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140738E98 (RtlpDeleteRangeListEntry.c)
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
