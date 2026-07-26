/*
 * XREFs of ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E3A4
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053E54 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054890 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004940 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C004DE50 (ndisCopyPacketInfoToNBL.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisPacketToNetBuffer @ 0x1C004E1B4 (ndisPacketToNetBuffer.c)
 *     XlateReceivePacketStats @ 0x1C0068200 (XlateReceivePacketStats.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
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
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // r13
  struct _NET_BUFFER_LIST *v12; // rdi
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  __int64 v14; // rcx
  PVOID v15; // rax
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
    v9 = *(_QWORD *)v7;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 42LL);
    v25 = *(_DWORD *)(v10 + *(_QWORD *)v7 + 32);
    if ( v25 != v8 )
      break;
    v11 = *(_BYTE *)(v9 + 41);
    v12 = 0LL;
    if ( v11 < 0 && (v12 = *(struct _NET_BUFFER_LIST **)(v10 + v9 + 120)) != 0LL )
    {
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v12, 0LL, 0x12u, (void *)v9, 0);
      v12->Link.Alignment = 0LL;
    }
    else if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v12 = NetBufferAndNetBufferList;
      if ( v11 < 0 )
        *(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 120) = NetBufferAndNetBufferList;
    }
    if ( !v12 )
    {
      v3 = -1073741670;
      if ( v2 )
        v8 = -1073741670;
      v20 = v2 != 0;
      goto LABEL_34;
    }
    ndisPacketToNetBuffer(v9, (__int64)v12->FirstNetBuffer);
    v14 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
      v15 = *(PVOID *)(v14 + 24);
    else
      v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !*(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 112) && (*(_BYTE *)(v9 + 41) & 2) == 0 )
      XlateReceivePacketStats(v23, v15, *(unsigned int *)(v9 + 4));
    v12->Flags |= 0x10u;
    v12->NdisReserved[0] = (void *)v9;
    ndisCopyPacketInfoToNBL(v9, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v12, XlateReceive);
    if ( (*(_DWORD *)(v9 + 36) & 0x100) != 0 )
    {
      v12->Flags |= 0x80u;
      v12->NblFlags |= 0x8000u;
      v16 = (void **)(v9 + *(unsigned __int16 *)(v9 + 42) + 72LL);
    }
    else
    {
      v16 = (void **)a1;
    }
    v3 = -1073741670;
    v8 = v25;
    v12->SourceHandle = *v16;
    Flags = v12->Flags;
    v18 = (Flags & 0x80u) != 0 && *(_BYTE *)(v9 + 36) >= 0;
    v19 = Flags | 0x200;
    if ( !v18 )
      v19 = v12->Flags & 0xFFFFFDFF;
    v12->Flags = v19;
    if ( v25 != -1073741670 )
      *(_DWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 32) = 259;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v12, 0LL, 0x1Bu, (void *)v9, 0);
      v3 = -1073741670;
    }
    if ( v2 )
      *p_Alignment = v12;
    else
      v2 = (__int64)v12;
    LODWORD(v5) = v5 + 1;
    v4 = v24 + 1;
    v6 = v26;
    v7 = v22 + 8;
    p_Alignment = &v12->Link.Alignment;
  }
  v20 = (_DWORD)v5 != v6;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v2, v4);
LABEL_34:
  *(_DWORD *)(a1 + 36) = v24;
  *(_QWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 32) = v5;
  if ( v8 == v3 )
    *(_DWORD *)(a1 + 40) |= 2u;
  return v20;
}
