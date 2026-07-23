/*
 * XREFs of ReadString_0 @ 0x14019E420
 * Callers:
 *     ReadStringDelimited_0 @ 0x14019E660 (ReadStringDelimited_0.c)
 *     _winput_s @ 0x14019E8D8 (_winput_s.c)
 * Callees:
 *     _fgetwc_nolock @ 0x14019F358 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x14019F3A0 (_ungetwc_nolock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall ReadString_0(
        char a1,
        __int64 a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  _WORD *v12; // r14
  unsigned __int64 v13; // rbp
  int v14; // eax
  wint_t v16; // ax
  wint_t *v17; // r9
  char v18; // di
  int v19; // ecx
  _WORD *v21; // rax
  int v24; // [rsp+80h] [rbp+28h]

  v12 = *a5;
  --*a4;
  v24 = -((a1 & 8) != 0);
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, File);
  v13 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v13 = Src;
  v14 = a1 & 1;
  while ( 1 )
  {
    if ( v14 )
    {
      if ( !a6-- )
        goto LABEL_38;
    }
    ++*a4;
    v16 = fgetwc_nolock(File);
    v17 = a3;
    *a3 = v16;
    if ( v16 == 0xFFFF )
      goto LABEL_36;
    v18 = v16;
    if ( (a1 & 0x10) == 0 )
    {
      if ( (a1 & 0x20) == 0 || v16 >= 9u && v16 <= 0xDu || (v18 = v16, v16 == 32) )
      {
        if ( (a1 & 0x40) == 0 )
          break;
        if ( v16 < (unsigned __int16)(v16 >> 3) )
          break;
        v18 = v16;
        v19 = v24 ^ *(char *)((v16 >> 3) + a2);
        if ( !_bittest(&v19, v16 & 7) )
          break;
      }
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
LABEL_30:
      v14 = a1 & 1;
    }
    else
    {
      if ( !v13 )
        goto LABEL_31;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v16;
        *a5 = (char *)*a5 + 2;
        --v13;
        goto LABEL_30;
      }
      if ( v13 < _mb_cur_max )
      {
        LOBYTE(Src) = v18;
        if ( v18 > 0 && v18 > v13 || (unsigned __int8)v18 > 5u )
        {
LABEL_31:
          if ( (a1 & 2) != 0 )
            *v12 = 0;
          else
            *(_BYTE *)v12 = 0;
          return 0xFFFFFFFFLL;
        }
        memmove(*a5, &Src, v18);
      }
      else
      {
        *(_BYTE *)*a5 = v18;
        v18 = *(_BYTE *)*a5;
      }
      v14 = a1 & 1;
      if ( v18 > 0 )
      {
        *a5 = (char *)*a5 + v18;
        v13 -= v18;
        goto LABEL_30;
      }
    }
  }
  v17 = a3;
LABEL_36:
  --*a4;
  if ( *v17 != 0xFFFF )
    ungetwc_nolock(*v17, File);
LABEL_38:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v21 = *a5;
      if ( (a1 & 2) != 0 )
        *v21 = 0;
      else
        *(_BYTE *)v21 = 0;
    }
  }
  return 0LL;
}
