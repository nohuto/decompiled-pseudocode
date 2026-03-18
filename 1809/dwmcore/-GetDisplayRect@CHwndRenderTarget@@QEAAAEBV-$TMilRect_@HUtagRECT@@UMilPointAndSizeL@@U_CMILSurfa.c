/*
 * XREFs of ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D90C8
 * Callers:
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800C8BB8 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800D842C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800D9140 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x18015A13C (-GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAn.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800D90F4 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetDisplayRect(CHwndRenderTarget *a1)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(a1) )
    return *((_QWORD *)a1 + 21) + 120LL;
  else
    return (__int64)a1 + 468;
}
