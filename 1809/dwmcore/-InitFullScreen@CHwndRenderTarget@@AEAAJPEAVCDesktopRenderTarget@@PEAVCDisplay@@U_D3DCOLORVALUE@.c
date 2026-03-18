/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800D842C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180159930 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x18008FE14 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D59D4 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x1800D874C (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800D88E0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800D90F4 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InitFullScreen(
        CHwndRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v10; // esi
  char *v11; // r14
  _DWORD *v12; // rdx
  __int128 v13; // xmm0
  const struct CDisplay *v14; // rdx
  COverlayContext *v15; // rcx
  int updated; // eax
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rcx

  *((_QWORD *)this + 24) = a2;
  v10 = 0;
  CHwndRenderTarget::ReleaseResources(this);
  v11 = (char *)this + 168;
  ReplaceInterface<CDisplay,CDisplay>((__int64 *)this + 21, (__int64 (__fastcall ***)(_QWORD))a3);
  v12 = (_DWORD *)*((_QWORD *)this + 21);
  v13 = *a4;
  *((_DWORD *)this + 22) = v12[24] - v12[22];
  *((_DWORD *)this + 23) = v12[25] - v12[23];
  *((_BYTE *)this + 160) = a6;
  *((_BYTE *)this + 862) = a7;
  *((_DWORD *)this + 107) = a5;
  *((_DWORD *)this + 112) = a5 & 0xFFFEFFFF;
  *(_OWORD *)((char *)this + 452) = v13;
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 224LL))(this) )
      *((_QWORD *)this + 65) = *(_QWORD *)(*(_QWORD *)(a3 + 152) + 16LL);
  }
  else
  {
    CHwndRenderTarget::SetTransformParameters(
      (__int64)this,
      *((_DWORD *)this + 125),
      (__int128 *)((char *)this + 484),
      (CHwndRenderTarget *)((char *)this + 468));
    if ( *(_QWORD *)v11 )
      *(_DWORD *)(*(_QWORD *)v11 + 312LL) = *((_DWORD *)this + 127);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 224LL))(this) )
  {
    v14 = *(const struct CDisplay **)v11;
    v15 = (COverlayContext *)*((_QWORD *)this + 106);
    if ( v15 )
    {
      updated = COverlayContext::UpdateDisplay(v15, v14);
      v10 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, updated, 0x81Fu);
    }
    else
    {
      v19 = COverlayContext::Create(*((struct CComposition **)this + 2), v14, (struct COverlayContext **)this + 106);
      v10 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x81Bu);
    }
  }
  CHwndRenderTarget::EnsureWNFHandles(this);
  return v10;
}
