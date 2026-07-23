/*
 * XREFs of RtlpAddRange @ 0x140739980
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140739660 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 *     RtlMergeRangeLists @ 0x140891580 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpAddIntersectingRanges @ 0x140739AA4 (RtlpAddIntersectingRanges.c)
 */

__int64 __fastcall RtlpAddRange(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // r9
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // cf
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx

  *((_BYTE *)a2 + 33) &= ~2u;
  v4 = a2[1];
  v5 = 0;
  if ( (_QWORD *)*a1 != a1 )
  {
    v6 = *a2;
    if ( (unsigned __int64)*a2 <= *(_QWORD *)(a1[1] - 32LL) )
    {
      v10 = (unsigned __int64 *)(*a1 - 40LL);
      do
      {
        v11 = *v10;
        if ( v4 < *v10 )
        {
          v14 = (__int64 *)v10[6];
          v15 = *v14;
          a2[5] = *v14;
          a2[6] = (__int64)v14;
          *(_QWORD *)(v15 + 8) = a2 + 5;
          *v14 = (__int64)(a2 + 5);
          return v5;
        }
        v12 = v11 < v6;
        if ( v11 > v6 )
        {
          if ( v4 < v11 )
            goto LABEL_11;
          v12 = v11 < v6;
        }
        if ( !v12 || v10[1] >= v6 )
          return (unsigned int)RtlpAddIntersectingRanges(a1, v10, a2, a3);
LABEL_11:
        v13 = (_QWORD *)v10[5];
        v10 = v13 - 5;
      }
      while ( a1 != v13 );
    }
  }
  v7 = (_QWORD *)a1[1];
  v8 = a2 + 5;
  if ( (_QWORD *)*v7 != a1 )
    __fastfail(3u);
  *v8 = a1;
  a2[6] = (__int64)v7;
  *v7 = v8;
  a1[1] = v8;
  return v5;
}
