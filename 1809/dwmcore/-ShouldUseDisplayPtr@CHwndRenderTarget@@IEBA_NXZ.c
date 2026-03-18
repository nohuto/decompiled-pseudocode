/*
 * XREFs of ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800D90F4
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D9074 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800D90A0 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D90C8 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndRenderTarget::ShouldUseDisplayPtr(CHwndRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 224LL))(this)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 1257LL) )
  {
    return 1;
  }
  return v2;
}
