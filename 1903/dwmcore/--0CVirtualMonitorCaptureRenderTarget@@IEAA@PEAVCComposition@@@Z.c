/*
 * XREFs of ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019DE28
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019CDE4 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CComposition *a2)
{
  CVirtualMonitorCaptureRenderTarget *result; // rax

  CCaptureRenderTarget::CCaptureRenderTarget(this, a2);
  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  result = this;
  *((_QWORD *)this + 82) = 0LL;
  return result;
}
