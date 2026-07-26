/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4
 * Callers:
 *     NdisAllocatePacket @ 0x1C001F690 (NdisAllocatePacket.c)
 *     ndisMAllocSGList @ 0x1C004C4FC (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004C928 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C004CFF0 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C004D0C0 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004E794 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E928 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C004F6D0 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00541F0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054440 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054B50 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054FF0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00550D0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0055180 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C00556F0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0056450 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00566E0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0056B70 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0057030 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C0057520 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C0057A3C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0057CE0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057ED0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0058360 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0058440 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00586B0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00588B0 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0058B90 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C0059540 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C0059670 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C00613F0 (NdisReturnPackets.c)
 *     ndisMAbortPackets @ 0x1C0061E4C (ndisMAbortPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C00625CC (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0067510 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0068310 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0068450 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C006E840 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C006E99C (ndisReturnPacketToMiniport.c)
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
