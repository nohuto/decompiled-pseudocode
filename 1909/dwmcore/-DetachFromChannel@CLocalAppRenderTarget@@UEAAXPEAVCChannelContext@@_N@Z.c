/*
 * XREFs of ?DetachFromChannel@CLocalAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180199030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLocalAppRenderTarget::DetachFromChannel(CLocalAppRenderTarget *this, struct CChannelContext *a2)
{
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
