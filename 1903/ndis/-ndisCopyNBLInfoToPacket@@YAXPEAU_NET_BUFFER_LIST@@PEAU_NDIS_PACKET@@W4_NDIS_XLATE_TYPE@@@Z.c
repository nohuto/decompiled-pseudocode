/*
 * XREFs of ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079CA0
 * Callers:
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C007ACC8 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B268 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B3FC (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisCopyNBLInfoToPacket(struct _NET_BUFFER_LIST *a1, struct _NDIS_PACKET *a2, enum _NDIS_XLATE_TYPE a3)
{
  void *v5; // rax
  __int64 NdisPacketOobOffset; // r9
  void **p_Pool; // r8
  int v8; // ecx

  *(_QWORD *)(&a2->Private.ValidCounts + a2->Private.NdisPacketOobOffset) = a1->NetBufferListInfo[0];
  if ( a3 == XlateSend )
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 8] = (__int64)a1->NetBufferListInfo[2] & 0xFFFFF;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 16] = a1->NetBufferListInfo[3];
  *(unsigned __int64 *)((char *)&a2->Reserved[1] + a2->Private.NdisPacketOobOffset) = (unsigned __int64)a1->NetBufferListInfo[4];
  *(_WORD *)((char *)&a2->Reserved[1] + a2->Private.NdisPacketOobOffset + 2) = 0;
  *(_QWORD *)((char *)&a2[1].Private.PhysicalCount + a2->Private.NdisPacketOobOffset) = a1->NetBufferListInfo[5];
  if ( (a3 & 0xFFFFFFFD) != 0 || (v5 = a1->NetBufferListInfo[1]) == 0LL )
  {
    *(_QWORD *)&a2->MiniportReserved[a2->Private.NdisPacketOobOffset] = 0LL;
  }
  else
  {
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    p_Pool = &a2[1].Private.Pool;
    if ( a3 == XlateSend )
    {
      *p_Pool = v5;
      *(_QWORD *)&a2[1].Private.Count = 0LL;
      *(_QWORD *)&a2->MiniportReserved[NdisPacketOobOffset] = p_Pool;
    }
    if ( a3 == XlateReceive )
    {
      *(_DWORD *)p_Pool ^= (*(_DWORD *)p_Pool ^ LOWORD(a1->NetBufferListInfo[1])) & 1;
      v8 = *(_DWORD *)p_Pool ^ (*(_DWORD *)p_Pool ^ LOWORD(a1->NetBufferListInfo[1])) & 2;
      *(_DWORD *)p_Pool = v8;
      *(_DWORD *)p_Pool = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)LOWORD(a1->NetBufferListInfo[1])) & 4;
      HIDWORD(a2[1].Private.Pool) = WORD1(a1->NetBufferListInfo[1]);
      *(_QWORD *)&a2->MiniportReserved[NdisPacketOobOffset] = p_Pool;
    }
  }
}
