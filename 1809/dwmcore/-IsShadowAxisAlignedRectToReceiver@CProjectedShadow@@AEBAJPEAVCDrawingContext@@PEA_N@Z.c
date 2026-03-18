/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB9B8
 * Callers:
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEAA_NXZ @ 0x1801ADA80 (-IsRectangular@CProjectedShadowCaster@@QEAA_NXZ.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801E2D18 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  CVisual *v5; // r15
  bool v7; // di
  unsigned int v8; // ebx
  struct CVisual *v9; // r13
  FLOAT v10; // xmm3_4
  __m128 v11; // xmm2
  FLOAT v12; // xmm0_4
  FLOAT v13; // xmm1_4
  __m128 v14; // xmm2
  FLOAT v15; // xmm0_4
  FLOAT v16; // xmm1_4
  CProjectedShadowCaster *v17; // r10
  int v18; // eax
  __int64 v19; // rcx
  struct D2D_VECTOR_4F v20; // xmm7
  __m128i v21; // xmm6
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm2_4
  struct D2D_VECTOR_4F v27; // [rsp+38h] [rbp-99h] BYREF
  struct D2D_VECTOR_4F v28; // [rsp+48h] [rbp-89h] BYREF
  struct D2D_VECTOR_4F v29; // [rsp+58h] [rbp-79h] BYREF
  struct D2D_VECTOR_4F v30; // [rsp+68h] [rbp-69h] BYREF
  struct D2D_VECTOR_4F v31; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v32[64]; // [rsp+88h] [rbp-49h] BYREF
  int v33; // [rsp+C8h] [rbp-9h]
  FLOAT v34; // [rsp+138h] [rbp+67h] BYREF
  FLOAT v35; // [rsp+148h] [rbp+77h] BYREF

  v5 = *(CVisual **)(*((_QWORD *)this + 9) + 56LL);
  v7 = 0;
  v8 = 0;
  v9 = *(struct CVisual **)(*((_QWORD *)this + 10) + 56LL);
  CVisual::GetEffectiveSize(v5, &v35, &v34);
  v27.z = 0.0;
  v10 = v35;
  v28.x = 0.0;
  v28.z = 0.0;
  LODWORD(v30.x) = _xmm;
  LODWORD(v30.w) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
  LODWORD(v30.y) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  LODWORD(v30.z) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
  v27.x = v35;
  v27.y = v34;
  v28.y = v34;
  v27.w = 1.0;
  v28.w = 1.0;
  v11 = (__m128)v28;
  v33 = 0;
  *a3 = 0;
  LODWORD(v28.x) = v11.m128_i32[0];
  LODWORD(v12) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  LODWORD(v13) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  LODWORD(v28.w) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  v14 = (__m128)v27;
  v27.y = 0.0;
  v27.z = 0.0;
  v28.y = v12;
  v28.z = v13;
  LODWORD(v29.x) = v14.m128_i32[0];
  LODWORD(v29.w) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v27.x = v10;
  LODWORD(v29.y) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  LODWORD(v29.z) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v27.w = 1.0;
  LODWORD(v15) = _mm_shuffle_ps((__m128)v27, (__m128)v27, 85).m128_u32[0];
  LODWORD(v16) = _mm_shuffle_ps((__m128)v27, (__m128)v27, 170).m128_u32[0];
  LODWORD(v27.w) = _mm_shuffle_ps((__m128)v27, (__m128)v27, 255).m128_u32[0];
  v27.y = v15;
  v27.z = v16;
  if ( CProjectedShadowCaster::IsRectangular(v17) )
  {
    v18 = CProjectedShadow::ProjectOntoAndLocalize(
            this,
            a2,
            v5,
            v9,
            *(struct CCompositionLight **)(*((_QWORD *)this + 11) + 88LL),
            (struct CMILMatrix *)v32);
    v8 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3FBu);
    }
    else
    {
      v20 = (struct D2D_VECTOR_4F)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector(
                                                                     (CMILMatrix *)v32,
                                                                     &v31,
                                                                     &v30));
      v30 = v20;
      v21 = _mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v31, &v28));
      v28 = (struct D2D_VECTOR_4F)v21;
      v29 = *CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v31, &v29);
      v27 = *CMILMatrix::Transform4DVector((CMILMatrix *)v32, &v31, &v27);
      v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20.x - *(float *)v21.m128i_i32)) & _xmm);
      if ( v22 <= 0.0000011920929 )
      {
        v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28.y - v29.y)) & _xmm);
        if ( v23 <= 0.0000011920929 )
        {
          v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29.x - v27.x)) & _xmm);
          if ( v24 <= 0.0000011920929 )
          {
            v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27.y - v30.y)) & _xmm);
            v7 = v25 <= 0.0000011920929;
          }
        }
      }
      *a3 = v7;
    }
  }
  return v8;
}
