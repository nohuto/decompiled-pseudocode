/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@Z @ 0x1801F0EC0
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0764 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801EFB94 (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180258AD0 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180258E54 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(
        __int64 a1,
        CDrawingContext *a2,
        float a3,
        struct CDrawingContext *a4,
        __int64 *a5)
{
  signed int MaskIntermediate; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int BlurIntermediate; // eax
  __int64 v11; // rcx
  struct D2D_POINT_2F *v13; // [rsp+28h] [rbp-39h]
  struct CRenderTargetImageSource **v14; // [rsp+38h] [rbp-29h]
  struct CRenderTargetImageSource *v15; // [rsp+40h] [rbp-21h] BYREF
  const char *v16; // [rsp+48h] [rbp-19h] BYREF
  int v17; // [rsp+50h] [rbp-11h]
  __int64 v18[2]; // [rsp+58h] [rbp-9h] BYREF

  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    v15 = 0LL;
    *(_OWORD *)v18 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
    v16 = "DWM ProjectedShadow ApproxBlur";
    v17 = 30;
    MaskIntermediate = ShadowHelpers::GenerateMaskIntermediate(
                         (struct CResourceTag *)&v16,
                         a2,
                         0LL,
                         0,
                         (__int64)v18,
                         (__int64)&v15);
    v9 = MaskIntermediate;
    if ( MaskIntermediate < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MaskIntermediate, 0x34Cu, 0LL);
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(
      (__int64 *)&CProjectedShadow::s_cpMaskForBlur,
      (__int64 *)&v15);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  }
  v15 = 0LL;
  v18[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_64_0), (__m128)LODWORD(FLOAT_64_0)).m128_u64[0];
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  *(float *)&v13 = a3;
  v16 = "DWM ProjectedShadow ApproxBlur";
  v17 = 30;
  BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                       (ShadowHelpers *)&v16,
                       a2,
                       a4,
                       CProjectedShadow::s_cpMaskForBlur,
                       (struct IImageSource *)v18,
                       v13,
                       COERCE_FLOAT(&v15),
                       v14);
  v9 = BlurIntermediate;
  if ( BlurIntermediate < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BlurIntermediate, 0x35Du, 0LL);
  else
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(a5, (__int64 *)&v15);
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  return v9;
}
