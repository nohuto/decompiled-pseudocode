/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800B0E38
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A7B50 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x1800AF814 (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x1800B0064 (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800B0748 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800B0960 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800B0F74 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x1800B10D8 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DE398 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  signed int v17; // eax
  __int64 v18; // rcx

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
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL))(this) )
      *((_QWORD *)this + 65) = *(_QWORD *)(*(_QWORD *)(a3 + 152) + 16LL);
  }
  else
  {
    CHwndRenderTarget::SetTransformParameters(
      this,
      *((unsigned int *)this + 125),
      (char *)this + 484,
      (char *)this + 468);
    if ( *(_QWORD *)v11 )
      *(_DWORD *)(*(_QWORD *)v11 + 304LL) = *((_DWORD *)this + 128);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL))(this) )
  {
    v14 = *(const struct CDisplay **)v11;
    v15 = (COverlayContext *)*((_QWORD *)this + 106);
    if ( v15 )
    {
      COverlayContext::UpdateDisplay(v15, v14);
    }
    else
    {
      v17 = COverlayContext::Create(*((struct CComposition **)this + 2), v14, (struct COverlayContext **)this + 106);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x833u, 0LL);
    }
  }
  CHwndRenderTarget::EnsureWNFHandles(this);
  return v10;
}
