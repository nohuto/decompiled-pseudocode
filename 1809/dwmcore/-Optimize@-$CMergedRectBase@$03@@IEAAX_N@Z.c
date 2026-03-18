/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800A9D80
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CMergedRectBase<4>::Optimize(__m128i *a1, char a2)
{
  __int64 result; // rax
  __m128i *v3; // r9
  unsigned int v4; // r10d
  __m128i *v5; // r11
  float v6; // xmm6_4
  __int64 v7; // rbx
  char v8; // bp
  float v9; // xmm2_4
  float *v10; // rcx
  unsigned int v11; // r10d
  float v12; // xmm1_4
  unsigned int v13; // eax
  unsigned int v14; // r8d
  __int8 *v15; // rdi
  __int64 v16; // rsi
  float *v17; // rdx
  __int8 v18; // dl
  __m128i v19; // xmm1
  __m128i v20; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = a1;
  if ( a2 || (a1[4].m128i_i8[4] & 0xF) == 0 )
  {
    v4 = 0;
    a1[4].m128i_i32[1] = 1;
    if ( a1[4].m128i_i32[2] > 1u )
    {
      v6 = 0.0;
      v5 = a1 + 4;
      v7 = 0LL;
      do
      {
        v8 = 0;
        v9 = v6;
        if ( v5->m128i_i8[v7] )
        {
          if ( IsEmpty((const struct D2D_RECT_F *)&v3[(unsigned int)v7]) )
            v12 = 0.0;
          else
            v12 = (float)(v10[3] - v10[1]) * (float)(v10[2] - *v10);
          if ( v12 > v6 )
            v6 = v12;
          v13 = v7;
          v14 = v7 + 1;
          if ( v12 <= v9 )
            v13 = v11;
          v4 = v13;
          if ( v14 < 4 )
          {
            v15 = &v3[4].m128i_i8[v14];
            while ( 1 )
            {
              if ( *v15 )
              {
                v16 = v14;
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v10,
                                        &v3[v14]) )
                  break;
              }
              ++v14;
              ++v15;
              if ( v14 >= 4 )
                goto LABEL_21;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v10, v17);
            v5->m128i_i8[v16] = 0;
            v8 = 1;
            --v3[4].m128i_i32[2];
          }
        }
LABEL_21:
        result = (unsigned int)(v7 + 1);
        v7 = 0LL;
        if ( !v8 )
          v7 = (unsigned int)result;
      }
      while ( (unsigned int)v7 < 4 );
    }
    else
    {
      if ( a1[4].m128i_i32[2] != 1 )
        return result;
      v5 = a1 + 4;
      result = (__int64)a1[4].m128i_i64;
      while ( !*(_BYTE *)result )
      {
        ++v4;
        ++result;
        if ( v4 >= 4 )
          return result;
      }
    }
    if ( v4 )
    {
      v18 = v5->m128i_i8[0];
      if ( v5->m128i_i8[0] )
        v19 = _mm_loadu_si128(v3);
      else
        v19 = v20;
      result = 2LL * v4;
      *v3 = v3[v4];
      v5->m128i_i8[0] = 1;
      if ( v18 )
      {
        v3[v4] = v19;
        v3[4].m128i_i8[v4] = 1;
      }
      else
      {
        v3[4].m128i_i8[v4] = 0;
      }
    }
  }
  return result;
}
