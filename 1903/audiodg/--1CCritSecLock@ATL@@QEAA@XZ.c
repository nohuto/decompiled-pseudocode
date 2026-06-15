/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002C5D0
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x140019D38 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x14001AAA6 (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x14001AB4D (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001ACF5 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001AD47 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001AE13 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x14002DDD1 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14002DFAB (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x14002E18E (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x14002FD4B (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x14003763A (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x140039265 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
