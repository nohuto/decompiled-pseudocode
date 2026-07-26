/*
 * XREFs of ndisReferenceRefEx @ 0x1C001C808
 * Callers:
 *     ndisReferenceDriver @ 0x1C00151A8 (ndisReferenceDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C0016340 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00186F0 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ndisReferenceFilterDriver @ 0x1C001A4CC (ndisReferenceFilterDriver.c)
 *     ndisReferenceRef @ 0x1C001C7EC (ndisReferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023BE0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C0025450 (NdisAllocateIoWorkItem.c)
 *     NdisCancelDirectOidRequest @ 0x1C00435A0 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00447E0 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A48 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00487B0 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0048AD8 (ndisRefNextFilterForOidCancellation.c)
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     NdisFRestartFilter @ 0x1C005ACC0 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C005B0A0 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceFilterByHandle @ 0x1C005C744 (ndisReferenceFilterByHandle.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
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
