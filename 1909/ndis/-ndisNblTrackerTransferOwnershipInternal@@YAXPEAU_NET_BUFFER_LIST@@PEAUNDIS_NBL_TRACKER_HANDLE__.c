/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C000AD70 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C000BB30 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0011390 (ndisReturnNblWithPowerQueue.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0014538 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C007A9F0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0089164 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B6D4 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C008B800 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C008BFF0 (ndisMSendPacketsToNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CD4C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C008E704 (ndisFDoLoopbackNetBufferList.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0090D10 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C00AAEB0 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD4A4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AECA0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AF188 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C00B8B28 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C00B8B94 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C00B8CA4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C00B8D08 (ndisReplaySendNbls.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0040D34 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char v6; // r12
  char v7; // di
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v14; // rbx
  char *v15; // r8
  _UNKNOWN **v16; // r9
  unsigned __int64 v17; // rdi
  char *SourceHandle; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  char v29; // [rsp+80h] [rbp+8h]
  unsigned __int64 v30; // [rsp+88h] [rbp+10h]
  char *v31; // [rsp+90h] [rbp+18h]
  char v32; // [rsp+A0h] [rbp+28h]

  v30 = (unsigned __int64)a2;
  v6 = 0;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v32 = 0;
  v9 = 0LL;
  v29 = v8;
  v10 = 0LL;
  v11 = 0LL;
  Alignment = a1;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, a2, a4, (void *)a3, a5);
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
    v15 = *(char **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v15 = (char *)v14;
  v31 = v15;
  if ( (v14 & 1) != 0 )
    v14 |= 2LL * (v7 & 1);
  if ( Alignment )
  {
    v16 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
      {
        if ( !v17 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v30 & 0xFFFFFFFFFFFFFFFDuLL, a2, v15, v16);
        if ( (v17 & 4) != 0 )
          goto LABEL_42;
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          LOBYTE(a2) = *SourceHandle;
          if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || (_BYTE)a2 == 5 )
          {
            if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
            {
              ++v9;
              v19 = v14;
            }
            else
            {
              ++v11;
              v19 = 24LL;
              ++v9;
            }
            goto LABEL_17;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v16 )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)a2,
              27,
              12,
              (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
              (char)Alignment,
              *SourceHandle);
            goto LABEL_39;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v16 )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            27,
            11,
            (struct _GUID *)&WPP_0e15274e9078352b9fdc8c42b4e0d774_Traceguids,
            (char)Alignment);
LABEL_39:
          v16 = &WPP_RECORDER_INITIALIZED;
        }
LABEL_42:
        v15 = v31;
        v19 = v14 | 4;
LABEL_17:
        Alignment->NetBufferListInfo[27] = (void *)v19;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v8 = v29;
      v20 = v10 - v9;
      v6 = v32;
      if ( (v17 & 1) != 0 && v20 )
      {
        if ( !v29 && !v32 )
        {
          v6 = 1;
          v32 = 1;
          v8 = KeGetCurrentIrql() == 2;
          v29 = v8;
        }
        v21 = v17;
        v22 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
        a2 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v21 >> 1) & 1));
        if ( v8 )
        {
          v23 = (_QWORD *)(*(_QWORD *)((char *)a2 + v22 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v23 += v20;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a2 + v22 + 48), v20);
        }
      }
      v10 = v9;
    }
    while ( Alignment );
  }
  v24 = v9 - v11;
  if ( (v14 & 1) != 0 && v24 )
  {
    if ( !v8 && !v6 )
      v8 = KeGetCurrentIrql() == 2;
    v25 = v14;
    v26 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = 2 * ((v25 >> 1) & 1);
    if ( v8 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v26 + 8 * v27 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v28 += v24;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v27 + 48), v24);
    }
  }
}
