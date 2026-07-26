/*
 * XREFs of ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B3FC
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0087AD0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C008B6E0 (ndisMSendNetBufferListsToPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0079CA0 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C0079F40 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C007AA40 (NdisGetNetBufferListProtocolId.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00AA670 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(__int64 *a1, char a2)
{
  __int64 *v2; // rdi
  struct _NET_BUFFER_LIST *v3; // rbp
  char v4; // r15
  __int64 v5; // r10
  char v6; // al
  struct _NET_BUFFER *v7; // rdx
  int v8; // r12d
  struct _NDIS_MINIPORT_BLOCK *v9; // r11
  struct _NET_BUFFER *Alignment; // r14
  unsigned int v11; // r8d
  __int64 v12; // r13
  char v13; // bl
  _QWORD *v15; // r15
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax
  __int64 *v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // ecx
  struct _NDIS_PACKET **v22; // rbp
  struct _NDIS_PACKET *v23; // rbp
  unsigned int Flags; // ebx
  unsigned int v25; // ecx
  unsigned __int8 v26; // cl
  __int64 NdisPacketOobOffset; // rax
  $94E18E20480DA9B2C27FF8A8FF3A4150 *v28; // rax
  signed __int32 v29; // ecx
  signed __int32 v30; // ecx
  struct _NET_BUFFER *v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  struct _NET_BUFFER_LIST *v34; // [rsp+40h] [rbp-68h]
  _QWORD *v35; // [rsp+48h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v36; // [rsp+50h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v37; // [rsp+58h] [rbp-50h] BYREF
  char v38; // [rsp+B0h] [rbp+8h]
  unsigned int v40; // [rsp+C8h] [rbp+20h]

  v2 = (__int64 *)a1[2];
  v3 = 0LL;
  v35 = 0LL;
  v4 = 0;
  v5 = *a1;
  v6 = a2;
  v7 = (struct _NET_BUFFER *)a1[3];
  v8 = 0;
  v9 = (struct _NDIS_MINIPORT_BLOCK *)a1[5];
  Alignment = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v12 = 0LL;
  v33 = *a1;
  v13 = 1;
  v40 = v11;
  v32 = v7;
  v38 = 0;
  v36 = v9;
  v34 = 0LL;
  if ( !v2 )
    goto LABEL_51;
  while ( v6 && (v9->SendFlags & 2) == 0 )
  {
    v15 = (_QWORD *)v2[1];
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
          MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
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
      v7 = v32;
      v11 = v40;
      v5 = v33;
LABEL_22:
      v4 = v38;
      break;
    }
    v18 = (__int64 *)*v2;
    *v2 = 0LL;
    *((_DWORD *)v2 + 35) = v8;
    if ( v3 )
    {
      *v35 = v2;
    }
    else
    {
      v3 = (struct _NET_BUFFER_LIST *)v2;
      v34 = (struct _NET_BUFFER_LIST *)v2;
    }
    v35 = v2;
    v2 = v18;
LABEL_20:
    v7 = v32;
LABEL_48:
    v11 = v40;
    v5 = v33;
LABEL_49:
    v9 = v36;
    v6 = a2;
    v4 = v38;
    if ( !v2 )
      goto LABEL_50;
  }
  if ( (v2[17] & 0x10) != 0 && (v2[16] & 1) != 0 )
  {
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_50;
    v19 = v2[6];
    *(_QWORD *)(v5 + 8 * v12) = v19;
    v12 = (unsigned int)(v12 + 1);
    *(_DWORD *)(v19 + 36) |= 0x4000u;
    *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 112) = v2;
    *((_DWORD *)v2 + 35) = 0;
    v2 = (__int64 *)*v2;
    if ( v2 )
    {
      v7 = (struct _NET_BUFFER *)v2[1];
      v32 = v7;
    }
    if ( *(int *)ndisNblTrackerMode < 3 )
      goto LABEL_49;
    ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v2, 0LL, 0x17u, (void *)v19, 0);
    goto LABEL_20;
  }
  if ( v7 == (struct _NET_BUFFER *)v2[1] )
  {
    *((_DWORD *)v2 + 24) = 0;
    v20 = (_QWORD *)v2[1];
    if ( v20 )
    {
      v21 = 0;
      do
      {
        *((_DWORD *)v2 + 24) = ++v21;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 );
    }
  }
  Alignment = v7;
  if ( !v7 )
  {
    if ( v8 )
      goto LABEL_50;
LABEL_46:
    *((_DWORD *)v2 + 35) = 0;
    v2 = (__int64 *)*v2;
    if ( !v2 )
      goto LABEL_50;
    v7 = (struct _NET_BUFFER *)v2[1];
    v32 = v7;
    goto LABEL_48;
  }
  while ( (unsigned int)v12 < v11 )
  {
    v22 = (struct _NDIS_PACKET **)(v5 + 8 * v12);
    v8 = ndisNetBufferToPacket(Alignment, 1, v22);
    if ( v8 )
      break;
    v23 = *v22;
    ndisCopyNBLInfoToPacket((struct _NET_BUFFER_LIST *)v2, v23, XlateSend);
    v23->Private.Flags &= 0xFFFFFFF0;
    Flags = v23->Private.Flags;
    v23->Private.Flags = Flags | NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v2);
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v2, 0LL, 0x13u, v23, 0);
    ++*(_DWORD *)&v23[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v23, &v37);
    v11 = v40;
    v5 = v33;
    *(_QWORD *)v37 = v2[15];
    v4 |= (*((_DWORD *)a1 + 9) & 2) != 0;
    v38 = v4;
    v25 = v23->Private.Flags | 0x80;
    if ( v4 )
      v25 = v23->Private.Flags & 0xFFFFFF7F;
    v23->Private.Flags = v25;
    v26 = v23->Private.NdisPacketFlags | 0x20;
    if ( (v2[17] & 0x800) == 0 )
      v26 = v23->Private.NdisPacketFlags & 0xDF;
    NdisPacketOobOffset = v23->Private.NdisPacketOobOffset;
    v23->Private.NdisPacketFlags = v26;
    v12 = (unsigned int)(v12 + 1);
    *(_MDL **)((char *)&v23[1].Private.Head + NdisPacketOobOffset) = (_MDL *)Alignment;
    Alignment->MiniportReserved[0] = v2;
    Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
      v3 = v34;
      goto LABEL_46;
    }
  }
LABEL_50:
  v7 = v32;
  v3 = v34;
  v13 = 1;
  v9 = v36;
LABEL_51:
  *((_DWORD *)a1 + 8) = v12;
  a1[2] = (__int64)v2;
  if ( v2 )
  {
    if ( !Alignment )
      Alignment = v7;
  }
  else
  {
    Alignment = 0LL;
  }
  a1[3] = (__int64)Alignment;
  if ( v8 || !v2 )
  {
    v13 = 0;
    if ( v2 )
    {
      v28 = ($94E18E20480DA9B2C27FF8A8FF3A4150 *)Alignment;
      if ( Alignment && Alignment != (struct _NET_BUFFER *)v2[1] )
      {
        do
        {
          v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 24, 0xFFFFFFFF);
          v28 = ($94E18E20480DA9B2C27FF8A8FF3A4150 *)v28->Link.Alignment;
          v30 = v29 - 1;
        }
        while ( v28 );
        if ( !v30 )
          a1[3] = v2[1];
      }
      do
      {
        *((_DWORD *)v2 + 35) = -1073741670;
        v2 = (__int64 *)*v2;
      }
      while ( v2 );
    }
  }
  if ( v3 )
    ndisMSendNetBufferListsCompleteInternal(v9, v3);
  return v13;
}
