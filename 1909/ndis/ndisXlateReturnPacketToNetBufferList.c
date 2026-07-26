/*
 * XREFs of ndisXlateReturnPacketToNetBufferList @ 0x1C007B3A0
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0087880 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088710 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00AE0B4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C00AE474 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 * Callees:
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079F7C (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C007A008 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  struct _NET_BUFFER_LIST *v3; // rdi

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(struct _NET_BUFFER_LIST **)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  ndisCopyPacketInfoToNBL(a1, v3, XlateReturn);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Eu, a1, 0);
  }
  else
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Au, a1, 0);
    ndisFreeConvertedPacket(a1, v3->FirstNetBuffer, 0);
  }
  return v3;
}
