/*
 * XREFs of ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801A5144
 * Callers:
 *     ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019E4E0 (--_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  ReleaseInterface<CD3DSurface>((__int64 *)this + 81);
  v2 = *((_QWORD *)this + 82);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = *((_QWORD *)this + 82);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
}
