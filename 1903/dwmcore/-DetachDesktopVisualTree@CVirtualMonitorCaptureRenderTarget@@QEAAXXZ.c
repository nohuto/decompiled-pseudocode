/*
 * XREFs of ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A6D74
 * Callers:
 *     ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A6DB0 (-DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z @ 0x1801A72D0 (-SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?RemoveVirtualMonitorTarget@CDesktopRenderTarget@@QEAAXPEAVCVirtualMonitorCaptureRenderTarget@@@Z @ 0x1801A8D40 (-RemoveVirtualMonitorTarget@CDesktopRenderTarget@@QEAAXPEAVCVirtualMonitorCaptureRenderTarget@@@.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::DetachDesktopVisualTree(CVirtualMonitorCaptureRenderTarget *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  CDesktopRenderTarget *v4; // rcx

  v1 = (__int64 *)((char *)this + 648);
  v3 = *((_QWORD *)this + 81);
  if ( v3 )
  {
    v4 = *(CDesktopRenderTarget **)(v3 + 16);
    if ( v4 )
      CDesktopRenderTarget::RemoveVirtualMonitorTarget(v4, this);
  }
  ReleaseInterface<CD3DSurface>(v1);
}
