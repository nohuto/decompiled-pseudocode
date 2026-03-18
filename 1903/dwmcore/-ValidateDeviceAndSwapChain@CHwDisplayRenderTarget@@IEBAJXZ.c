/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800B85F0
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800B8310 (-GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z @ 0x1800B8380 (-CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ @ 0x1800B83D0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x1800B8420 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800B84B0 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800DD290 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180166500 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rax
  signed int v2; // ebx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 880);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C0180, 2u, v2, 0x302u, 0LL);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v2 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802C0180, 2u, 0x88980006, 0x30Cu, 0LL);
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C0180, 2u, 0x8898008D, 0x306u, 0LL);
  }
  return (unsigned int)v2;
}
