/*
 * XREFs of ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00878A0 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00882F0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00AEAD0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079DAC (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C007A054 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C007AB9C (ndisGenerateNetBufferListCorrelationIds.c)
 *     XlateReceivePacketStats @ 0x1C00A3010 (XlateReceivePacketStats.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

bool __fastcall ndisXlateRecvPacketArrayToNetBufferLists(__int64 a1)
{
  __int64 v2; // r12
  int v3; // r10d
  unsigned int v4; // ecx
  __int64 v5; // r15
  unsigned int v6; // r9d
  __int64 v7; // r8
  int v8; // r14d
  struct _NDIS_PACKET *v9; // rbx
  __int64 v10; // rdi
  struct _NET_BUFFER_LIST *v11; // rdi
  char v12; // r13
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  _MDL *Head; // rcx
  PVOID MappedSystemVa; // rax
  void **v16; // rax
  unsigned int Flags; // edx
  bool v18; // cl
  unsigned int v19; // edx
  bool v20; // r9
  __int64 v22; // [rsp+30h] [rbp-48h]
  void *v23; // [rsp+38h] [rbp-40h]
  unsigned int v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+10h]
  unsigned int v26; // [rsp+90h] [rbp+18h]
  _QWORD *p_Alignment; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  p_Alignment = 0LL;
  v3 = -1073741670;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 16);
  v23 = *(void **)a1;
  v26 = v6;
  v7 = *(_QWORD *)(a1 + 8) + 8 * v5;
  v8 = *(_DWORD *)(*(unsigned __int16 *)(*(_QWORD *)v7 + 42LL) + *(_QWORD *)v7 + 32LL);
  while ( 1 )
  {
    v22 = v7;
    v24 = v4;
    if ( (unsigned int)v5 >= v6 )
      break;
    v9 = *(struct _NDIS_PACKET **)v7;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 42LL);
    v25 = *(_DWORD *)(v10 + *(_QWORD *)v7 + 32);
    if ( v25 != v8 )
      break;
    if ( (v9->Private.NdisPacketFlags & 0x80u) == 0 )
    {
      v12 = 0;
      v11 = 0LL;
    }
    else
    {
      v11 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Tail + v10);
      v12 = 1;
      if ( v11 )
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v11, 0LL, 0x12u, v9, 0);
        v11->Link.Alignment = 0LL;
        goto LABEL_12;
      }
    }
    if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v11 = NetBufferAndNetBufferList;
      if ( v12 )
        *(_MDL **)((char *)&v9[1].Private.Tail + v9->Private.NdisPacketOobOffset) = (_MDL *)NetBufferAndNetBufferList;
    }
LABEL_12:
    if ( !v11 )
    {
      v3 = -1073741670;
      if ( v2 )
        v8 = -1073741670;
      v20 = v2 != 0;
      goto LABEL_35;
    }
    ndisPacketToNetBuffer(v9, v11->FirstNetBuffer);
    Head = v9->Private.Head;
    if ( (Head->MdlFlags & 5) != 0 )
      MappedSystemVa = Head->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset)
      && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      XlateReceivePacketStats(v23, MappedSystemVa, v9->Private.TotalLength);
    }
    v11->Flags |= 0x10u;
    v11->NdisReserved[0] = v9;
    ndisCopyPacketInfoToNBL(v9, v11, XlateReceive);
    if ( (v9->Private.Flags & 0x100) != 0 )
    {
      v11->Flags |= 0x80u;
      v11->NblFlags |= 0x8000u;
      v16 = (void **)&v9->MacReserved[v9->Private.NdisPacketOobOffset + 24];
    }
    else
    {
      v16 = (void **)a1;
    }
    v3 = -1073741670;
    v8 = v25;
    v11->SourceHandle = *v16;
    Flags = v11->Flags;
    v18 = SLOBYTE(v9->Private.Flags) >= 0 && (Flags & 0x80u) != 0;
    v19 = Flags | 0x200;
    if ( !v18 )
      v19 = v11->Flags & 0xFFFFFDFF;
    v11->Flags = v19;
    if ( v25 != -1073741670 )
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v11, 0LL, 0x1Bu, v9, 0);
      v3 = -1073741670;
    }
    if ( v2 )
      *p_Alignment = v11;
    else
      v2 = (__int64)v11;
    LODWORD(v5) = v5 + 1;
    v4 = v24 + 1;
    v6 = v26;
    v7 = v22 + 8;
    p_Alignment = &v11->Link.Alignment;
  }
  v20 = (_DWORD)v5 != v6;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v2, v4);
LABEL_35:
  *(_DWORD *)(a1 + 36) = v24;
  *(_QWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 32) = v5;
  if ( v8 == v3 )
    *(_DWORD *)(a1 + 40) |= 2u;
  return v20;
}
