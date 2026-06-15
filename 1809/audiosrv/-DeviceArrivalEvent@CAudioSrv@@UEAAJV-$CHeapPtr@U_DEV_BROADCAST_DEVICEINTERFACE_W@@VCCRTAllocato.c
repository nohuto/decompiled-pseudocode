/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B0650
 * Callers:
 *     <none>
 * Callees:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180112510 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAudioSrv::DeviceArrivalEvent(__int64 a1, void **a2)
{
  BOOL v3; // ebx

  if ( (unsigned int)IsMmeAudioInterfaceArrivalSupported(a1) )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
    RtlReleaseResource(&PnpInfoResource);
  }
  v3 = (int)FlushDeviceTopologyCache() < 0;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)*a2 + 14);
  free(*a2);
  *a2 = 0LL;
  return v3;
}
