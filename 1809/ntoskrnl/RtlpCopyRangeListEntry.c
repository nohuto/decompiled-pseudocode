/*
 * XREFs of RtlpCopyRangeListEntry @ 0x140739D70
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x140739AA4 (RtlpAddIntersectingRanges.c)
 *     RtlCopyRangeList @ 0x140739CE0 (RtlCopyRangeList.c)
 *     RtlMergeRangeLists @ 0x140891580 (RtlMergeRangeLists.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     RtlpDeleteRangeListEntry @ 0x14073A088 (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlpCopyRangeListEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  char *v5; // rdi
  __int64 v6; // r14
  __int64 i; // rax
  __int64 v8; // rsi
  _OWORD *v9; // rax
  _OWORD *v10; // rdx
  char **v11; // rax
  char *v12; // rdx

  v2 = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = *(_OWORD *)a1;
    *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v2 + 2) = *(_OWORD *)(a1 + 32);
    v2[6] = *(_QWORD *)(a1 + 48);
    if ( (*((_BYTE *)v2 + 33) & 0x10) != 0 )
      ++*(_DWORD *)v2[2];
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
    {
      v5 = (char *)(v2 + 2);
      v6 = a1 + 16;
      v2[3] = v2 + 2;
      v2[2] = v2 + 2;
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v8 + 40) )
      {
        v8 = i - 40;
        if ( v6 == i )
          break;
        v9 = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
        v10 = v9;
        if ( !v9 )
        {
          RtlpDeleteRangeListEntry(v3);
          return 0LL;
        }
        *v9 = *(_OWORD *)v8;
        v9[1] = *(_OWORD *)(v8 + 16);
        v9[2] = *(_OWORD *)(v8 + 32);
        *((_QWORD *)v9 + 6) = *(_QWORD *)(v8 + 48);
        if ( (*((_BYTE *)v9 + 33) & 0x10) != 0 )
          ++**((_DWORD **)v9 + 2);
        v11 = (char **)v3[3];
        v12 = (char *)v10 + 40;
        if ( *v11 != v5 )
          __fastfail(3u);
        *(_QWORD *)v12 = v5;
        *((_QWORD *)v12 + 1) = v11;
        *v11 = v12;
        v3[3] = v12;
      }
    }
  }
  return v3;
}
