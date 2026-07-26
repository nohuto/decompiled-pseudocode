/*
 * XREFs of ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B7E8
 * Callers:
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E90 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C008BE20 (ndisMSendPacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079DAC (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C007A054 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(__int64 a1)
{
  unsigned int v1; // r13d
  bool v2; // di
  __int64 v4; // rcx
  char v5; // dl
  struct _NET_BUFFER_LIST *v6; // rsi
  int v7; // r12d
  __int64 v8; // rbx
  struct _NDIS_PACKET **v9; // r15
  int v10; // ecx
  int v11; // eax
  bool result; // al
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v14; // rbp
  int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  struct _NET_BUFFER_LIST *Alignment; // rbx
  char v19; // [rsp+70h] [rbp+8h]
  _QWORD *p_Alignment; // [rsp+78h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  p_Alignment = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 1;
  v6 = 0LL;
  v19 = 1;
  v7 = 0;
  v8 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)v8 >= v1 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 32) = v8;
    v2 = (_DWORD)v8 != v1;
  }
  else
  {
    v9 = (struct _NDIS_PACKET **)(v4 + 8 * v8);
    while ( 1 )
    {
      if ( v5 == 1 )
      {
        v19 = 0;
        v10 = v7 | 2;
        if ( ((*v9)->Private.Flags & 0x80) != 0 )
          v10 = v7;
        v7 = v10;
      }
      else
      {
        v11 = (*v9)->Private.Flags & 0x80;
        if ( (v7 & 2) != 0 )
        {
          if ( v11 )
            goto LABEL_9;
        }
        else if ( !v11 )
        {
          goto LABEL_9;
        }
      }
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v14 = NetBufferAndNetBufferList;
      if ( !NetBufferAndNetBufferList )
        break;
      ndisPacketToNetBuffer(*v9, NetBufferAndNetBufferList->FirstNetBuffer);
      if ( !v6 )
        v6 = v14;
      if ( p_Alignment )
        *p_Alignment = v14;
      v14->SourceHandle = *(void **)a1;
      v14->NdisReserved[0] = *v9;
      p_Alignment = &v14->Link.Alignment;
      ndisCopyPacketInfoToNBL(*v9, v14, XlateSend);
      LOBYTE(v6->NetBufferListInfo[7]) = (*v9)->Private.Flags & 0xF;
      v6->NetBufferListInfo[5] = *(void **)((char *)&(*v9)[1].Private.PhysicalCount + (*v9)->Private.NdisPacketOobOffset);
      v15 = v14->Flags | 0x10;
      v14->Flags = v15;
      v16 = v15 & 0xFFFFF7FF;
      v17 = v15 | 0x800;
      if ( ((*v9)->Private.NdisPacketFlags & 0x20) == 0 )
        v17 = v16;
      v14->Flags = v17;
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(v14, 0LL, 0x15u, *v9, 0);
      v5 = v19;
      LODWORD(v8) = v8 + 1;
      ++v9;
      if ( (unsigned int)v8 >= v1 )
        goto LABEL_9;
    }
    if ( v6 )
    {
      do
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v6, 0LL, 0x16u, 0LL, 0);
        *(_QWORD *)(v6->Link.Region + 32) = 0LL;
        Alignment = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
        NdisFreeNetBufferList(v6);
        v6 = Alignment;
      }
      while ( Alignment );
    }
    v6 = 0LL;
  }
  result = v2;
  *(_QWORD *)(a1 + 24) = v6;
  return result;
}
