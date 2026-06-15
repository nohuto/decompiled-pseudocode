/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800BD258
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18006CCD4 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18006CCEA (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18006CD00 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18006D15C (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18006D3F1 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18006D4E2 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18006D5DC (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18006D5F2 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18006D608 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18006D67C (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18006DB04 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18006DB30 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$22 @ 0x180070220 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$22.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$23 @ 0x180070240 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$23.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x180071120 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x180071200 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x1800717BF (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007188E (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x180071EBB (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x180071EE7 (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$8 @ 0x180073130 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$8.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180073180 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800D5E51 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800D5E71 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800DD1A4 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x1800ED565 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1801074C5 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x18011F1ED (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
