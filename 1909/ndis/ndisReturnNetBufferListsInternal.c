/*
 * XREFs of ndisReturnNetBufferListsInternal @ 0x1C00AF188
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088A70 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00ADEF4 (-ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00AE0B4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AE32C (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBAC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0090170 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AE0EC (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4)
{
  KIRQL v8; // r14
  struct _NET_BUFFER_LIST *i; // rdx
  struct NDIS_NBL_TRACKER_HANDLE__ *v10; // rdx
  char DatapathCyclesMask; // bp
  struct NDIS_PCW_CONTEXT v12; // [rsp+30h] [rbp-38h] BYREF

  v8 = 2;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v12, a1);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( a1->PeriodicReceiveQueue.NblsAllocated )
    a2 = ndisReturnPeriodicReceives(a1, a2);
  if ( a2 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      if ( a4 )
        v10 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a4 + 584);
      else
        v10 = 0LL;
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        v10,
        (unsigned __int64)a1->Next.ReturnNetBufferListsTracker,
        0x87u,
        a3 & 1);
    }
    DatapathCyclesMask = v12.DatapathCyclesMask;
    if ( (v12.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (a3 & 1) == 0 )
        v8 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v12, 5u);
      DatapathCyclesMask = v12.DatapathCyclesMask;
    }
    ndisInvokeNextReceiveCompleteHandler(
      a2,
      a3,
      (struct _NDIS_FILTER_BLOCK *)a1,
      &a1->Next.ReturnNetBufferListsObject->Type,
      a1->Next.ReturnNetBufferListsContext,
      (void (*)(void))a1->Next.ReturnNetBufferListsHandler);
    if ( (DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v12, 5u, 0x12uLL);
      if ( v8 != 2 )
        KeLowerIrql(v8);
    }
  }
}
