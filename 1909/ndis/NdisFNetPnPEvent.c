/*
 * XREFs of NdisFNetPnPEvent @ 0x1C00141C0
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00905B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  KIRQL v5; // al
  PNET_PNP_EVENT_NOTIFICATION *v6; // rdx
  KIRQL v7; // bp
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD Parameter[7]; // [rsp+48h] [rbp-40h] BYREF

  memset(Parameter, 0, sizeof(Parameter));
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = NetPnPEventNotification;
  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFNetPnPEventInternal, Parameter, 0x4CCCuLL, 0, 0LL) >= 0 )
    return Parameter[0];
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
  v6 = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 256);
  *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
  v7 = v5;
  while ( *v6 )
    v6 = (PNET_PNP_EVENT_NOTIFICATION *)&(*v6)->NetPnPEvent.NdisReserved[3];
  *v6 = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}
