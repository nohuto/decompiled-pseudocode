/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0067FF0
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054890 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054B50 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMDeferredReturnPackets @ 0x1C00625CC (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0067510 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0068310 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0068450 (ndisMIndicatePacket.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnPacketToMiniport @ 0x1C006E99C (ndisReturnPacketToMiniport.c)
 * Callees:
 *     NdisFreePacket @ 0x1C001F5D0 (NdisFreePacket.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0055588 (ExFreeToNPagedLookasideList.c)
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
