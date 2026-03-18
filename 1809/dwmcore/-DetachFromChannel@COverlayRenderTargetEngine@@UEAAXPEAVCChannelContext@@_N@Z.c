/*
 * XREFs of ?DetachFromChannel@COverlayRenderTargetEngine@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180020860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COverlayRenderTargetEngine::DetachFromChannel(
        COverlayRenderTargetEngine *this,
        struct CChannelContext *a2)
{
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
