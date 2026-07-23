/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x140739660
 * Callers:
 *     RtlDeleteRange @ 0x140739E80 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140739F30 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     RtlpAddRange @ 0x140739980 (RtlpAddRange.c)
 *     RtlpAddToMergedRange @ 0x140739BCC (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(_QWORD *Entry, char *a2)
{
  int v2; // r14d
  _QWORD **v3; // r8
  PVOID *v6; // rdx
  _QWORD *v7; // r8
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  char **v12; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  char **v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v3 = (_QWORD **)Entry[5];
  if ( v3[1] != Entry + 5 )
    goto LABEL_19;
  v6 = (PVOID *)Entry[6];
  if ( *v6 != Entry + 5 )
    goto LABEL_19;
  *v6 = v3;
  v3[1] = v6;
  v22 = &v21;
  v7 = &v21;
  v8 = (char *)*((_QWORD *)a2 + 2);
  v21 = &v21;
  v9 = v8 - 40;
  v10 = *(_QWORD *)v8 - 40LL;
  if ( a2 + 16 == v8 )
    goto LABEL_9;
  do
  {
    v11 = *(_QWORD *)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_19;
    v12 = (char **)*((_QWORD *)v8 + 1);
    if ( *v12 != v8 )
      goto LABEL_19;
    *v12 = (char *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    v9[33] &= ~2u;
    v2 = RtlpAddRange(&v21, v9, 1LL);
    if ( v2 < 0 )
    {
      v17 = (__int64)(v21 - 5);
      v18 = v21;
      while ( 1 )
      {
        v19 = *v18 - 40LL;
        if ( &v21 == v18 )
          break;
        RtlpAddToMergedRange(a2, v17, 1LL);
        v18 = (_QWORD *)(v19 + 40);
        v17 = v19;
      }
      return RtlpAddToMergedRange(a2, Entry, 1LL);
    }
    v9 = (char *)v10;
    v10 = *(_QWORD *)(v10 + 40) - 40LL;
    v8 = v9 + 40;
  }
  while ( a2 + 16 != v9 + 40 );
  v7 = v21;
LABEL_9:
  v13 = a2 + 40;
  v14 = *((_QWORD *)a2 + 5);
  if ( v7 != &v21 )
  {
    v15 = (_QWORD *)*((_QWORD *)a2 + 6);
    *v15 = v7;
    v21[1] = v15;
    *(_QWORD *)(v14 + 8) = v22;
    *v22 = v14;
    goto LABEL_11;
  }
  if ( *(char **)(v14 + 8) != v13 || (v20 = (char **)*((_QWORD *)a2 + 6), *v20 != v13) )
LABEL_19:
    __fastfail(3u);
  *v20 = (char *)v14;
  *(_QWORD *)(v14 + 8) = v20;
LABEL_11:
  RtlpFreeRangeListEntry(Entry);
  RtlpFreeRangeListEntry(a2);
  return (unsigned int)v2;
}
