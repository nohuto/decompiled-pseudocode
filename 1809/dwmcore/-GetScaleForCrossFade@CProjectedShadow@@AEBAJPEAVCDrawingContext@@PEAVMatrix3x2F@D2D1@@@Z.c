/*
 * XREFs of ?GetScaleForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z @ 0x1801CAFA4
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801C8358 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F@@@Z @ 0x1801CB1C4 (-GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F.c)
 */

__int64 __fastcall CProjectedShadow::GetScaleForCrossFade(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2D1::Matrix3x2F *a3)
{
  int ShadowWithoutBlurSizeForCrossFade; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  float v7; // xmm1_4
  __m128 v8; // xmm2
  struct D2D_SIZE_F v10; // [rsp+30h] [rbp-38h] BYREF
  float v11[6]; // [rsp+38h] [rbp-30h]

  ShadowWithoutBlurSizeForCrossFade = CProjectedShadow::GetShadowWithoutBlurSizeForCrossFade(this, a2, &v10);
  v6 = ShadowWithoutBlurSizeForCrossFade;
  if ( ShadowWithoutBlurSizeForCrossFade < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ShadowWithoutBlurSizeForCrossFade, 0x7A5u);
  }
  else
  {
    v7 = fminf(v10.width, v10.height);
    v8 = (__m128)LODWORD(FLOAT_64_0);
    *(_QWORD *)&v11[1] = 0LL;
    v11[0] = v7 / 33.0;
    v11[3] = v7 / 33.0;
    *(_OWORD *)a3 = *(_OWORD *)v11;
    v8.m128_f32[0] = 64.0 - (float)((float)(v7 / 33.0) * 64.0);
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps(v8, v8).m128_u64[0];
  }
  return v6;
}
