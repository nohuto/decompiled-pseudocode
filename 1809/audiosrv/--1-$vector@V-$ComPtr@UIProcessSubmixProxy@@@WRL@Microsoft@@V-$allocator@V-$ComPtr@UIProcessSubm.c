/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8A48
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180025824 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18006C5D2 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x18006C5F6 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$3 @ 0x18006DC10 (_UseSupportedConnectorMode_--_1_--dtor$3.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$1 @ 0x1800E89A6 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$3 @ 0x1800E89BE (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$3.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800EC284 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x1800EC5BE (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800ED21C (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1++);
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
