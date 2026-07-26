/*
 * XREFs of ndisReturnPacketToNetBufferList @ 0x1C006EAFC
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054B50 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisReturnPackets @ 0x1C00613F0 (NdisReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0067510 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0068450 (ndisMIndicatePacket.c)
 *     ndisSynchReturnPacketsForTranslation @ 0x1C006EC20 (ndisSynchReturnPacketsForTranslation.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E6FC (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisReturnPacketToNetBufferList(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NET_BUFFER_LIST *v3; // rax

  v3 = (struct _NET_BUFFER_LIST *)ndisXlateReturnPacketToNetBufferList(a2);
  if ( v3 )
  {
    v3->Link.Alignment = 0LL;
    ndisReturnNetBufferListsInternal(a1, v3, 0LL, 0LL);
  }
}
