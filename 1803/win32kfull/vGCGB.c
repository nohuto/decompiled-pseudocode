/*
 * XREFs of vGCGB @ 0x1C0221B70
 * Callers:
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int64 __fastcall vGCGB(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r11
  __int64 v5; // rbx
  int v6; // r10d
  __int64 v7; // rcx
  unsigned int v8; // r10d
  int v9; // eax
  unsigned __int8 *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  int v18; // r12d
  unsigned __int64 v19; // r8
  unsigned __int8 *v20; // r10
  _BYTE *v21; // r9
  char v22; // dl
  __int64 v23; // rax
  size_t v24; // r8
  unsigned __int64 v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]

  v4 = (unsigned int)a4[4];
  v5 = (unsigned int)a4[2];
  v6 = ((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v4 + v5 + a4[3]);
  v7 = (unsigned int)(v4 + 1) >> 1;
  v8 = 4 * ((unsigned int)(v6 + 31) >> 5);
  if ( *a4 )
    a3 += v8 * *a4;
  v9 = a4[5];
  v10 = (unsigned __int8 *)(a3 + v5);
  v11 = a2 + 16;
  *(_DWORD *)(a2 + 12) = v9;
  result = (unsigned int)(v7 * v9);
  *(_DWORD *)(a2 + 8) = v4;
  v13 = a2 + 16 + (unsigned int)result;
  v25 = v13;
  if ( a2 + 16 < v13 )
  {
    v14 = (unsigned int)v7;
    v15 = v4 >> 1;
    v16 = v7 + v11;
    v26 = v8;
    v17 = (v4 >> 1) - (unsigned int)v7;
    v18 = v4 & 1;
    do
    {
      result = v16 + v17;
      v19 = v15;
      v20 = v10;
      v21 = (_BYTE *)v11;
      if ( v11 > v16 + v17 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          v22 = 16 * byte_1C02E8420[*v20];
          *v21 = v22;
          v23 = v20[1];
          v20 += 2;
          *v21++ = v22 + byte_1C02E8420[v23];
          result = (unsigned __int64)&v21[-v11];
        }
        while ( (unsigned __int64)&v21[-v11] < v19 );
        v13 = v25;
      }
      if ( v18 )
      {
        result = *v20;
        *v21++ = 16 * byte_1C02E8420[result];
      }
      v24 = v16 - (_QWORD)v21;
      if ( (unsigned __int64)v21 > v16 )
        v24 = 0LL;
      if ( v24 )
        result = (unsigned __int64)memset(v21, 0, v24);
      v10 += v26;
      v11 += v14;
      v16 += v14;
    }
    while ( v11 < v13 );
  }
  return result;
}
