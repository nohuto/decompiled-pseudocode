/*
 * XREFs of ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D44
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0010740 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0040C28 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C00AA3A8 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00AAB38 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSourceHandleFromOwner(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    return a1;
}
