/*
 * XREFs of ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18015D5E8
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18016FCA0 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015CCAC (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockTransparentImageNoRef(CD3DDeviceLevel1 *this, struct IImageSource **a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = (__int64 *)((char *)this + 872);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 109) )
    goto LABEL_7;
  v6 = CD3DDeviceLevel1::EnsureBlackBitmapTargets(this);
  v2 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4F2u, 0LL);
    return v2;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v3);
  v8 = CRenderTargetImageSource::Create(
         *((struct IRenderTarget **)this + 108),
         1,
         0LL,
         (struct CRenderTargetImageSource **)v3);
  v2 = v8;
  if ( v8 >= 0 )
LABEL_7:
    *a2 = (struct IImageSource *)*v3;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4F6u, 0LL);
  return v2;
}
