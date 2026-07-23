/*
 * XREFs of RtlGetFirstRange @ 0x140740A70
 * Callers:
 *     ArbOverrideConflict @ 0x1407403E0 (ArbOverrideConflict.c)
 *     ArbShareDriverExclusive @ 0x140740494 (ArbShareDriverExclusive.c)
 *     RtlIsRangeAvailable @ 0x140740830 (RtlIsRangeAvailable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetFirstRange(PRTL_RANGE_LIST RangeList, PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range)
{
  struct _RTL_RANGE *p_Blink; // r9
  NTSTATUS v4; // r11d
  struct _LIST_ENTRY *Flink; // r10
  NTSTATUS result; // eax

  Iterator->RangeListHead = &RangeList->ListHead;
  p_Blink = 0LL;
  v4 = 0;
  Iterator->Stamp = RangeList->Stamp;
  Flink = RangeList->ListHead.Flink;
  if ( (PRTL_RANGE_LIST)RangeList->ListHead.Flink == RangeList )
  {
    Iterator->MergedHead = 0LL;
    v4 = -2147483622;
  }
  else
  {
    if ( (BYTE2(Flink[-1].Blink) & 1) != 0 )
    {
      Iterator->MergedHead = (struct _LIST_ENTRY *)((char *)Flink - 24);
      Flink = Flink[-2].Blink;
    }
    else
    {
      Iterator->MergedHead = 0LL;
    }
    p_Blink = (struct _RTL_RANGE *)&Flink[-3].Blink;
  }
  Iterator->Current = p_Blink;
  result = v4;
  *Range = p_Blink;
  return result;
}
