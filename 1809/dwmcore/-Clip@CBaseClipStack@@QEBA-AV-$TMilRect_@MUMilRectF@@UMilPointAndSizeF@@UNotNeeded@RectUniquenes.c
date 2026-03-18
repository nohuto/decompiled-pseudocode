/*
 * XREFs of ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180014BB0
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014B40 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall CBaseClipStack::Clip(__int64 a1, __m128 *a2, float *a3)
{
  __m128 v3; // xmm0
  __m128 *result; // rax
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  __m128 v9; // [rsp+0h] [rbp-10h]

  if ( *(_DWORD *)a1 )
  {
    v3 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 16) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1)));
    v9 = v3;
    v9.m128_i32[0] = v3.m128_i32[0];
    v5 = v3.m128_f32[0];
    if ( *a3 > v3.m128_f32[0] )
    {
      v9.m128_f32[0] = *a3;
      v5 = *a3;
      v3 = v9;
    }
    v6 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
    if ( a3[1] > v6 )
    {
      v9.m128_f32[1] = a3[1];
      v6 = v9.m128_f32[1];
      v3 = v9;
    }
    v7 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
    if ( v7 > a3[2] )
    {
      v9.m128_f32[2] = a3[2];
      v7 = v9.m128_f32[2];
      v3 = v9;
    }
    v8 = _mm_shuffle_ps(v3, v3, 255).m128_f32[0];
    if ( v8 > a3[3] )
    {
      v9.m128_f32[3] = a3[3];
      v8 = v9.m128_f32[3];
      v3 = v9;
    }
    if ( v7 <= v5 || v8 <= v6 )
      v3 = 0uLL;
  }
  else
  {
    v3 = *(__m128 *)a3;
  }
  result = a2;
  *a2 = v3;
  return result;
}
