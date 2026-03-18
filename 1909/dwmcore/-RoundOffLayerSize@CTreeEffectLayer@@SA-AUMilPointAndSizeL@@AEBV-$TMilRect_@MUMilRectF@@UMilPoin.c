/*
 * XREFs of ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013A98
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
int *__fastcall CTreeEffectLayer::RoundOffLayerSize(int *a1, __int64 a2, double a3)
{
  float v3; // xmm4_4
  int v4; // eax
  float v5; // xmm3_4
  int v6; // eax
  __m128 v7; // xmm0
  int v8; // eax
  __m128 v9; // xmm1
  unsigned __int32 v10; // eax
  __m128 v12; // rt1
  float v13; // [rsp+8h] [rbp+8h]
  float v14; // [rsp+8h] [rbp+8h]

  v3 = *(float *)a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v3 - v3;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v4 = (int)v3 - LODWORD(a3);
  }
  else
  {
    v13 = v3 + 6291456.25;
    v4 = (int)(LODWORD(v13) << 10) >> 11;
  }
  v5 = *(float *)(a2 + 4);
  *a1 = v4;
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v5 - v5;
    v12.m128_f32[0] = FLOAT_N0_5;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v12);
    v6 = (int)v5 - LODWORD(a3);
  }
  else
  {
    v14 = v5 + 6291456.25;
    v6 = (int)(LODWORD(v14) << 10) >> 11;
  }
  v7 = (__m128)*(unsigned int *)(a2 + 8);
  v7.m128_f32[0] = v7.m128_f32[0] - v3;
  a1[1] = v6;
  v8 = (int)v7.m128_f32[0];
  v9.m128_i32[0] = v7.m128_i32[0];
  v7.m128_f32[0] = (float)(int)v7.m128_f32[0];
  v10 = v8 - _mm_cmplt_ss(v7, v9).m128_u32[0];
  v7.m128_i32[0] = *(_DWORD *)(a2 + 12);
  a1[2] = v10;
  v7.m128_f32[0] = v7.m128_f32[0] - v5;
  *(float *)&a3 = (float)(int)v7.m128_f32[0];
  a1[3] = (int)v7.m128_f32[0] - _mm_cmplt_ss(*(__m128 *)&a3, v7).m128_u32[0];
  return a1;
}
