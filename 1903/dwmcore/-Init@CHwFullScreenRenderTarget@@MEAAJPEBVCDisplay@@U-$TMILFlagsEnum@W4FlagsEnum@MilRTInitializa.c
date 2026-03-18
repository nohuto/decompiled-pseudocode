/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3030
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801669B0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2B98 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3108 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800E34F4 (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qz @ 0x180167FE0 (McTemplateU0qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, CDisplay *a2)
{
  CSwapChainBase **v4; // r14
  CD3DDeviceLevel1 *v5; // rcx
  signed int SwapChain; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  *((_BYTE *)this + 500) = CComputeScribbleRenderer::IsDriverWhitelisted(*((const struct CD3DDeviceLevel1 **)this + 19));
  v4 = (CSwapChainBase **)((char *)this + 176);
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(v5, a2, (__int64)this + 176);
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    v12 = 62;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)this + 55) & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 19) + 696LL);
    if ( *(int *)(v8 + 348) < 2600 )
    {
      *((_BYTE *)this + 500) = 1;
    }
    else if ( (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)*v4 + 304LL))(*v4) != 2 )
    {
      *((_BYTE *)a2 + 318) = 1;
      ReleaseInterface<CD3DSurface>((__int64 *)this + 22);
      v9 = -2003304306;
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802C0218, 3u, 0x8898008E, 0x4Cu, 0LL);
      return v9;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qz(v8, v7, *((unsigned int *)this + 56), (char *)a2 + 160);
  SwapChain = CSwapChainBase::GetLogicalBackBuffer(*v4, (struct CD3DSurface **)this + 17);
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    v12 = 91;
    goto LABEL_15;
  }
  SwapChain = CHwDisplayRenderTarget::Init(this);
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    v12 = 95;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802C0218, 3u, SwapChain, v12, 0LL);
  }
  return v9;
}
