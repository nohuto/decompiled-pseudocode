/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002E784
 * Callers:
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$0 @ 0x180039C29 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$0 @ 0x180039D4D (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RecalculateVolume_::_1_::dtor$0 @ 0x180039D71 (_AudioStateMonitorManager--RecalculateVolume_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
