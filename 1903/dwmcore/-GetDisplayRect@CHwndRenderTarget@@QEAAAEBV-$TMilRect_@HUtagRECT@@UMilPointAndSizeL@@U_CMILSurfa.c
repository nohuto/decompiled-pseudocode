/*
 * XREFs of ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800B071C
 * Callers:
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800938B4 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x1801A83AC (-GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAn.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800B0748 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetDisplayRect(CHwndRenderTarget *a1)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(a1) )
    return *((_QWORD *)a1 + 21) + 120LL;
  else
    return (__int64)a1 + 468;
}
