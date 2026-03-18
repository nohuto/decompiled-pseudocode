/*
 * XREFs of ?DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z @ 0x180185778
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180059110 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::DbgSaveOverlayPlaneNeedsPresent(COverlayContext *this, unsigned int a2, char a3)
{
  if ( a2 < 2 )
    *((_BYTE *)this + 1352 * *((int *)this + 5398) + 544 * a2 + 14024) = a3;
}
