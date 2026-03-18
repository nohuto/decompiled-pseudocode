/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180064D10
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ @ 0x1800626F0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180062B00 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180064BD0 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z @ 0x1800CC460 (-CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D8380 (-GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800DDF00 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180164E10 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v3; // ecx

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 880);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802BE2C0, 2u, v2, 0x302u, 0LL);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v2 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BE2C0, 2u, -2003304442, 0x30Cu, 0LL);
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802BE2C0, 2u, -2003304307, 0x306u, 0LL);
  }
  return (unsigned int)v2;
}
