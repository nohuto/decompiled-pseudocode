/*
 * XREFs of ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800BAC80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800BAA70 (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeInternalNotification(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioEndpointVolumeCallback *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v4, (__int64)a2);
  return CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(this + 3, &v4);
}
