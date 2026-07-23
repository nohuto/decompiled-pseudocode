/*
 * XREFs of RtlInvertRangeListEx @ 0x1407397A0
 * Callers:
 *     RtlInvertRangeList @ 0x140739590 (RtlInvertRangeList.c)
 *     ArbInitializeRangeList @ 0x140906770 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 */

int __fastcall RtlInvertRangeListEx(PRTL_RANGE_LIST RangeList, __int64 a2, UCHAR a3, void *a4, PVOID Owner)
{
  ULONGLONG v7; // rdx
  ULONGLONG v10; // rax
  ULONGLONG *v11; // rdi
  int result; // eax

  v7 = 0LL;
  if ( !*(_DWORD *)(a2 + 20) )
    return RtlAddRange(RangeList, 0LL, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, Owner);
  v10 = *(_QWORD *)a2;
  while ( 1 )
  {
    v11 = (ULONGLONG *)(v10 - 40);
    if ( a2 == v10 )
      break;
    if ( *v11 > v7 )
    {
      result = RtlAddRange(RangeList, v7, *v11 - 1, a3, 0, a4, Owner);
      if ( result < 0 )
        return result;
    }
    v10 = v11[5];
    v7 = v11[1] + 1;
  }
  if ( !v7 )
    return 0;
  result = RtlAddRange(RangeList, v7, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, Owner);
  if ( result >= 0 )
    return 0;
  return result;
}
