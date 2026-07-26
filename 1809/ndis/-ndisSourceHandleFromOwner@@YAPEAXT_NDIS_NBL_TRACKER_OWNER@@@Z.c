/*
 * XREFs of ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0002090 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C00036A0 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00057B0 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferLists @ 0x1C00060D0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007070 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C006AFEC (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006B8B0 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
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
