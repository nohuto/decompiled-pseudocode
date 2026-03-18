/*
 * XREFs of ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18024F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::DetachFromChannel(CCaptureRenderTarget *this, struct CChannelContext *a2)
{
  CCaptureRenderTarget::SetController(this, 0LL);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
