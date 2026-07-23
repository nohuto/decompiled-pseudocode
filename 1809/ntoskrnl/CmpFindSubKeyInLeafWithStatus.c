/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1405D6370
 * Callers:
 *     CmpMarkIndexDirty @ 0x1405AE40C (CmpMarkIndexDirty.c)
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyInLeaf @ 0x1407FFE88 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1405D61D0 (CmpCompareInIndex.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        __int64 a1,
        __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _DWORD *a5,
        int *a6)
{
  int v6; // eax
  unsigned __int16 *v7; // rdi
  __int16 *v9; // r8
  __int64 v10; // r10
  __int64 v11; // r12
  __int64 result; // rax
  __int16 v13; // cx
  _DWORD *v14; // rsi
  __int16 *v15; // rbx
  int v16; // eax
  int v17; // edx
  __int16 *v18; // rbx
  unsigned int v19; // edx
  _BYTE *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  __int64 v23; // rsi
  __int64 v24; // r14
  WCHAR v25; // ax
  unsigned int v26; // edi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // ebp
  int v32; // r14d
  unsigned int v33; // r12d
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+30h] [rbp-48h]
  int v37; // [rsp+34h] [rbp-44h]
  __int16 *v38; // [rsp+38h] [rbp-40h]

  v6 = (unsigned __int16)a2[1];
  v7 = a3;
  v36 = 0;
  v9 = a2;
  v10 = a1;
  v37 = v6 - 1;
  v11 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v13 = *v9;
    v14 = a5;
    *a5 = -1;
    if ( ((v13 - 26220) & 0xFDFF) != 0 )
    {
      v15 = &v9[2 * v11];
      v16 = CmpDoCompareKeyName(v10, v7, a4, *((unsigned int *)v15 + 1));
      v17 = v16;
      if ( v16 == 2 )
        goto LABEL_58;
      if ( !v16 )
        *a5 = *((_DWORD *)v15 + 1);
    }
    else
    {
      v18 = &v9[4 * v11 + 2];
      v38 = v18;
      if ( v13 != 26220 )
        goto LABEL_37;
      v19 = 4;
      v20 = v18 + 2;
      v21 = 0;
      while ( *v20 )
      {
        ++v21;
        ++v20;
        if ( v21 >= 4 )
          goto LABEL_13;
      }
      v19 = v21;
LABEL_13:
      if ( a4 )
        v22 = *a4;
      else
        v22 = *v7 >> 1;
      if ( v22 >= v19 )
        v22 = v19;
      v23 = 0LL;
      if ( !v22 )
      {
LABEL_36:
        v14 = a5;
LABEL_37:
        v30 = CmpDoCompareKeyName(v10, v7, a4, *(unsigned int *)v18);
        v17 = v30;
        if ( v30 == 2 )
          goto LABEL_57;
        if ( !v30 )
          *v14 = *(_DWORD *)v18;
        goto LABEL_40;
      }
      v24 = 0LL;
      while ( 1 )
      {
        v25 = a4 ? *(unsigned __int8 *)(*((_QWORD *)a4 + 1) + v23) : *(_WORD *)(v24 + *((_QWORD *)v7 + 1));
        v26 = *((unsigned __int8 *)&v9[4 * v11 + 4] + (unsigned int)v23);
        if ( v25 >= 0x61u )
          v27 = v25 <= 0x7Au ? v25 - 32 : RtlUpcaseUnicodeChar(v25);
        else
          v27 = v25;
        if ( v26 >= 0x61 )
          v28 = v26 <= 0x7A ? v26 - 32 : RtlUpcaseUnicodeChar(v26);
        else
          v28 = v26;
        v7 = a3;
        v29 = v27 - v28;
        if ( v29 )
          break;
        v9 = a2;
        v23 = (unsigned int)(v23 + 1);
        v24 += 2LL;
        if ( (unsigned int)v23 >= v22 )
        {
          v18 = v38;
          v10 = a1;
          goto LABEL_36;
        }
      }
      v17 = 1;
      if ( v29 <= 0 )
        v17 = -1;
    }
LABEL_40:
    if ( v17 == 2 )
    {
LABEL_57:
      v14 = a5;
      goto LABEL_58;
    }
    if ( !v17 )
    {
      *a6 = v11;
      return 0LL;
    }
    v31 = v36;
    if ( v17 >= 0 )
    {
      v31 = v11;
      LODWORD(v11) = v37;
    }
    v32 = v11;
    v37 = v11;
    v33 = v11 - v31;
    v36 = v31;
    if ( v33 <= 1 )
      break;
    v9 = a2;
    v10 = a1;
    v11 = v31 + (v33 >> 1);
  }
  v14 = a5;
  v34 = CmpCompareInIndex(a1, v7, a4, v31, a2, a5);
  if ( v34 != 2 )
  {
    if ( !v34 )
    {
      *a6 = v31;
      return 0LL;
    }
    if ( v34 < 0 )
    {
      *a6 = v31;
      return 3221225524LL;
    }
    v35 = CmpCompareInIndex(a1, v7, a4, v32, a2, a5);
    if ( v35 != 2 )
    {
      result = v35 != 0 ? 0xC0000034 : 0;
      *a6 = v32;
      return result;
    }
  }
LABEL_58:
  *v14 = -1;
  *a6 = 0x80000000;
  return 3221225626LL;
}
