/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800D26F8
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015B5CC (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x18016726C (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800D27EC (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *v8; // rsi
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+30h] [rbp-28h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF

  v8 = a8;
  v20 = 0LL;
  *a8 = 0LL;
  v13 = *(_DWORD *)(a1 + 880);
  if ( v13 < 0 )
  {
    v17 = *(_DWORD *)(a1 + 880);
    v18 = 1172;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  v19 = a7;
  v14 = CHwTextureRenderTarget::Create(a1, a2, a3, a4, a5, a6, v19, &v20);
  v13 = v14;
  if ( v14 < 0 )
  {
    v18 = 1182;
    goto LABEL_7;
  }
  v14 = (**v20)(v20, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v8);
  v13 = v14;
  if ( v14 < 0 )
  {
    v18 = 1184;
LABEL_7:
    v17 = v14;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v17, v18, 0LL);
  }
  v15 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v13, 0);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  return v15;
}
