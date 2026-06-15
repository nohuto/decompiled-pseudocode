/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800BCD7C
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$22 @ 0x180070720 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$22.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$23 @ 0x180070740 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$23.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x180071620 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x180071700 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x180071D58 (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x180071EDE (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x180071F8E (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x180071FA4 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x180071FBA (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007202E (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x180072456 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x180072482 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007252D (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x1800726C6 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x180072A3E (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x180072A54 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x180072A6A (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x180073124 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$8 @ 0x180073220 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$8.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180073270 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x1800743B1 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x1800743DD (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800D5A01 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800D5A21 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800DCD04 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x1800ED0E5 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x180106FC5 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x18011ED51 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
