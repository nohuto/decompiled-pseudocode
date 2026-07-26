/*
 * XREFs of ndisXlateSendCompletePacketToNetBufferList @ 0x1C007B2F8
 * Callers:
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0088A90 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC (ndisMSendCompletePacketToNetBufferLists.c)
 * Callees:
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079DAC (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C0079E38 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

__int64 __fastcall ndisXlateSendCompletePacketToNetBufferList(struct _NDIS_PACKET *a1, int a2)
{
  __int64 NdisPacketOobOffset; // rcx
  __int64 v5; // rbx
  struct _NET_BUFFER *v6; // r14

  --*(_DWORD *)&a1[-1].ProtocolReserved[4];
  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v5 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    *(_DWORD *)(v5 + 140) = a2;
    *(_MDL **)((char *)&a1[1].Private.Head + a1->Private.NdisPacketOobOffset) = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v5, 0LL, 0x18u, a1, 0);
  }
  else
  {
    *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
    v6 = (struct _NET_BUFFER *)v5;
    v5 = *(_QWORD *)(v5 + 128);
    ndisCopyPacketInfoToNBL(a1, (struct _NET_BUFFER_LIST *)v5, XlateSendComplete);
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v5, 0LL, 0x14u, a1, 0);
    ndisFreeConvertedPacket(a1, v6, 1);
    if ( a2 && !*(_DWORD *)(v5 + 140) )
      *(_DWORD *)(v5 + 140) = a2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF) != 1 )
      v5 = 0LL;
    if ( v5 )
      *(_QWORD *)v5 = 0LL;
  }
  return v5;
}
