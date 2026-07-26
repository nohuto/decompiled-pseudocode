/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1C0014C20
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00905B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  KIRQL v4; // bp
  unsigned __int8 *NdisReserved; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD Parameter[7]; // [rsp+48h] [rbp-40h] BYREF

  memset(Parameter, 0, sizeof(Parameter));
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = NetDevicePnPEvent;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFDevicePnPEventNotifyInternal,
         Parameter,
         0x4CCCuLL,
         0,
         0LL) < 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
    {
      NdisReserved = NetDevicePnPEvent->NdisReserved;
      while ( *(_QWORD *)NetDevicePnPEvent->NdisReserved )
        ;
    }
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
