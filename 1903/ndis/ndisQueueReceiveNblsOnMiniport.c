/*
 * XREFs of ndisQueueReceiveNblsOnMiniport @ 0x1C00B8958
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00B5BE4 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

struct _NET_BUFFER_LIST **__fastcall ndisQueueReceiveNblsOnMiniport(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v5; // rcx
  struct _NET_BUFFER_LIST **result; // rax

  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 616), 1u, 1u);
  Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
  v5 = a2;
  while ( Alignment )
  {
    v5 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
  }
  result = *(struct _NET_BUFFER_LIST ***)(a1 + 568);
  *result = a2;
  *(_QWORD *)(a1 + 568) = v5;
  return result;
}
