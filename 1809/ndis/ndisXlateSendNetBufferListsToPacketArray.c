/*
 * XREFs of ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E928
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0054050 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0058230 (ndisMSendNetBufferListsToPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C004DC60 (NdisGetNetBufferListProtocolId.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C004DD44 (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004E0A0 (ndisNetBufferToPacket.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006B2B4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  char v4; // r15
  __int64 v5; // r10
  char v6; // al
  _MDL *v7; // rdx
  int v8; // r12d
  __int64 v9; // r11
  _MDL *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // r13
  char v13; // bl
  _QWORD *v15; // r15
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // ecx
  PNDIS_PACKET *v22; // rbp
  PNDIS_PACKET v23; // rbp
  unsigned int Flags; // ebx
  unsigned int v25; // ecx
  unsigned __int8 v26; // cl
  __int64 NdisPacketOobOffset; // rax
  _MDL *v28; // rax
  signed __int32 v29; // ecx
  signed __int32 v30; // ecx
  int v32; // [rsp+20h] [rbp-88h]
  _MDL *v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  _QWORD *v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v38; // [rsp+58h] [rbp-50h] BYREF
  char v39; // [rsp+B0h] [rbp+8h]
  unsigned int v41; // [rsp+C8h] [rbp+20h]

  v2 = a1[2];
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v5 = *a1;
  v6 = a2;
  v7 = (_MDL *)a1[3];
  v8 = 0;
  v9 = a1[5];
  v10 = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v12 = 0LL;
  v34 = *a1;
  v13 = 1;
  v41 = v11;
  v33 = v7;
  v39 = 0;
  v37 = v9;
  v35 = 0LL;
  if ( !v2 )
    goto LABEL_51;
  while ( v6 && (*(_BYTE *)(v9 + 928) & 2) == 0 )
  {
    v15 = *(_QWORD **)(v2 + 8);
    v8 = 0;
    if ( !v15 )
      goto LABEL_22;
    do
    {
      for ( i = (struct _MDL *)v15[4]; i; i = i->Next )
      {
        if ( (i->MdlFlags & 5) != 0 )
          MappedSystemVa = i->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
        if ( !MappedSystemVa )
        {
          v8 = -1073741670;
          break;
        }
      }
      v15 = (_QWORD *)*v15;
    }
    while ( v15 );
    if ( !v8 )
    {
      v7 = v33;
      v11 = v41;
      v5 = v34;
LABEL_22:
      v4 = v39;
      break;
    }
    v18 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 140) = v8;
    if ( v3 )
    {
      *v36 = v2;
    }
    else
    {
      v3 = v2;
      v35 = v2;
    }
    v36 = (_QWORD *)v2;
    v2 = v18;
LABEL_20:
    v7 = v33;
LABEL_48:
    v11 = v41;
    v5 = v34;
LABEL_49:
    v9 = v37;
    v6 = a2;
    v4 = v39;
    if ( !v2 )
      goto LABEL_50;
  }
  if ( (*(_DWORD *)(v2 + 136) & 0x10) != 0 && (*(_DWORD *)(v2 + 128) & 1) != 0 )
  {
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_50;
    v19 = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(v5 + 8 * v12) = v19;
    v12 = (unsigned int)(v12 + 1);
    *(_DWORD *)(v19 + 36) |= 0x4000u;
    *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 112) = v2;
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( v2 )
    {
      v7 = *(_MDL **)(v2 + 8);
      v33 = v7;
    }
    if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
      goto LABEL_49;
    ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v2, 0LL, 0x17u, (void *)v19, 0);
    goto LABEL_20;
  }
  if ( v7 == *(_MDL **)(v2 + 8) )
  {
    *(_DWORD *)(v2 + 96) = 0;
    v20 = *(_QWORD **)(v2 + 8);
    if ( v20 )
    {
      v21 = 0;
      do
      {
        *(_DWORD *)(v2 + 96) = ++v21;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 );
    }
  }
  v10 = v7;
  if ( !v7 )
  {
    if ( v8 )
      goto LABEL_50;
LABEL_46:
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( !v2 )
      goto LABEL_50;
    v7 = *(_MDL **)(v2 + 8);
    v33 = v7;
    goto LABEL_48;
  }
  while ( (unsigned int)v12 < v11 )
  {
    v22 = (PNDIS_PACKET *)(v5 + 8 * v12);
    v8 = ndisNetBufferToPacket((__int64)v10, 1, v22);
    if ( v8 )
      break;
    v23 = *v22;
    ndisCopyNBLInfoToPacket(v2, (__int64)v23, 0);
    v23->Private.Flags &= 0xFFFFFFF0;
    Flags = v23->Private.Flags;
    v23->Private.Flags = Flags | NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v2);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v2, 0LL, v8 + 19, v23, v8 & v32);
    ++*(_DWORD *)&v23[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v23, &v38);
    v11 = v41;
    v5 = v34;
    *(_QWORD *)v38 = *(_QWORD *)(v2 + 120);
    v4 |= (*((_DWORD *)a1 + 9) & 2) != 0;
    v39 = v4;
    v25 = v23->Private.Flags | 0x80;
    if ( v4 )
      v25 = v23->Private.Flags & 0xFFFFFF7F;
    v23->Private.Flags = v25;
    v26 = v23->Private.NdisPacketFlags | 0x20;
    if ( (*(_DWORD *)(v2 + 136) & 0x800) == 0 )
      v26 = v23->Private.NdisPacketFlags & 0xDF;
    NdisPacketOobOffset = v23->Private.NdisPacketOobOffset;
    v23->Private.NdisPacketFlags = v26;
    v12 = (unsigned int)(v12 + 1);
    *(_MDL **)((char *)&v23[1].Private.Head + NdisPacketOobOffset) = v10;
    v10[2].StartVa = (PVOID)v2;
    v10 = v10->Next;
    if ( !v10 )
    {
      v3 = v35;
      goto LABEL_46;
    }
  }
LABEL_50:
  v7 = v33;
  v3 = v35;
  v13 = 1;
  v9 = v37;
LABEL_51:
  *((_DWORD *)a1 + 8) = v12;
  a1[2] = v2;
  if ( v2 )
  {
    if ( !v10 )
      v10 = v7;
  }
  else
  {
    v10 = 0LL;
  }
  a1[3] = (__int64)v10;
  if ( v8 || !v2 )
  {
    v13 = 0;
    if ( v2 )
    {
      v28 = v10;
      if ( v10 && v10 != *(_MDL **)(v2 + 8) )
      {
        do
        {
          v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFF);
          v28 = v28->Next;
          v30 = v29 - 1;
        }
        while ( v28 );
        if ( !v30 )
          a1[3] = *(_QWORD *)(v2 + 8);
      }
      do
      {
        *(_DWORD *)(v2 + 140) = -1073741670;
        v2 = *(_QWORD *)v2;
      }
      while ( v2 );
    }
  }
  if ( v3 )
    ndisMSendNetBufferListsCompleteInternal(v9, v3, *((_DWORD *)a1 + 9) & 1, 0LL);
  return v13;
}
