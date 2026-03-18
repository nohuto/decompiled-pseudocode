/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18005AEE0 (-GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z @ 0x18005AF50 (-CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18005AFA0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18005AFF0 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18005B080 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800EADC0 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180206DC0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v3; // ecx

  v1 = *((_QWORD *)this + 27);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 848);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925D8, 2u, v2, 0x302u);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v2 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802925D8, 2u, -2003304442, 0x30Cu);
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925D8, 2u, -2003304307, 0x306u);
  }
  return (unsigned int)v2;
}
