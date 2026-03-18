/*
 * XREFs of ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18000466C
 * Callers:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x1800045B4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x180182560 (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000643C (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetStockTransparentImageNoRef(CDrawingContext *this, struct IImageSource **a2)
{
  struct CRenderTargetImageSource **v3; // rax
  unsigned int v4; // ebx
  struct CRenderTargetImageSource **v5; // rsi
  struct CRenderTargetImageSource **v6; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

  v3 = (struct CRenderTargetImageSource **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
  v4 = 0;
  v5 = v3;
  *a2 = 0LL;
  v6 = v3 + 105;
  if ( v3[105] )
    goto LABEL_2;
  v8 = CD3DDeviceLevel1::EnsureBlackBitmapTargets((CD3DDeviceLevel1 *)v3);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4E2u);
    return v4;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v6);
  v10 = CRenderTargetImageSource::Create(v5[104], 1, v6);
  v4 = v10;
  if ( v10 >= 0 )
LABEL_2:
    *a2 = *v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4E6u);
  return v4;
}
