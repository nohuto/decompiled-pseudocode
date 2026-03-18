/*
 * XREFs of ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18002A944
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180028760 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180099574 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x18002A99C (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetClipBox(CHwndRenderTarget *a1)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(a1) )
    return *((_QWORD *)a1 + 21) + 104LL;
  else
    return (__int64)a1 + 484;
}
