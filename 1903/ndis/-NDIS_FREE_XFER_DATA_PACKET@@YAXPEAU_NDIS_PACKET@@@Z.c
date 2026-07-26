/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00A2DF4
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00882F0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088540 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0096EBC (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00A2310 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C00A3120 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C00A3260 (ndisMIndicatePacket.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AEAD0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnPacketToMiniport @ 0x1C00AF264 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     NdisFreePacket @ 0x1C0032430 (NdisFreePacket.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0089A74 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall NDIS_FREE_XFER_DATA_PACKET(PNDIS_PACKET Packet)
{
  _MDL *Head; // rbx
  SIZE_T ByteCount; // rsi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  Head = Packet->Private.Head;
  ByteCount = Head->ByteCount;
  if ( (Head->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Head->MappedSystemVa, Head);
  if ( (unsigned int)ByteCount >= 0x64 )
  {
    if ( (unsigned int)ByteCount >= 0x5EA )
    {
      MmSizeOfMdl((PVOID)0xFFF, ByteCount);
      ExFreePoolWithTag(Head, 0);
      goto LABEL_9;
    }
    v4 = &ndisRcv1514BytesLL;
  }
  else
  {
    v4 = &ndisRcv100BytesLL;
  }
  ExFreeToNPagedLookasideList(v4, Head);
LABEL_9:
  LODWORD(Packet[-1].Reserved[1]) &= ~1u;
  NdisFreePacket(Packet);
}
