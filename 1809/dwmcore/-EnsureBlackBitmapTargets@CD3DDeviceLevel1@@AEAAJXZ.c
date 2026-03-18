/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000643C
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18000466C (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000656C (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000692C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800914A8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  char *v2; // rsi
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  const char *v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-20h]
  _BYTE v13[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (char *)this + 832;
  if ( !*((_QWORD *)this + 104) )
  {
    v10 = 0LL;
    v4 = PixelFormatInfoFromDXGIFormatAndAlphaMode(
           DXGI_FORMAT_B8G8R8A8_UNORM,
           DXGI_ALPHA_MODE_PREMULTIPLIED,
           (struct PixelFormatInfo *)v13);
    v1 = v4;
    if ( v4 < 0 )
    {
      v9 = 1214;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v10);
      v12 = 22;
      v11 = "DWM stock black bitmap";
      v4 = CD3DDeviceLevel1::CreateRenderTargetBitmap(this, &v11, 1LL);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v6 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) + 192);
        if ( v6 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, void *))(**((_QWORD **)this + 80) + 400LL))(
            *((_QWORD *)this + 80),
            v6,
            &unk_18024C608);
          Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v2, &v10);
        }
        else
        {
          v1 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x4CAu);
        }
        goto LABEL_6;
      }
      v9 = 1222;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v9);
LABEL_6:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v10);
  }
  return v1;
}
