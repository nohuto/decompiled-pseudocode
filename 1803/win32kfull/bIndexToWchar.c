/*
 * XREFs of bIndexToWchar @ 0x1C021E758
 * Callers:
 *     bIndexToWcharKern @ 0x1C021E9A0 (bIndexToWcharKern.c)
 * Callees:
 *     vCvtMacToUnicode @ 0x1C0224434 (vCvtMacToUnicode.c)
 */

__int64 __fastcall bIndexToWchar(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  __int64 v4; // r10
  __int16 v7; // ax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  _BYTE *i; // rax
  __int64 v12; // r8
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  unsigned __int16 *k; // r10
  unsigned int v16; // ecx
  unsigned __int64 v17; // r14
  unsigned __int16 v18; // dx
  _WORD *v19; // r8
  _WORD *v20; // rbx
  _WORD *v21; // rdi
  _WORD *v22; // r11
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned __int16 v25; // r10
  unsigned __int16 v26; // bp
  __int16 v27; // cx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // ax
  __int16 v30; // si
  _WORD *v31; // r9
  _WORD *j; // rcx
  char v33; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 304);
  v7 = *(_WORD *)(a1 + 310);
  v8 = v4 + (unsigned __int16)__ROR2__(*(_WORD *)(v4 + 2), 8);
  if ( v7 == 1 )
  {
    v9 = v4 + 6;
    for ( i = (_BYTE *)(v4 + 261); (unsigned __int64)i >= v9; --i )
    {
      if ( *i == (_BYTE)a3 )
      {
        v33 = (_BYTE)i - v9;
        vCvtMacToUnicode(v9, a2, &v33, 1LL);
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v7 != 3 || (unsigned int)(*(_DWORD *)(a1 + 316) - 5) > 1 )
  {
    v17 = v4 + 14;
    v18 = __ROR2__(*(_WORD *)(v4 + 6), 8) >> 1;
    v19 = (_WORD *)(v4 + 12 + 2LL * v18);
    v20 = &v19[v18 + 1];
    v21 = &v20[v18];
    v22 = &v21[v18];
    if ( __ROR2__(*v19, 8) != 0xFFFF )
    {
      v23 = 0;
      while ( (unsigned __int64)v19 >= v17 && __ROR2__(*v19, 8) != 0xFFFF )
      {
        ++v23;
        --v19;
      }
      v24 = 2LL * v23;
      v20 = (_WORD *)((char *)v20 - v24);
      v21 = (_WORD *)((char *)v21 - v24);
      v22 = (_WORD *)((char *)v22 - v24);
    }
    while ( (unsigned __int64)v19 >= v17 )
    {
      v25 = __ROR2__(*v20, 8);
      v26 = __ROR2__(*v19, 8);
      v27 = __ROR2__(*v21, 8);
      v28 = __ROR2__(*v22, 8);
      if ( v28 )
      {
        v30 = __ROL2__(a3 - v27, 8);
        v31 = &v22[(unsigned __int64)v28 >> 1];
        if ( (unsigned __int64)v31 <= v8 )
        {
          for ( j = &v31[v26 - v25]; j >= v31; --j )
          {
            if ( v30 == *j )
            {
              *a2 = v25 + j - v31;
              return 1LL;
            }
          }
        }
      }
      else
      {
        v29 = a3 - v27;
        if ( (unsigned __int16)(a3 - v27) >= v25 && v29 <= v26 )
        {
          *a2 = v29;
          return 1LL;
        }
      }
      --v20;
      --v19;
      --v21;
      --v22;
    }
    return 0LL;
  }
  if ( a4 )
    v12 = *(_QWORD *)(a1 + 96);
  else
    v12 = *(_QWORD *)(a1 + 88);
  v13 = *(_DWORD *)(v12 + 12);
  v14 = 0;
  if ( !v13 )
    return 0LL;
  for ( k = (unsigned __int16 *)(v12 + 18); ; k += 8 )
  {
    v16 = 0;
    if ( *k )
      break;
LABEL_19:
    if ( ++v14 >= v13 )
      return 0LL;
  }
  while ( *(_DWORD *)(*(_QWORD *)(k + 3) + 4LL * v16) != a3 )
  {
    if ( ++v16 >= *k )
      goto LABEL_19;
  }
  *a2 = v16 + *(_WORD *)(v12 + 16 * (v14 + 1LL));
  return 1LL;
}
