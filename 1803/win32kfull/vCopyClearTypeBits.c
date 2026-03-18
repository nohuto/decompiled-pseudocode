/*
 * XREFs of vCopyClearTypeBits @ 0x1C0220E50
 * Callers:
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int64 __fastcall vCopyClearTypeBits(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  __int64 v7; // r15
  size_t v8; // r14
  unsigned __int16 v9; // bx
  __int64 v12; // r13
  unsigned int v13; // r10d
  int v14; // esi
  int v15; // ecx
  int v16; // r9d
  unsigned __int16 v17; // r8
  int v18; // eax
  unsigned __int16 v19; // cx
  __int16 v20; // r9
  __int64 v21; // rsi
  _BYTE *v22; // rcx
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // ax
  unsigned int v25; // edx
  unsigned __int64 result; // rax
  _BYTE *v27; // r11
  __int64 v28; // r13
  _BYTE *v29; // rbp
  size_t v30; // r10
  _BYTE *v31; // rbx
  size_t i; // r8
  char v33; // al
  __int64 v34; // rsi

  v7 = (unsigned int)a4[2];
  v8 = (unsigned int)a4[4];
  v9 = a6;
  v12 = a1;
  v13 = 4 * ((unsigned int)(((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v8 + v7 + a4[3]) + 31) >> 5);
  v14 = *(_DWORD *)(a1 + 40) & 0x20000000;
  if ( v14 && (v15 = a4[1]) != 0 )
  {
    v16 = (a5 - a6) % 5;
    if ( !(_WORD)v16 )
      LOWORD(v16) = 5;
    v17 = 5 - 5 * v15 - v16 + a5;
  }
  else
  {
    v17 = a5;
  }
  v18 = *a4;
  if ( *a4 )
  {
    if ( v14 )
    {
      v9 = 5;
      v19 = a6 + 5 * v18 - 5;
      a3 += v13 * v19;
      v17 -= v19;
    }
    else
    {
      a3 += v13 * v18;
    }
  }
  v20 = *((_WORD *)a4 + 10);
  v21 = a3 + v7;
  *(_DWORD *)(a2 + 8) = v8;
  v22 = (_BYTE *)(a2 + 16);
  v23 = 5 * v20;
  if ( (*(_DWORD *)(v12 + 40) & 0x20000000) != 0 )
  {
    v24 = v23;
    if ( v23 >= v17 )
      v24 = v17;
    v25 = v24;
    result = v9;
  }
  else
  {
    v25 = a4[5];
    result = v25;
  }
  *(_DWORD *)(a2 + 12) = result;
  v27 = &v22[(unsigned int)v8 * v25];
  if ( v22 >= v27 )
  {
    v31 = (_BYTE *)a1;
  }
  else
  {
    v28 = v13;
    v29 = &v22[v8];
    result = 0LL;
    do
    {
      v30 = v8;
      v31 = v22;
      if ( v22 > v29 )
        v30 = 0LL;
      if ( v30 )
      {
        for ( i = 0LL; i < v30; ++i )
        {
          v33 = *(_BYTE *)(i + v21);
          *v31++ = v33;
        }
        result = 0LL;
      }
      v22 += v8;
      v29 += v8;
      v21 += v28;
    }
    while ( v22 < v27 );
    v12 = a1;
  }
  if ( (*(_DWORD *)(v12 + 40) & 0x20000000) != 0 )
  {
    result = v23;
    if ( v25 < v23 )
    {
      result = (unsigned int)a4[5];
      if ( 5 * (_DWORD)result != v25 )
      {
        v34 = 5 * (_DWORD)result - v25;
        do
        {
          result = (unsigned __int64)memset(v31, 0, v8);
          v31 += v8;
          --v34;
        }
        while ( v34 );
      }
    }
  }
  return result;
}
