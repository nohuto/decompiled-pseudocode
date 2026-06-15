/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14002C510
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14001A128 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x14001AE96 (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x14001AF3D (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001B0E5 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14001B137 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14001B203 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x14002DD51 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14002DF2B (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x14002E10E (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x14002FCCB (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x14003762A (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x140039205 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
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
