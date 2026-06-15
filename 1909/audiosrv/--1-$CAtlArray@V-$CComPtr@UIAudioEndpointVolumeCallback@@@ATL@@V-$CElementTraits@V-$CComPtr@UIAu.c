/*
 * XREFs of ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800C8804
 * Callers:
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800709E0 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800C8A38 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C8FE0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800C90FC (_CLockedList_ATL--CComPtr_IAudioEndpointVolumeCallback__1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$4 @ 0x180108FCD (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$4.c)
 *     _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$0 @ 0x180109F56 (_CMonitorManager--HandleDeviceRemoved_--_1_--dtor$0.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x1800C8F60 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
