/*
 * XREFs of RtlDeleteOwnersRanges @ 0x140739F30
 * Callers:
 *     ArbDeleteOwnerRanges @ 0x140739570 (ArbDeleteOwnerRanges.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140906C00 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140739660 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlDeleteOwnersRanges(PRTL_RANGE_LIST RangeList, PVOID Owner)
{
  NTSTATUS v4; // r8d
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY **v7; // rdi
  char *v8; // rcx
  __int64 v9; // r8
  char **v10; // rax
  struct _LIST_ENTRY *v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // rcx
  __int64 i; // rax
  __int64 v15; // rax

  v4 = 0;
LABEL_2:
  Flink = RangeList->ListHead.Flink->Flink;
  p_Blink = &RangeList->ListHead.Flink[-3].Blink;
  while ( 1 )
  {
    v7 = &Flink[-3].Blink;
    v8 = (char *)(p_Blink + 5);
    if ( RangeList == (PRTL_RANGE_LIST)(p_Blink + 5) )
      return v4;
    if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
    {
      v11 = p_Blink[2];
      v12 = &v11[-3].Blink;
      v13 = (__int64)&v11->Flink[-3].Blink;
      for ( i = (__int64)&v11[-1]; p_Blink != (struct _LIST_ENTRY **)i; i = v15 + 24 )
      {
        if ( (PVOID)v12[3] == Owner )
        {
          v4 = RtlpDeleteFromMergedRange(v12, (char *)p_Blink);
          if ( v4 < 0 )
            return v4;
          --RangeList->Count;
          ++RangeList->Stamp;
          goto LABEL_2;
        }
        v15 = v13;
        v12 = (_QWORD *)v13;
        v13 = *(_QWORD *)(v13 + 40) - 40LL;
      }
    }
    else if ( p_Blink[3] == Owner )
    {
      v9 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = (char **)p_Blink[6], *v10 != v8) )
        __fastfail(3u);
      *v10 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      RtlpFreeRangeListEntry(p_Blink);
      --RangeList->Count;
      ++RangeList->Stamp;
      v4 = 0;
    }
    p_Blink = v7;
    Flink = v7[5];
  }
}
