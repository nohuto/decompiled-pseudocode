/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1406667C0
 * Callers:
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpAddToLeaf @ 0x1406C50F8 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1406D86CC (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407140D0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyInLeaf @ 0x1408376F4 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     CmpCompareInIndex @ 0x1406662F0 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x140667370 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  unsigned int v6; // r15d
  _DWORD *v7; // rbp
  unsigned __int16 *v8; // rdi
  __int64 v10; // rbx
  int v11; // r12d
  int v12; // r13d
  __int64 v13; // rsi
  __int16 v14; // cx
  __int64 v15; // rbp
  unsigned int v16; // edx
  _BYTE *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // r10d
  __int64 v21; // rdi
  unsigned __int16 v22; // cx
  unsigned int v23; // r11d
  int v24; // r9d
  int v25; // eax
  int v26; // r9d
  int v27; // eax
  int v28; // edx
  unsigned int v29; // esi
  int v30; // eax
  int v31; // eax
  int v33; // eax

  v5 = *(unsigned __int16 *)(a2 + 2);
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  v11 = 0;
  v12 = v5 - 1;
  v13 = (unsigned int)(v5 - 1) >> 1;
  if ( !(_WORD)v5 )
  {
    *a4 = -1;
    *a5 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v14 = *(_WORD *)a2;
    *v7 = -1;
    if ( ((v14 - 26220) & 0xFDFF) != 0 )
    {
      v33 = CmpDoCompareKeyName(a1, v8, *(unsigned int *)(a2 + 4 * v13 + 4));
      v28 = v33;
      if ( v33 == 2 )
        goto LABEL_53;
      if ( !v33 )
        *v7 = *(_DWORD *)(a2 + 4 * v13 + 4);
      goto LABEL_24;
    }
    v15 = a2 + 8 * v13;
    if ( v14 == 26220 )
    {
      v16 = 4;
      v17 = (_BYTE *)(v15 + 8);
      v18 = 0;
      while ( *v17 )
      {
        ++v18;
        ++v17;
        if ( v18 >= 4 )
          goto LABEL_7;
      }
      v16 = v18;
LABEL_7:
      v19 = 0;
      v20 = *v8 >> 1;
      if ( v20 >= v16 )
        v20 = v16;
      if ( v20 )
      {
        v21 = *((_QWORD *)v8 + 1);
        while ( 1 )
        {
          v22 = *(_WORD *)(v21 + 2LL * v19);
          v23 = *(unsigned __int8 *)(v19 + v15 + 8);
          if ( v22 >= 0x61u )
            v24 = v22 <= 0x7Au ? v22 - 32 : NLS_UPCASE(v22);
          else
            v24 = v22;
          if ( v23 >= 0x61 )
            v25 = v23 <= 0x7A ? v23 - 32 : NLS_UPCASE(v23);
          else
            v25 = v23;
          v26 = v24 - v25;
          if ( v26 )
            break;
          if ( ++v19 >= v20 )
          {
            v8 = a3;
            goto LABEL_18;
          }
        }
        v8 = a3;
        v28 = 1;
        if ( v26 <= 0 )
          v28 = -1;
LABEL_24:
        v10 = a1;
        goto LABEL_25;
      }
LABEL_18:
      v10 = a1;
    }
    v27 = CmpDoCompareKeyName(v10, v8, *(unsigned int *)(v15 + 4));
    v28 = v27;
    if ( v27 == 2 )
      goto LABEL_52;
    if ( !v27 )
      *a4 = *(_DWORD *)(v15 + 4);
LABEL_25:
    if ( v28 == 2 )
    {
LABEL_52:
      v7 = a4;
LABEL_53:
      *v7 = -1;
      *a5 = 0x80000000;
      return 3221225626LL;
    }
    if ( !v28 )
    {
      *a5 = v13;
      return 0LL;
    }
    v7 = a4;
    if ( v28 >= 0 )
    {
      v11 = v13;
      LODWORD(v13) = v12;
    }
    v12 = v13;
    v29 = v13 - v11;
    if ( v29 <= 1 )
      break;
    v13 = v11 + (v29 >> 1);
  }
  v30 = CmpCompareInIndex(v10, v8, v11, (__int16 *)a2, a4);
  if ( v30 == 2 )
    goto LABEL_53;
  if ( !v30 )
  {
    *a5 = v11;
    return 0LL;
  }
  if ( v30 < 0 )
  {
    *a5 = v11;
    return 3221225524LL;
  }
  v31 = CmpCompareInIndex(v10, v8, v12, (__int16 *)a2, a4);
  if ( v31 == 2 )
    goto LABEL_53;
  *a5 = v12;
  if ( v31 )
    return (unsigned int)-1073741772;
  return v6;
}
