/*
 * XREFs of ndisDereferenceRef @ 0x1C0018814
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ndisCancelOidRequestInternal @ 0x1C0044178 (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00447E0 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A48 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00487B0 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C005B0A0 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C005B200 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B8630 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B8DF0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00BDB3C (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00EC710 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 *     ndisFNotifyDetach @ 0x1C00EC974 (ndisFNotifyDetach.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

bool __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // si
  __int16 v5; // dx
  bool v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  NdisDereferenceWithTag(SpinLock[2], a2);
  v5 = *((_WORD *)SpinLock + 4) - 1;
  *((_WORD *)SpinLock + 4) = v5;
  v6 = v5 == 0;
  if ( !v5 && !*((_BYTE *)SpinLock + 11) )
  {
    NdisFreeRefCount(SpinLock[2]);
    SpinLock[2] = 1LL;
  }
  KeReleaseSpinLock(SpinLock, v4);
  return v6;
}
