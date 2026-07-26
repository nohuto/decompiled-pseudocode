/*
 * XREFs of ndisXlateReturnNetBufferListToPacket @ 0x1C004E65C
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053E54 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054890 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C006E840 (ndisReturnNetBufferListsToPackets.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

_BYTE *__fastcall ndisXlateReturnNetBufferListToPacket(struct _NET_BUFFER_LIST *a1)
{
  _BYTE *v2; // rdi
  char v3; // si

  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  v2 = a1->NdisReserved[0];
  a1->Flags &= 0xFFFFFF6B;
  a1->NblFlags &= ~0x8000u;
  a1->NdisReserved[0] = 0LL;
  v3 = v2[41];
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, 0LL, 0x1Cu, v2, 0);
  if ( v3 < 0 )
  {
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(a1, 0LL, 0x11u, v2, 0);
  }
  else
  {
    NdisFreeNetBufferList(a1);
  }
  return v2;
}
