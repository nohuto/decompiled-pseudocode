/*
 * XREFs of ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F1518
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2338 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180258AD0 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180258E54 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::GenerateFastShadowIntermediate(CProjectedShadow *this, struct CDrawingContext *a2)
{
  signed int MaskIntermediate; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int BlurIntermediate; // eax
  __int64 v7; // rcx
  struct D2D_POINT_2F *v9; // [rsp+30h] [rbp-21h]
  struct CRenderTargetImageSource **v10; // [rsp+40h] [rbp-11h]
  struct D2D_SIZE_F *v11; // [rsp+48h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp-1h]
  int v13; // [rsp+54h] [rbp+3h]
  _DWORD v14[2]; // [rsp+58h] [rbp+7h] BYREF
  const char *v15; // [rsp+60h] [rbp+Fh] BYREF
  int v16; // [rsp+68h] [rbp+17h]
  __int64 v17[2]; // [rsp+70h] [rbp+1Fh] BYREF

  v11 = 0LL;
  v12 = 1107558400;
  *(_OWORD *)v17 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v13 = 1107558400;
  v14[0] = 1115815936;
  v14[1] = 1115815936;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v11);
  v15 = "DWM ProjectedShadow FastShadow";
  v16 = 30;
  MaskIntermediate = ShadowHelpers::GenerateMaskIntermediate(
                       (struct CResourceTag *)&v15,
                       a2,
                       0LL,
                       0,
                       (__int64)v17,
                       (__int64)&v11);
  v5 = MaskIntermediate;
  if ( MaskIntermediate < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, MaskIntermediate, 0x319u, 0LL);
  }
  else
  {
    v17[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_16_0), (__m128)LODWORD(FLOAT_16_0)).m128_u64[0];
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate);
    *(float *)&v9 = FLOAT_16_0;
    v15 = "DWM ProjectedShadow FastShadow";
    v16 = 30;
    BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                         (ShadowHelpers *)&v15,
                         a2,
                         (struct CDrawingContext *)v14,
                         v11,
                         (struct IImageSource *)v17,
                         v9,
                         COERCE_FLOAT(&CProjectedShadow::s_cpFastShadowIntermediate),
                         v10);
    v5 = BlurIntermediate;
    if ( BlurIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, BlurIntermediate, 0x323u, 0LL);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v11);
  return v5;
}
