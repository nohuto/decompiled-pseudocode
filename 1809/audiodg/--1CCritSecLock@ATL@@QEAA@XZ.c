/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140032A10
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140009640 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x14001F7D0 (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001FDCD (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$2 @ 0x14001FEC0 (_CSubmixImpl--Initialize_--_1_--dtor$2.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x140020B10 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x140020F22 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x1400210F3 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140033FC1 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14003419B (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x14003437E (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x14003D3ED (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
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
