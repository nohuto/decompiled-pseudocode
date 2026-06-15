/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800AE730
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001F658 (--1CAudioSession@@MEAA@XZ.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18006B937 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18006B9FD (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18006BA13 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18006BA29 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18006BA9D (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18006BF62 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18006BF8E (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18006C110 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x18006C1F0 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$15 @ 0x18006CC10 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$15.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18006EE30 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$8 @ 0x18006EEE0 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$8.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x18006F331 (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18006F668 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18006FA24 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18006FC1B (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18006FC31 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18006FC5D (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x1800700AC (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x1800700C2 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x1800700D8 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800C7471 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800C7491 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800CEB11 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x1800E1EB1 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800FAEE7 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x180112CCD (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
