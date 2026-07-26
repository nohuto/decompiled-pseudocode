/*
 * XREFs of ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B438
 * Callers:
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0088D10 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C008B800 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079E70 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA840 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisXlateSendCompleteNetBufferListToPacket(
        struct _NET_BUFFER_LIST *a1,
        struct _NDIS_PACKET **a2,
        int *a3)
{
  struct _NDIS_PACKET *v5; // rcx
  struct _NDIS_STACK_RESERVED *v6; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct _NDIS_PACKET *)a1->NdisReserved[0];
  *a2 = v5;
  *a3 = a1->Status;
  NDIS_STACK_RESERVED_FROM_PACKET(v5, &v6);
  *(_QWORD *)v6 = 1297040182LL;
  (*a2)->Private.NdisPacketFlags &= 0xC0u;
  ndisCopyNBLInfoToPacket(a1, *a2, XlateSendComplete);
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, 0x16u, a2, 0);
  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  NdisFreeNetBufferList(a1);
}
