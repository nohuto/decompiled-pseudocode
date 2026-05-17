/*
 * XREFs of sub_1800990B4 @ 0x1800990B4
 * Callers:
 *     sub_18009925C @ 0x18009925C (sub_18009925C.c)
 *     sub_18009941C @ 0x18009941C (sub_18009941C.c)
 * Callees:
 *     sub_180096740 @ 0x180096740 (sub_180096740.c)
 *     sub_1800993E8 @ 0x1800993E8 (sub_1800993E8.c)
 */

__int64 __fastcall sub_1800990B4(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        __int64 *a7,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rdi
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r13
  int v17; // eax
  __int64 *v19; // rcx
  int v20; // eax
  int v21; // ecx
  _WORD *v22; // rcx
  _WORD *v24; // rax
  char v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+70h] [rbp+18h]

  v26 = a2;
  v9 = a5;
  v13 = *a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v15 = *a3;
  v27 = v14;
  if ( v15 != -1 )
    sub_180096740(v15, a7);
  v16 = a8 - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = a8;
  v17 = a1 & 1;
  LODWORD(a5) = v17;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_31;
    }
    v19 = a7;
    ++*a4;
    v20 = sub_1800993E8(v19, 0LL);
    *a3 = v20;
    if ( v20 == -1 )
      break;
    if ( (a1 & 0x10) == 0 && ((a1 & 0x20) == 0 || v20 >= 9 && v20 <= 13 || v20 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v20 < 0 )
        break;
      if ( v20 < v20 >> 3 )
        break;
      v21 = v27 ^ *(char *)((v20 >> 3) + v26);
      if ( !_bittest(&v21, v20 & 7) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      v13 = (_WORD *)((char *)v13 + 1);
    }
    else
    {
      if ( !v16 )
      {
        if ( (a1 & 2) != 0 )
          *v13 = 0;
        else
          *(_BYTE *)v13 = 0;
        return 0xFFFFFFFFLL;
      }
      v22 = *v9;
      --v16;
      if ( (a1 & 2) != 0 )
      {
        *v22 = (unsigned __int16)&v25;
        ++*v9;
      }
      else
      {
        *(_BYTE *)v22 = *(_BYTE *)a3;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
    }
    v17 = (int)a5;
  }
  --*a4;
  if ( *a3 != -1 )
    sub_180096740(*a3, a7);
LABEL_31:
  if ( v13 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v24 = *v9;
      if ( (a1 & 2) != 0 )
        *v24 = 0;
      else
        *(_BYTE *)v24 = 0;
    }
  }
  return 0LL;
}
