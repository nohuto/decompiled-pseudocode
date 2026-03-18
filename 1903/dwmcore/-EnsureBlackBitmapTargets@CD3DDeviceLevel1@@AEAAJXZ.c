/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015CCAC
 * Callers:
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18015D5E8 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180006308 (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B20BC (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18015E02C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  signed int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  const char *v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-20h]
  _BYTE v13[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 864);
  if ( !*((_QWORD *)this + 108) )
  {
    v10 = 0LL;
    v4 = PixelFormatInfoFromDXGIFormatAndAlphaMode(
           DXGI_FORMAT_B8G8R8A8_UNORM,
           DXGI_ALPHA_MODE_PREMULTIPLIED,
           (struct PixelFormatInfo *)v13);
    v1 = v4;
    if ( v4 < 0 )
    {
      v9 = 1230;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v10);
      v12 = 22;
      v11 = "DWM stock black bitmap";
      v4 = CD3DDeviceLevel1::CreateRenderTargetBitmap(
             (__int64)this,
             (__int64)&v11,
             1u,
             1u,
             (int)DisplayId::None,
             (__int64)v13,
             0,
             &v10);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v6 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) + 192);
        if ( v6 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, void *))(**((_QWORD **)this + 80) + 400LL))(
            *((_QWORD *)this + 80),
            v6,
            &unk_1802E4170);
          Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(v2, &v10);
        }
        else
        {
          v1 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x4DAu, 0LL);
        }
        goto LABEL_10;
      }
      v9 = 1238;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v9, 0LL);
LABEL_10:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v10);
  }
  return v1;
}
