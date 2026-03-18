/*
 * XREFs of CreateStandardMonoPattern @ 0x1C0150C40
 * Callers:
 *     GetCachedSMP @ 0x1C00C4C74 (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1C00C4E48 (FindCachedSMP.c)
 * Callees:
 *     DivFD6 @ 0x1C00C43C4 (DivFD6.c)
 *     ComputeBytesPerScanLine @ 0x1C00C4DF4 (ComputeBytesPerScanLine.c)
 *     DrawCornerLine @ 0x1C0151078 (DrawCornerLine.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  unsigned __int16 v3; // bx
  unsigned int v4; // r12d
  unsigned __int8 v5; // r14
  BOOL v6; // r11d
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // cl
  unsigned int v9; // r10d
  unsigned int v10; // edi
  BOOL v11; // r13d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // ebx
  unsigned __int16 v18; // r15
  unsigned __int16 v19; // ax
  _BYTE *v20; // rdi
  char *v21; // rsi
  __int64 v22; // r13
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  _BYTE *v26; // rdx
  int v27; // r8d
  char v28; // al
  char *v29; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v32; // al
  __int16 k; // ax
  int v34; // [rsp+20h] [rbp-48h]
  unsigned __int16 v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+34h] [rbp-34h]
  int v37; // [rsp+44h] [rbp-24h]
  __m128i v38; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v40; // [rsp+B0h] [rbp+48h]
  unsigned int v42; // [rsp+C0h] [rbp+58h]
  __int16 v43; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  v43 = 0;
  v38 = *a2;
  v40 = v3;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v36 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v6 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v7 = 8;
  v38.m128i_i8[4] = v7;
  v8 = v38.m128i_u8[5];
  if ( !v38.m128i_i8[5] )
    v8 = 15;
  v38.m128i_i8[5] = v8;
  v9 = ((v8 >> 1) + 100 * v4) / v8;
  v37 = v7;
  v10 = (v4 * v7 + 5) / 0xA;
  if ( v38.m128i_i8[3] <= 2u )
  {
    v11 = v6;
    v38.m128i_i16[4] = (v9 + 50) / 0x64;
    LOWORD(v15) = v38.m128i_i16[4];
    if ( v38.m128i_i8[3] )
    {
      if ( v38.m128i_i8[3] == 1 )
        v9 = 800;
    }
    else
    {
      LOWORD(v15) = 8 * v38.m128i_u8[2];
      v38.m128i_i16[4] = v15;
    }
LABEL_10:
    v16 = v10 - v36;
    if ( (_WORD)v4 != v3 )
      v9 = ((v4 >> 1) + v9 * v3) / v4;
    if ( !(_WORD)v15 )
    {
      LOWORD(v15) = 1;
      v38.m128i_i16[4] = 1;
    }
    v17 = (v9 + 50) / 0x64;
    v38.m128i_i16[5] = v17;
    if ( !(_WORD)v17 )
    {
      LOWORD(v17) = 1;
      v38.m128i_i16[5] = 1;
    }
    v18 = 1;
    v19 = v15 - 1;
    if ( (unsigned __int16)((v16 + 50) / 0x64u) <= (unsigned __int16)v15 )
      v19 = (v16 + 50) / 0x64u;
    if ( v19 )
      v18 = v19;
    v35 = ComputeBytesPerScanLine(1u, v38.m128i_u8[2], (unsigned __int16)v15);
    v38.m128i_i16[3] = v35;
    v42 = v35 * (unsigned __int16)v17;
    v20 = Src;
    if ( !Src )
      goto LABEL_34;
    memset(Src, 0, (unsigned __int16)v42);
    if ( v5 )
    {
      if ( v5 > 2u )
      {
        if ( v5 <= 0x11u )
        {
          LOWORD(v34) = v18;
          DrawCornerLine(Src, v34, v11);
          if ( v43 == 2 )
          {
            v29 = &Src[v35 * ((unsigned __int16)v17 - 1)];
            for ( i = (unsigned __int16)v17 >> 1; i; v29 -= 2 * (unsigned int)v35 )
            {
              --i;
              for ( j = v35; j; --j )
              {
                *v29 |= *v20;
                v32 = *v29++;
                *v20++ = v32;
              }
            }
            v20 = Src;
          }
        }
LABEL_33:
        if ( (v38.m128i_i8[0] & 2) != 0 )
        {
          for ( k = v42; k; --k )
          {
            *v20 = ~*v20;
            ++v20;
          }
        }
LABEL_34:
        *a2 = v38;
        a2[1].m128i_i64[0] = (__int64)Src;
        return v42;
      }
      v26 = &Src[(unsigned __int64)(unsigned __int16)(((unsigned __int16)v15 - v18) >> 1) >> 3];
      v27 = 128 >> ((((unsigned __int16)v15 - v18) >> 1) & 7);
      while ( 1 )
      {
        v28 = 0;
        if ( !v18 )
          break;
        do
        {
          --v18;
          v28 |= v27;
          LOBYTE(v27) = (unsigned __int8)v27 >> 1;
        }
        while ( (_BYTE)v27 && v18 );
        *v26 = v28;
        LOBYTE(v27) = 0x80;
        ++v26;
      }
      v21 = Src;
      v22 = (unsigned __int16)v17;
      do
      {
        memmove(v21, Src, v35);
        v21 += v35;
        --v22;
      }
      while ( v22 );
    }
    if ( v5 != 1 )
    {
      v23 = v17 - 1;
      v24 = 1;
      if ( (unsigned __int16)(((v37 * (unsigned int)v40 + 5) / 0xA - v36 + 50) / 0x64) < (unsigned __int16)v17 )
        v23 = ((v37 * (unsigned int)v40 + 5) / 0xA - v36 + 50) / 0x64;
      if ( v23 )
        v24 = v23;
      memset(&Src[v35 * (((unsigned __int16)v17 - v24) >> 1)], 255, v24 * v35);
    }
    goto LABEL_33;
  }
  if ( v38.m128i_i8[3] <= 0x11u )
  {
    v11 = v6;
    v12 = (unsigned __int16)(v38.m128i_u8[3] - 3) / 3u;
    v43 = (unsigned __int16)(v38.m128i_u8[3] - 3) % 3u;
    if ( v38.m128i_u8[3] - 3 != 3 * ((unsigned __int16)(v38.m128i_u8[3] - 3) / 3u) )
      v11 = !v6;
    v13 = HIWORD(MonoPatRatio[v12]);
    v14 = MonoPatRatio[v12] >> 17;
    v15 = (v14 + 100 * v9) / v13;
    v38.m128i_i16[4] = v15;
    v9 = (v14 + v9 * (unsigned __int16)MonoPatRatio[v12]) / v13;
    v10 = (v14 + 10000 * v10) / v13;
    goto LABEL_10;
  }
  return 0LL;
}
