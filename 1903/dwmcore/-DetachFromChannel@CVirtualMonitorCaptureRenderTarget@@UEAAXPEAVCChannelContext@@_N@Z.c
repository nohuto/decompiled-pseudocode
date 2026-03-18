/*
 * XREFs of ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A6DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A6D74 (-DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::DetachFromChannel(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CChannelContext *a2)
{
  CVirtualMonitorCaptureRenderTarget::DetachDesktopVisualTree(this);
  CCaptureRenderTarget::SetController(this, 0LL);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
