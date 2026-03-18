/*
 * XREFs of ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3A38 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E3AFC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     McTemplateU0qz @ 0x1801668F0 (McTemplateU0qz.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x18016726C (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Init(CHDRConversionRenderTarget *this, __int64 a2, int a3)
{
  signed int SwapChain; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  signed int HDRIntermediateTargetBitmap; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx

  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 19),
                (int *)this + 46,
                (struct D3D11_SUBRESOURCE_DATA *)*((unsigned int *)this + 130),
                a3,
                (struct _LUID *)a2,
                (CHDRConversionRenderTarget *)((char *)this + 176));
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SwapChain, 0x3Au, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v8, v7, *((unsigned int *)this + 56), (const wchar_t *)(a2 + 160));
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 64));
    v9 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, HDRIntermediateTargetBitmap, 0x40u, 0LL);
    }
    else
    {
      v12 = CHwDisplayRenderTarget::Init(this, a2, a3);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x44u, 0LL);
    }
  }
  return v9;
}
