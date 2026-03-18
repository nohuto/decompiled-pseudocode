/*
 * XREFs of ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x18015B08C
 * Callers:
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016CB0C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215040 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180083B38 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall InflateRectFToPointAndSizeL(float *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebx
  float *v5; // rcx
  __int64 v6; // r9
  unsigned __int32 *v7; // r10
  float v8; // xmm1_4
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  int v11; // ecx
  __m128 v12; // xmm1
  unsigned __int32 v13; // edx
  __m128 v14; // xmm0
  int v15; // eax
  unsigned __int32 v16; // r8d
  unsigned __int32 v17; // eax
  unsigned __int32 v19; // [rsp+50h] [rbp+18h]

  v4 = 0;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && (v8 = *v5, *v5 >= -1073741800.0)
    && v8 <= 1073741800.0
    && (v9 = (__m128)*((unsigned int *)v5 + 1), v9.m128_f32[0] >= -1073741800.0)
    && v9.m128_f32[0] <= 1073741800.0
    && v5[2] <= 1073741800.0
    && v5[3] <= 1073741800.0 )
  {
    v10 = (__m128)*(unsigned int *)v5;
    v11 = (int)v8;
    v12.m128_f32[0] = (float)(int)v8;
    v13 = v11 + _mm_cmplt_ss(v10, v12).m128_u32[0];
    *v7 = v13;
    v12.m128_f32[0] = (float)(int)v9.m128_f32[0];
    v14 = (__m128)*(unsigned int *)(v6 + 8);
    v15 = (int)v14.m128_f32[0];
    v19 = _mm_cmplt_ss(v9, v12).m128_u32[0];
    v12.m128_i32[0] = *(_DWORD *)(v6 + 8);
    v16 = (int)v9.m128_f32[0] + v19;
    v7[1] = v16;
    v14.m128_f32[0] = (float)(int)v14.m128_f32[0];
    v17 = v15 - v13 - _mm_cmplt_ss(v14, v12).m128_u32[0];
    v14.m128_i32[0] = *(_DWORD *)(v6 + 12);
    v7[2] = v17;
    *(float *)&a4 = (float)(int)v14.m128_f32[0];
    v7[3] = (int)v14.m128_f32[0] - v16 - _mm_cmplt_ss(*(__m128 *)&a4, v14).m128_u32[0];
  }
  else
  {
    v4 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, 0x8898000A, 0x101u, 0LL);
  }
  return v4;
}
