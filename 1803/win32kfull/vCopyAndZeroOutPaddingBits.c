/*
 * XREFs of vCopyAndZeroOutPaddingBits @ 0x1C0220CAC
 * Callers:
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

char __fastcall vCopyAndZeroOutPaddingBits(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  unsigned __int64 v6; // rdi
  int v7; // r11d
  int v8; // edx
  int v9; // eax
  bool v10; // cf
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r13
  unsigned int v14; // r11d
  char v15; // r10
  char *v16; // rbx
  _BYTE *v17; // rdi
  char *v18; // rsi
  int v19; // r10d
  size_t v20; // r14
  __int64 v21; // r15
  __int64 v22; // r12
  char v23; // bp
  unsigned __int64 v24; // r15
  char *v25; // r14
  unsigned __int64 v26; // r11
  _BYTE *v27; // r8
  char *v28; // r9
  char v29; // dl
  char v30; // dl
  _BYTE *v31; // r8
  char v33; // [rsp+60h] [rbp+8h]
  __int64 v34; // [rsp+68h] [rbp+10h]

  v4 = a4[4];
  v6 = (unsigned int)a4[2];
  v7 = v4 + v6 + a4[3];
  v8 = a4[5];
  v33 = byte_1C02E8418[v4 & 7];
  v9 = *(_DWORD *)(a1 + 40) & 0x10000;
  a2[2] = v4;
  v10 = v9 != 0;
  a2[3] = v8;
  LODWORD(v11) = *a4;
  v12 = (unsigned int)(v4 + 7) >> 3;
  v13 = v12 - 1;
  v14 = 4 * ((unsigned int)((v10 ? 8 : 1) * v7 + 31) >> 5);
  if ( *a4 )
  {
    v11 = v14 * (unsigned int)v11;
    a3 += v11;
  }
  v15 = v6;
  v16 = (char *)(a2 + 4);
  v17 = (_BYTE *)(a3 + (v6 >> 3));
  v18 = &v16[v12 * v8];
  v19 = v15 & 7;
  if ( v19 )
  {
    v23 = 8 - v19;
    v24 = a3 + v14 * v8;
    if ( v16 < v18 )
    {
      v11 = v14;
      v25 = &v16[v13];
      v34 = v14;
      do
      {
        v26 = v12 - 1;
        v27 = v17;
        if ( v16 > v25 )
          v26 = 0LL;
        v28 = v16;
        if ( v26 )
        {
          do
          {
            v29 = *v27++ << v19;
            *v28 = v29;
            *v28++ = v29 | (*v27 >> v23);
          }
          while ( v28 - v16 < v26 );
          v11 = v34;
        }
        v30 = *v27 << v19;
        v31 = v27 + 1;
        *v28 = v30;
        if ( (unsigned __int64)v31 < v24 )
        {
          v30 |= *v31 >> v23;
          *v28 = v30;
          v11 = v34;
        }
        v16 += v12;
        v25 += v12;
        *v28 = v33 & v30;
        v17 += v11;
      }
      while ( v16 < v18 );
    }
  }
  else if ( v16 < v18 )
  {
    v20 = v12;
    v21 = v12;
    v22 = v14;
    do
    {
      memmove(v16, v17, v20);
      LOBYTE(v11) = v33;
      v17 += v22;
      v16[v13] &= v33;
      v16 += v21;
    }
    while ( v16 < v18 );
  }
  return v11;
}
