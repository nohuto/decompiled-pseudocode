/*
 * XREFs of ndisReferenceRefEx @ 0x1C001B320
 * Callers:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0014018 (ndisGetHigherFilterWithPnpRef.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015084 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001BB10 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     ndisReferenceFilterDriver @ 0x1C0029BF4 (ndisReferenceFilterDriver.c)
 *     NdisAllocateIoWorkItem @ 0x1C003E1B0 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceRef @ 0x1C003F3B4 (ndisReferenceRef.c)
 *     ndisReferenceDriver @ 0x1C003F604 (ndisReferenceDriver.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F99C (ndisReferenceMiniportByHandle.c)
 *     NdisCancelDirectOidRequest @ 0x1C0068CB0 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C006A510 (ndisDoCancelDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FA74 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C006FDE8 (ndisRefNextFilterForOidCancellation.c)
 *     ndisSynchronousOidRequestInternal @ 0x1C0070038 (ndisSynchronousOidRequestInternal.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007C9F0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     NdisFRestartFilter @ 0x1C008DC70 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C008E280 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFNotifyDetach @ 0x1C008F250 (ndisFNotifyDetach.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceFilterByHandle @ 0x1C0090438 (ndisReferenceFilterByHandle.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0092120 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D330 (NdisIMDeInitializeDeviceInstance.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceRefEx(PKSPIN_LOCK SpinLock, unsigned __int8 a2, _DWORD *a3)
{
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // si
  unsigned __int16 v9; // cx

  v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v7 = *((_BYTE *)SpinLock + 10) == 0;
  *a3 = 1;
  v8 = v6;
  if ( v7 )
  {
    v9 = *((_WORD *)SpinLock + 4);
    if ( v9 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      *a3 = 2;
    }
    else
    {
      *((_WORD *)SpinLock + 4) = v9 + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2], a2);
      *a3 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v8);
  return *a3 == 0;
}
