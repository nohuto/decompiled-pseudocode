/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18008B6D8
 * Callers:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B168 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800C9BE4 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__m128i *a1, char a2)
{
  __m128i *v2; // r10
  int v3; // r11d
  __m128i *v4; // rbx
  __m128i *i; // rax
  float v6; // xmm4_4
  __int64 v7; // rdi
  char v8; // si
  float v9; // xmm2_4
  float *m128i_i32; // rcx
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // eax
  __int64 v15; // rdx
  __int8 *v16; // r9
  float *v17; // r8
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  unsigned int v22; // eax
  __int8 v23; // dl
  __m128i v24; // xmm1
  __int64 v25; // r9
  __m128i v26; // [rsp+20h] [rbp-28h]

  v2 = a1;
  if ( a2 || (a1[4].m128i_i8[4] & 0xF) == 0 )
  {
    v3 = 0;
    a1[4].m128i_i32[1] = 1;
    if ( a1[4].m128i_i32[2] > 1u )
    {
      v6 = 0.0;
      v4 = a1 + 4;
      v7 = 0LL;
      do
      {
        v8 = 0;
        v9 = v6;
        if ( v4->m128i_i8[v7] )
        {
          m128i_i32 = (float *)v2[(unsigned int)v7].m128i_i32;
          v11 = m128i_i32[2];
          if ( v11 <= *m128i_i32 || (v12 = m128i_i32[3], v12 <= m128i_i32[1]) )
            v13 = 0.0;
          else
            v13 = (float)(v12 - m128i_i32[1]) * (float)(v11 - *m128i_i32);
          if ( v13 > v6 )
            v6 = v13;
          v14 = v7;
          v15 = (unsigned int)(v7 + 1);
          if ( v13 <= v9 )
            v14 = v3;
          v3 = v14;
          if ( (unsigned int)v15 < 4 )
          {
            v16 = &v2[4].m128i_i8[(unsigned int)v15];
            v17 = (float *)&v2[(unsigned int)v15].m128i_i32[1];
            while ( 1 )
            {
              if ( *v16 )
              {
                v18 = m128i_i32[2];
                if ( v18 > *m128i_i32 )
                {
                  v19 = m128i_i32[3];
                  if ( v19 > m128i_i32[1] )
                  {
                    v20 = v17[1];
                    if ( v20 > *(v17 - 1) )
                    {
                      v21 = v17[2];
                      if ( v21 > *v17 && v18 > *(v17 - 1) && v20 > *m128i_i32 && v19 > *v17 && v21 > m128i_i32[1] )
                        break;
                    }
                  }
                }
              }
              v15 = (unsigned int)(v15 + 1);
              ++v16;
              v17 += 4;
              if ( (unsigned int)v15 >= 4 )
                goto LABEL_29;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(m128i_i32, &v2[v15]);
            v4->m128i_i8[v25] = 0;
            v8 = 1;
            --v2[4].m128i_i32[2];
          }
        }
LABEL_29:
        v22 = v7 + 1;
        v7 = 0LL;
        if ( !v8 )
          v7 = v22;
      }
      while ( (unsigned int)v7 < 4 );
    }
    else
    {
      if ( a1[4].m128i_i32[2] != 1 )
        return;
      v4 = a1 + 4;
      for ( i = a1 + 4; !i->m128i_i8[0]; i = (__m128i *)((char *)i + 1) )
      {
        if ( (unsigned int)++v3 >= 4 )
          return;
      }
    }
    if ( v3 )
    {
      v23 = v4->m128i_i8[0];
      if ( v4->m128i_i8[0] )
        v24 = _mm_loadu_si128(v2);
      else
        v24 = v26;
      *v2 = v2[v3];
      v4->m128i_i8[0] = 1;
      if ( v23 )
      {
        v2[v3] = v24;
        v2[4].m128i_i8[v3] = 1;
      }
      else
      {
        v2[4].m128i_i8[v3] = 0;
      }
    }
  }
}
