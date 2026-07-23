/*
 * XREFs of CmpCompareInIndex @ 0x1405D61D0
 * Callers:
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1405D5F64 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpCompareInIndex(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        __int16 *a5,
        _DWORD *a6)
{
  __int64 v7; // rdi
  __int16 v9; // r11
  __int16 v10; // ax
  __int16 *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int16 *v14; // r13
  __int64 v15; // rsi
  _BYTE *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ebp
  WCHAR v20; // cx
  unsigned int v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // eax
  __int64 result; // rax

  v7 = a1;
  v9 = *a5;
  v10 = *a5;
  *a6 = -1;
  if ( ((v10 - 26220) & 0xFDFF) != 0 )
  {
    v11 = &a5[2 * a4];
    v12 = CmpDoCompareKeyName(a1, a2, a3, *((unsigned int *)v11 + 1));
    v13 = v12;
    if ( v12 != 2 )
    {
      if ( !v12 )
        *a6 = *((_DWORD *)v11 + 1);
      return v13;
    }
    return 2LL;
  }
  v14 = &a5[4 * a4];
  if ( v9 != 26220 )
    goto LABEL_33;
  v15 = 0LL;
  v16 = v14 + 4;
  v17 = 0;
  v18 = 4;
  while ( *v16 )
  {
    ++v17;
    ++v16;
    if ( v17 >= 4 )
      goto LABEL_11;
  }
  v18 = v17;
LABEL_11:
  if ( a3 )
    v19 = *a3;
  else
    v19 = *a2 >> 1;
  if ( v19 >= v18 )
    v19 = v18;
  if ( !v19 )
  {
LABEL_33:
    v25 = CmpDoCompareKeyName(v7, a2, a3, *((unsigned int *)v14 + 1));
    v13 = v25;
    if ( v25 != 2 )
    {
      if ( !v25 )
        *a6 = *((_DWORD *)v14 + 1);
      return v13;
    }
    return 2LL;
  }
  while ( 1 )
  {
    v20 = a3 ? *(unsigned __int8 *)(v15 + *((_QWORD *)a3 + 1)) : *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v15);
    v21 = *((unsigned __int8 *)v14 + v15 + 8);
    if ( v20 >= 0x61u )
      v22 = v20 <= 0x7Au ? v20 - 32 : RtlUpcaseUnicodeChar(v20);
    else
      v22 = v20;
    if ( v21 >= 0x61 )
      v23 = v21 <= 0x7A ? v21 - 32 : RtlUpcaseUnicodeChar(v21);
    else
      v23 = v21;
    v24 = v22 - v23;
    if ( v24 )
      break;
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v19 )
    {
      v7 = a1;
      goto LABEL_33;
    }
  }
  result = 1LL;
  if ( v24 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
