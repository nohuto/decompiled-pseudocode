/*
 * XREFs of ?ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ @ 0x1801A4F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COverlayRenderTargetEngine::ReleaseResourcesForDisplayChange(COverlayRenderTargetEngine *this)
{
  COverlayRenderTargetEngine::ReleaseRenderTarget((COverlayRenderTargetEngine *)((char *)this - 64));
}
