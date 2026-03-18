/*
 * XREFs of ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C00D7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r11
  unsigned __int8 *v5; // r10
  unsigned __int8 *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  const __m128i *v11; // rdx
  __m128i *v12; // rax
  unsigned __int64 v13; // r9
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  signed __int64 v19; // rdx

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = a4;
    v8 = a2;
    v9 = (unsigned int)(a1->sizlBitmap.cx + 1) >> 1;
    do
    {
      v10 = v9;
      v11 = (const __m128i *)aj;
      v12 = (__m128i *)v5;
      v13 = 0LL;
      if ( v5 > &v5[v9] )
        v10 = 0LL;
      if ( v10 )
      {
        if ( v10 >= 0x40 && (v5 > &aj[v10 - 1] || &v5[v10 - 1] < aj) )
        {
          do
          {
            v13 += 64LL;
            v14 = _mm_loadu_si128(v11 + 1);
            *v12 = _mm_or_si128(_mm_loadu_si128(v12), _mm_loadu_si128(v11));
            v15 = _mm_or_si128(_mm_loadu_si128(v12 + 1), v14);
            v16 = _mm_loadu_si128(v11 + 2);
            v12[1] = v15;
            v17 = _mm_or_si128(_mm_loadu_si128(v12 + 2), v16);
            v18 = _mm_loadu_si128(v11 + 3);
            v11 += 4;
            v12[2] = v17;
            v12[3] = _mm_or_si128(_mm_loadu_si128(v12 + 3), v18);
            v12 += 4;
          }
          while ( v13 < (v10 & 0xFFFFFFC0) );
        }
        if ( v13 < v10 )
        {
          v19 = (char *)v11 - (char *)v12;
          do
          {
            ++v13;
            v12->m128i_i8[0] |= v12->m128i_u8[v19];
            v12 = (__m128i *)((char *)v12 + 1);
          }
          while ( v13 < v10 );
        }
      }
      v5 += v7;
      aj += v8;
    }
    while ( v5 < v6 );
  }
}
