/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x1801EEF18
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0BA8 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000FFE0 (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadow::EnsureNoInvalidIntermediates(CProjectedShadow *this)
{
  CRenderTargetImageSource *v2; // rcx

  if ( CProjectedShadow::s_cpFastShadowIntermediate
    && !CRenderTargetImageSource::IsValid(CProjectedShadow::s_cpFastShadowIntermediate) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate);
  }
  if ( CProjectedShadow::s_cpHalfBlurAsset && !CRenderTargetImageSource::IsValid(CProjectedShadow::s_cpHalfBlurAsset) )
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset);
  if ( CProjectedShadow::s_cp1xBlurAsset && !CRenderTargetImageSource::IsValid(CProjectedShadow::s_cp1xBlurAsset) )
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
  if ( CProjectedShadow::s_cp2xBlurAsset && !CRenderTargetImageSource::IsValid(CProjectedShadow::s_cp2xBlurAsset) )
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
  if ( CProjectedShadow::s_cpMaskForBlur
    && !CRenderTargetImageSource::IsValid((CRenderTargetImageSource *)CProjectedShadow::s_cpMaskForBlur) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&CProjectedShadow::s_cpMaskForBlur);
  }
  v2 = (CRenderTargetImageSource *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    if ( !CRenderTargetImageSource::IsValid(v2) )
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 36);
  }
}
