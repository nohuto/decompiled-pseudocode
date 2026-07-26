/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754
 * Callers:
 *     NdisAllocatePacket @ 0x1C00324F0 (NdisAllocatePacket.c)
 *     ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078870 (-ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078940 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ndisMAllocSGList @ 0x1C00790F0 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0079544 (ndisMAllocSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B268 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B3FC (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C007DA00 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E90 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088540 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00889F0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0088A90 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0088B40 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C00895AC (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 *     NdisMSendComplete @ 0x1C0089BE0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C008A2F0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C008A520 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C008A940 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C008AD90 (ndisMDeferredSendSG.c)
 *     ndisMLoopbackPacketX @ 0x1C008AFC8 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C008B270 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C008B410 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C008B7D0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C008B860 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C008BA60 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BBE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C008BE20 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C008C6B0 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C008C7A0 (ndisSendPacketsWithPause.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0096EBC (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReturnPackets @ 0x1C0098A70 (NdisReturnPackets.c)
 *     ndisMAbortPackets @ 0x1C009978C (ndisMAbortPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00A2310 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C00A3120 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C00A3260 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C00AF130 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C00AF264 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_STACK_RESERVED_FROM_PACKET(struct _NDIS_PACKET *a1, struct _NDIS_STACK_RESERVED **a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(unsigned int *)&a1[-1].ProtocolReserved[4];
  if ( (unsigned int)v2 >= ndisPacketStackSize )
    v3 = 16LL;
  else
    v3 = (__int64)a1 + 48 * (v2 - ndisPacketStackSize);
  *a2 = (struct _NDIS_STACK_RESERVED *)v3;
}
