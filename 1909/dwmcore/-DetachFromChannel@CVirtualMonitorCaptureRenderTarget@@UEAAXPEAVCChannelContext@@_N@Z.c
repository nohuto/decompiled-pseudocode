/*
 * XREFs of ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A54F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A54B4 (-DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024E620 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::DetachFromChannel(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CChannelContext *a2)
{
  CVirtualMonitorCaptureRenderTarget::DetachDesktopVisualTree(this);
  CCaptureRenderTarget::SetController(this, 0LL);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this);
}
