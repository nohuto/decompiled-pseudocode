/*
 * XREFs of ndisReturnNetBufferListsInternal @ 0x1C0026640
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002160 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054EB0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C006D3EC (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006D9F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006E210 (ndisMIndicateSplitNblChain.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006E668 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C006EAFC (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005C2AC (ndisInvokeNextReceiveCompleteHandler.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisReturnPeriodicReceives @ 0x1C006EB34 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  char v7; // r15
  struct _NET_BUFFER_LIST *v8; // rsi
  KIRQL v9; // r14
  unsigned int v10; // eax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rdx
  char DatapathCyclesMask; // bp
  struct NDIS_PCW_CONTEXT v14; // [rsp+30h] [rbp-38h] BYREF

  v14.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = a3;
  v14.CurrentCpu = -1;
  v8 = a2;
  v14.DatapathEventsMask = v6;
  v9 = 2;
  v10 = *(_DWORD *)(a1 + 80);
  Alignment = a2;
  for ( v14.DatapathCyclesMask = v10; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C009FE30 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 3248) )
    v8 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(a1, a2, a3, a4);
  if ( v8 )
  {
    if ( ndisNblTrackerMode )
    {
      if ( a4 )
        v12 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a4 + 584);
      else
        v12 = 0LL;
      ndisNblTrackerTransferOwnershipInternal(
        v8,
        v12,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 2552),
        NdisNblTrackerEvent_ProtocolReturned,
        v7 & 1);
    }
    DatapathCyclesMask = v14.DatapathCyclesMask;
    if ( (v14.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (v7 & 1) == 0 )
        v9 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v14, 5u);
      DatapathCyclesMask = v14.DatapathCyclesMask;
    }
    ndisInvokeNextReceiveCompleteHandler(v8, *(void **)(a1 + 2544), *(void (**)(void))(a1 + 2656));
    if ( (DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v14, 5u, 0x12uLL);
      if ( v9 != 2 )
        KeLowerIrql(v9);
    }
  }
}
