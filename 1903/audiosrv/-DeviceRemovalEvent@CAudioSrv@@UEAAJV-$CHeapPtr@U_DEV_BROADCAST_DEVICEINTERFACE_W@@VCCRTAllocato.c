/*
 * XREFs of ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800BF0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x1801048A8 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x18011EAE8 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAudioSrv::DeviceRemovalEvent(__int64 a1, void **a2)
{
  BOOL v3; // ebx
  __int64 v4; // rcx

  v3 = (int)MME_AudioInterfaceRemove((const unsigned __int16 *)*a2 + 14) < 0;
  KsNotifications_AudioInterfaceRemoval((const unsigned __int16 *)*a2 + 14);
  if ( (int)FlushDeviceTopologyCache(v4) < 0 )
    v3 = 1;
  free(*a2);
  *a2 = 0LL;
  return v3;
}
