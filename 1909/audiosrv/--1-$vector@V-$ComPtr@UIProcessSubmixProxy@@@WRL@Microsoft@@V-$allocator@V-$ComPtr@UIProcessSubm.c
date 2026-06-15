/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D55DC
 * Callers:
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x18006D980 (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$2 @ 0x18006D992 (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$8 @ 0x180073D02 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x180073D14 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x180073DFD (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     __lambda_4b3be4062b453557032a0102af949bc6_::operator()_::_1_::dtor$0 @ 0x1800ED51F (__lambda_4b3be4062b453557032a0102af949bc6_--operator()_--_1_--dtor$0.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800F2F3C (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$2 @ 0x1800F35CB (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$2.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$3 @ 0x1800F35D7 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$3.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$4 @ 0x1800F35E3 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$4.c)
 *     __lambda_f3d78743e27405bb129d35bae2d06b95_::operator()_::_1_::dtor$0 @ 0x1800F5A98 (__lambda_f3d78743e27405bb129d35bae2d06b95_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800F88BA (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x1800F88EA (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1800F95DA (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
