/*
 * XREFs of ?DbgSaveOverlayPlaneNeedsPresent@COverlayContext@@AEAAXI_N@Z @ 0x18016A8F8
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::DbgSaveOverlayPlaneNeedsPresent(COverlayContext *this, unsigned int a2, char a3)
{
  if ( a2 < 2 )
    *((_BYTE *)this + 1352 * *((int *)this + 5394) + 544 * a2 + 14008) = a3;
}
