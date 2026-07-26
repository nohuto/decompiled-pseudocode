/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0008AE0 (ndisReturnNblWithPowerQueue.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0010B88 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C004DA80 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0055494 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0055D90 (ndisDoLoopbackNetBufferList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0058140 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0058B90 (ndisMSendPacketsToNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C005B2B8 (ndisFDoLoopbackNetBufferList.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C006BA70 (NdisNblTrackerTransferOwnership.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C00750A0 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C007510C (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C007521C (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0075280 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0002090 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00020FC (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006BA0C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *Alignment,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  char v5; // di
  __int64 v6; // rsi
  char v8; // cl
  char v9; // al
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int8 *v14; // r13
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h] BYREF

  v5 = ndisNblTrackerEpoch;
  v6 = 0LL;
  v19 = 0LL;
  v8 = a5;
  v17 = 0LL;
  v9 = a5 & 1;
  a5 = 0;
  v18 = v9;
  v12 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(Alignment, (unsigned __int64)a2, a4, a3, v8);
  v13 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  v14 = (unsigned __int8 *)ndisSourceHandleFromOwner(v13);
  if ( (v13 & 1) != 0 )
    v13 |= 2LL * (v5 & 1);
  v15 = 0LL;
  if ( Alignment )
  {
    do
    {
      v16 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      do
      {
        if ( Alignment->NetBufferListInfo[27] != (void *)v16 )
          break;
        ndisNblTrackerTransferOneNbl(Alignment, v16, (__int64)a2, v13, v14, &v19, &v17);
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( (v16 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v16, v12 - v19, &v18, &a5);
      v12 = v19;
      v15 = v19;
    }
    while ( Alignment );
    v6 = v17;
  }
  if ( (v13 & 1) != 0 )
    ndisNblTrackerUpdateOwnershipCount(v13, v15 - v6, &v18, &a5);
}
