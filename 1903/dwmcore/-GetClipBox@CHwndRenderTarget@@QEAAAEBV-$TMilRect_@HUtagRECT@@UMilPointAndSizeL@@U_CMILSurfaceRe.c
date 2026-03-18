/*
 * XREFs of ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800B06F0
 * Callers:
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800938B4 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800B0748 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetClipBox(CHwndRenderTarget *a1)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(a1) )
    return *((_QWORD *)a1 + 21) + 104LL;
  else
    return (__int64)a1 + 484;
}
