/*
 * XREFs of ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180209280
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C7EC (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qz @ 0x1802087EC (McTemplateU0qz.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x180208BDC (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Init(CHDRConversionRenderTarget *this, __int64 a2, int a3)
{
  int SwapChain; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int HDRIntermediateTargetBitmap; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 27),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 248),
                (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 146),
                a3,
                (struct _LUID *)a2,
                (CHDRConversionRenderTarget *)((char *)this + 240));
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SwapChain, 0x3Cu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v8, v7, *((unsigned int *)this + 72), (const wchar_t *)(a2 + 160));
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 80));
    v9 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, HDRIntermediateTargetBitmap, 0x42u);
    }
    else
    {
      v12 = CHwDisplayRenderTarget::Init(this, a2, a3);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x46u);
    }
  }
  return v9;
}
