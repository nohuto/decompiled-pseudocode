/*
 * XREFs of ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x1800E3FE0
 * Callers:
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1800E3F78 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     AudioServerGetStreamVpoContext @ 0x1800E8BC0 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

CVpoContextProxy *__fastcall CVpoContextProxy::CVpoContextProxy(
        CVpoContextProxy *this,
        struct ISubmixProxy *a2,
        struct ISaDeviceProxy *a3,
        struct IVpoContext *a4)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
    (_QWORD *)this + 1,
    (__int64)a3);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
