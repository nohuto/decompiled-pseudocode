/*
 * XREFs of RtlMergeRangeLists @ 0x140891580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddRange @ 0x140739980 (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x140739CE0 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x140739D70 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14073A010 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlMergeRangeLists(
        PRTL_RANGE_LIST MergedRangeList,
        PRTL_RANGE_LIST RangeList1,
        PRTL_RANGE_LIST RangeList2,
        ULONG Flags)
{
  NTSTATUS v7; // ebx
  char *p_Blink; // rbp
  ULONG v9; // esi
  __int64 v10; // rsi
  __int64 *v11; // rax
  ULONG v12; // r8d
  NTSTATUS v13; // eax
  __int64 v14; // rsi
  __int64 *v15; // rax
  ULONG v16; // r8d
  struct _RTL_RANGE_LIST *v17; // rax

  v7 = RtlCopyRangeList(MergedRangeList, RangeList1);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeRangeList(MergedRangeList);
  }
  else
  {
    p_Blink = (char *)&RangeList2->ListHead.Flink[-3].Blink;
    if ( RangeList2 != (PRTL_RANGE_LIST)RangeList2->ListHead.Flink )
    {
      v9 = Flags | 1;
      do
      {
        if ( (p_Blink[34] & 1) != 0 )
        {
          v10 = *((_QWORD *)p_Blink + 2);
          while ( 1 )
          {
            v14 = v10 - 40;
            if ( p_Blink == (char *)(v14 + 24) )
              break;
            v11 = RtlpCopyRangeListEntry(v14);
            if ( !v11 )
              goto LABEL_18;
            v12 = Flags | 1;
            if ( (*(_BYTE *)(v14 + 33) & 2) == 0 )
              v12 = Flags;
            v13 = RtlpAddRange(MergedRangeList, v11, v12);
            v10 = *(_QWORD *)(v14 + 40);
            v7 = v13;
          }
          v9 = Flags | 1;
        }
        else
        {
          v15 = RtlpCopyRangeListEntry((__int64)p_Blink);
          if ( !v15 )
          {
LABEL_18:
            v7 = -1073741670;
            goto LABEL_19;
          }
          v16 = v9;
          if ( (p_Blink[33] & 2) == 0 )
            v16 = Flags;
          v7 = RtlpAddRange(MergedRangeList, v15, v16);
          if ( v7 < 0 )
            goto LABEL_19;
        }
        v17 = (struct _RTL_RANGE_LIST *)*((_QWORD *)p_Blink + 5);
        p_Blink = (char *)&v17[-2].Stamp;
      }
      while ( RangeList2 != v17 );
    }
    MergedRangeList->Count += RangeList2->Count;
    MergedRangeList->Stamp += RangeList2->Count;
  }
  return v7;
}
