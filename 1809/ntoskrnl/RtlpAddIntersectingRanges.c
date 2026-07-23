/*
 * XREFs of RtlpAddIntersectingRanges @ 0x140739AA4
 * Callers:
 *     RtlpAddRange @ 0x140739980 (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x140739BCC (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x140739D70 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(unsigned __int64 *a1, unsigned __int64 *a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rcx
  unsigned __int64 **v14; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 **v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rbp
  __int64 i; // rax
  __int64 v30; // rcx
  _QWORD *v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 **v34; // rdx

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != a2 + 5 )
  {
    v19 = a3[1];
    do
    {
      if ( v19 < *a2 )
        break;
      if ( (*((_BYTE *)a2 + 34) & 1) != 0 )
      {
        v20 = a2[2];
        v21 = v20 - 40;
        if ( a2 != (unsigned __int64 *)(v20 - 16) )
        {
          v22 = *a3;
          do
          {
            v23 = *(_QWORD *)v21;
            v24 = v22 < *(_QWORD *)v21;
            if ( v22 > *(_QWORD *)v21 )
            {
              if ( *(_QWORD *)(v21 + 8) < v22 )
                goto LABEL_31;
              v24 = v22 < v23;
            }
            if ( (!v24 || v19 >= v23) && (!v4 || (*(_BYTE *)(v21 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_31:
            v21 = *(_QWORD *)(v21 + 40) - 40LL;
          }
          while ( a2 != (unsigned __int64 *)(v21 + 24) );
        }
      }
      else if ( !v4 || (*((_BYTE *)a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v25 = (unsigned __int64 *)a2[5];
      a2 = v25 - 5;
    }
    while ( a1 != v25 );
  }
  if ( (*((_BYTE *)v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*((_BYTE *)v7 + 33) & 0x10) != 0 )
    {
      --*(_DWORD *)v7[2];
      *((_BYTE *)v7 + 33) &= ~0x10u;
    }
    v14 = (unsigned __int64 **)(v7 + 2);
    v15 = (unsigned __int64 *)(v13 + 40);
    v7[3] = (unsigned __int64)(v7 + 2);
    v7[2] = (unsigned __int64)(v7 + 2);
    *((_WORD *)v7 + 17) = 1;
    v16 = v7[2];
    if ( *(unsigned __int64 **)(v16 + 8) != v7 + 2 )
LABEL_17:
      __fastfail(3u);
    *v15 = v16;
    v15[1] = (unsigned __int64)v14;
    *(_QWORD *)(v16 + 8) = v15;
    *v14 = v15;
  }
  v9 = (unsigned __int64 *)v7[5];
  v10 = v9 - 5;
  while ( 1 )
  {
    v11 = *v9 - 40;
    if ( a1 == v9 || a3[1] < *v10 )
      return RtlpAddToMergedRange(v7, a3, a4);
    if ( (*((_BYTE *)v10 + 34) & 1) != 0 )
    {
      v26 = (_QWORD *)v10[2];
      v27 = v26 - 5;
      v28 = *v26 - 40LL;
      for ( i = (__int64)(v26 - 2); v10 != (unsigned __int64 *)i; i = v32 + 24 )
      {
        v30 = v27[5];
        if ( *(_QWORD **)(v30 + 8) != v27 + 5 )
          goto LABEL_17;
        v31 = (_QWORD *)v27[6];
        if ( (_QWORD *)*v31 != v27 + 5 )
          goto LABEL_17;
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        RtlpAddToMergedRange(v7, v27, a4);
        v32 = v28;
        v27 = (_QWORD *)v28;
        v28 = *(_QWORD *)(v28 + 40) - 40LL;
      }
      v33 = v10[5];
      if ( *(unsigned __int64 **)(v33 + 8) != v10 + 5 )
        goto LABEL_17;
      v34 = (unsigned __int64 **)v10[6];
      if ( *v34 != v10 + 5 )
        goto LABEL_17;
      *v34 = (unsigned __int64 *)v33;
      *(_QWORD *)(v33 + 8) = v34;
      RtlpFreeRangeListEntry(v10);
    }
    else
    {
      v17 = v10[5];
      if ( *(unsigned __int64 **)(v17 + 8) != v10 + 5 )
        goto LABEL_17;
      v18 = (unsigned __int64 **)v10[6];
      if ( *v18 != v10 + 5 )
        goto LABEL_17;
      *v18 = (unsigned __int64 *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      RtlpAddToMergedRange(v7, v10, a4);
    }
    v10 = (unsigned __int64 *)v11;
    v9 = (unsigned __int64 *)(v11 + 40);
  }
}
