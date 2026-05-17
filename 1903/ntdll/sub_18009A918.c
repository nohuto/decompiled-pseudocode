/*
 * XREFs of sub_18009A918 @ 0x18009A918
 * Callers:
 *     sub_18009AB58 @ 0x18009AB58 (sub_18009AB58.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 * Callees:
 *     sub_18009B7E4 @ 0x18009B7E4 (sub_18009B7E4.c)
 *     sub_18009B82C @ 0x18009B82C (sub_18009B82C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18009A918(
        char a1,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        __int64 a7,
        __int64 Src,
        _DWORD *a9)
{
  _WORD *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  unsigned __int64 v16; // rbp
  int v17; // eax
  unsigned __int16 v19; // ax
  int v20; // ecx
  char v21; // di
  __int64 v22; // rax
  __int64 v24; // rcx
  _WORD *v25; // rax
  int v27; // [rsp+70h] [rbp+18h]

  v12 = *a5;
  v13 = -((a1 & 8) != 0);
  --*a4;
  v14 = *a3;
  v27 = v13;
  if ( (_WORD)v14 != 0xFFFF )
    sub_18009B82C(v14, a7);
  v15 = a1 & 0x10;
  v16 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = Src;
  v17 = a1 & 1;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_38;
    }
    ++*a4;
    v19 = sub_18009B7E4(a7, 0LL);
    *a3 = v19;
    if ( v19 == 0xFFFF )
      break;
    if ( !v15 && ((a1 & 0x20) == 0 || v19 >= 9u && v19 <= 0xDu || v19 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v19 < (unsigned __int16)(v19 >> 3) )
        break;
      v20 = v27 ^ *(char *)((v19 >> 3) + a2);
      if ( !_bittest(&v20, v19 & 7) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
LABEL_31:
      v17 = a1 & 1;
    }
    else
    {
      if ( !v16 )
        goto LABEL_32;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v19;
        *a5 = (char *)*a5 + 2;
        --v16;
        goto LABEL_31;
      }
      if ( v16 < dword_18015FF34 )
      {
        LOBYTE(Src) = *(_BYTE *)a3;
        v21 = Src;
        if ( (char)Src > 0 && (char)Src > v16 || (unsigned __int8)Src > 5u )
        {
LABEL_32:
          if ( (a1 & 2) != 0 )
            *v12 = 0;
          else
            *(_BYTE *)v12 = 0;
          return 0xFFFFFFFFLL;
        }
        memmove(*a5, &Src, (char)Src);
      }
      else
      {
        *(_BYTE *)*a5 = *(_BYTE *)a3;
        v21 = *(_BYTE *)*a5;
      }
      v17 = a1 & 1;
      if ( v21 > 0 )
      {
        v22 = v21;
        *a5 = (char *)*a5 + v21;
        v15 = a1 & 0x10;
        v16 -= v22;
        goto LABEL_31;
      }
      v15 = a1 & 0x10;
    }
  }
  --*a4;
  v24 = *a3;
  if ( (_WORD)v24 != 0xFFFF )
    sub_18009B82C(v24, a7);
LABEL_38:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v15 )
    {
      v25 = *a5;
      if ( (a1 & 2) != 0 )
        *v25 = 0;
      else
        *(_BYTE *)v25 = 0;
    }
  }
  return 0LL;
}
