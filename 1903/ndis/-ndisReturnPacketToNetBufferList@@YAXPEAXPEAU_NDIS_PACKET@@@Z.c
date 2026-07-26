/*
 * XREFs of ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00ADEE4
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088540 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisReturnPackets @ 0x1C0098A70 (NdisReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00A2310 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C00A3260 (ndisMIndicatePacket.c)
 *     ndisSynchReturnPacketsForTranslation @ 0x1C00AF3A0 (ndisSynchReturnPacketsForTranslation.c)
 * Callees:
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B1D0 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 */

void __fastcall ndisReturnPacketToNetBufferList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  struct _NET_BUFFER_LIST *v3; // rax

  v3 = ndisXlateReturnPacketToNetBufferList(a2);
  if ( v3 )
  {
    v3->Link.Alignment = 0LL;
    ndisReturnNetBufferListsInternal(a1, v3);
  }
}
