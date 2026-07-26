/*
 * XREFs of ndisXlateReturnNetBufferListToPacket @ 0x1C007B130
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00878A0 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00882F0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AEAD0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C00AF130 (ndisReturnNetBufferListsToPackets.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
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
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, 0x1Cu, v2, 0);
  if ( v3 < 0 )
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(a1, 0LL, 0x11u, v2, 0);
  }
  else
  {
    NdisFreeNetBufferList(a1);
  }
  return v2;
}
