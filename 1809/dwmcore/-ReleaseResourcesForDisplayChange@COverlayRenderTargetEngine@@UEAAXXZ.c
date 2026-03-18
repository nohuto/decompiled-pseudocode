/*
 * XREFs of ?ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ @ 0x18015ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COverlayRenderTargetEngine::ReleaseResourcesForDisplayChange(COverlayRenderTargetEngine *this)
{
  COverlayRenderTargetEngine::ReleaseRenderTarget((COverlayRenderTargetEngine *)((char *)this - 64));
}
