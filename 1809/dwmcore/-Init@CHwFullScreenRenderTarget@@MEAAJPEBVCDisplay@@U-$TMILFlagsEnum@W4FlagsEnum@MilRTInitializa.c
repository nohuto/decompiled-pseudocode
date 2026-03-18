/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C730
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1802072F0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C7EC (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18007C908 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qz @ 0x1802087EC (McTemplateU0qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, CDisplay *a2)
{
  CSwapChainBase **v3; // r14
  int SwapChain; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  int LogicalBackBuffer; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx

  v3 = (CSwapChainBase **)((char *)this + 240);
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 27),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 248),
                a2,
                (__int64)this + 240);
  v8 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180292610, 2u, SwapChain, 0x3Du);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v7, v6, *((unsigned int *)this + 72), (char *)a2 + 160);
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(*v3, (struct CD3DSurface **)this + 25);
    v8 = LogicalBackBuffer;
    if ( LogicalBackBuffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180292610, 2u, LogicalBackBuffer, 0x44u);
    }
    else
    {
      v11 = CHwDisplayRenderTarget::Init(this);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180292610, 2u, v11, 0x48u);
    }
  }
  return v8;
}
