/*
 * XREFs of ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180067AB8
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800159D4 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     __lambda_3af8306e4cb261445d9be7b235e038d7_::operator()_::_1_::dtor$2 @ 0x180065962 (__lambda_3af8306e4cb261445d9be7b235e038d7_--operator()_--_1_--dtor$2.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$1 @ 0x18006A7C2 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$1.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x18006A8E0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$5.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18006C5E4 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$0 @ 0x18006F5F2 (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$0.c)
 *     _CAudioSrv::Terminate_::_1_::dtor$0 @ 0x1800B3253 (_CAudioSrv--Terminate_--_1_--dtor$0.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$7 @ 0x1800EC1DE (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$7.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$1 @ 0x1800ED204 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$1.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x1800EE250 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 *     _CSpatialAudioTech::FreeAtmosCheck_::_1_::dtor$0 @ 0x180124EE4 (_CSpatialAudioTech--FreeAtmosCheck_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1);
}
