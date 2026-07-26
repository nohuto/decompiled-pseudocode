/*
 * XREFs of ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079DAC
 * Callers:
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B1D0 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C007B2F8 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B7E8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?ndisIPsecPktInfoToNBLInfo@@YAXPEAU_NDIS_IPSEC_PACKET_INFO@@W4_NDIS_XLATE_TYPE@@PEAU_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO@@@Z @ 0x1C0079ED4 (-ndisIPsecPktInfoToNBLInfo@@YAXPEAU_NDIS_IPSEC_PACKET_INFO@@W4_NDIS_XLATE_TYPE@@PEAU_NDIS_IPSEC_.c)
 */

void __fastcall ndisCopyPacketInfoToNBL(struct _NDIS_PACKET *a1, struct _NET_BUFFER_LIST *a2, enum _NDIS_XLATE_TYPE a3)
{
  struct _NDIS_IPSEC_PACKET_INFO *v3; // rcx

  a2->NetBufferListInfo[0] = *(void **)(&a1->Private.ValidCounts + a1->Private.NdisPacketOobOffset);
  a2->NetBufferListInfo[2] = *(void **)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 8];
  a2->NetBufferListInfo[3] = *(void **)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 16];
  a2->NetBufferListInfo[4] = *(void **)((char *)&a1->Reserved[1] + a1->Private.NdisPacketOobOffset);
  a2->NetBufferListInfo[5] = *(void **)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset);
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
    v3 = *(struct _NDIS_IPSEC_PACKET_INFO **)&a1->MiniportReserved[a1->Private.NdisPacketOobOffset];
    if ( v3 )
      ndisIPsecPktInfoToNBLInfo(v3, a3, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)&a2->NetBufferListInfo[1]);
  }
}
