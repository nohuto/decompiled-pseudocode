/*
 * XREFs of ndisDereferenceRef @ 0x1C0018014
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ndisDereferenceProtocol @ 0x1C00280E0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceFilterDriver @ 0x1C0029C04 (ndisDereferenceFilterDriver.c)
 *     ndisCancelOidRequestInternal @ 0x1C0069FC4 (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C006A6E0 (ndisDoCancelDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FC44 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 *     ndisDereferenceFilter @ 0x1C008E22C (ndisDereferenceFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C008E450 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C008E5F0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisFNotifyDetach @ 0x1C008F420 (ndisFNotifyDetach.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0090D10 (ndisStackExpansionFallbackWorker.c)
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C0116CD0 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

char __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // si
  char v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  NdisDereferenceWithTag(SpinLock[2], a2);
  if ( (*((_WORD *)SpinLock + 4))-- == 1 )
  {
    v6 = 1;
    if ( !*((_BYTE *)SpinLock + 11) )
    {
      NdisFreeRefCount(SpinLock[2]);
      SpinLock[2] = 1LL;
    }
  }
  else
  {
    v6 = 0;
  }
  KeReleaseSpinLock(SpinLock, v4);
  return v6;
}
