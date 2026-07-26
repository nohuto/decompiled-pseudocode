/*
 * XREFs of ndisMDeferredSendPackets @ 0x1C008A520
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0088D4C (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C008A0A0 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C008AFC8 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // ecx
  _NDIS_PACKET **v4; // r12
  unsigned int v5; // ebp
  _NDIS_PACKET *FirstPendingPacket; // rsi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int Flags; // eax
  __int64 v11; // rcx
  struct _NDIS_STACK_RESERVED *v12; // r15
  __int64 v13; // r13
  unsigned __int8 **v14; // rax
  __int64 NdisPacketOobOffset; // rax
  __int64 *v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rsi
  unsigned int v19; // r15d
  struct _NDIS_STACK_RESERVED *v20; // r12
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v30; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-C8h]
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+38h] [rbp-C0h]
  _QWORD v33[16]; // [rsp+40h] [rbp-B8h] BYREF

  MaxSendPackets = a1->MaxSendPackets;
  v29 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( a1->PacketList.Flink != &a1->PacketList )
  {
    if ( !a1->FirstPendingPacket )
      return 0;
LABEL_5:
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    v4 = (_NDIS_PACKET **)v33;
    v5 = 0;
    if ( !MaxSendPackets )
      return 0;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v30);
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      a1->FirstPendingPacket = 0LL;
      v8 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v8 != v9 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v8 - 64);
      if ( ((Flags = a1->Flags, (Flags & 0x4000) != 0)
         || (Flags & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v11 = *(_QWORD *)WrapperReserved;
        v12 = v30;
        v13 = *(_QWORD *)v30;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v14 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v14 != WrapperReserved) )
        {
LABEL_47:
          __fastfail(3u);
        }
        *v14 = (unsigned __int8 *)v11;
        *(_QWORD *)(v11 + 8) = v14;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v12 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v12 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl((__int64)FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(a1, FirstPendingPacket, 0LL);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, FirstPendingPacket, 0LL);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      else
      {
        *v4 = FirstPendingPacket;
        ++v5;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        ++v4;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
      }
    }
    while ( v5 < v29 );
    if ( !v5 )
      return 0;
    v16 = v33;
    a1->MiniportThread = 0LL;
    v31 = v33;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v5);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v17 = 0;
    a1->MiniportThread = KeGetCurrentThread();
    while ( 1 )
    {
      v18 = *v16;
      v19 = *(_DWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 32);
      *(_BYTE *)(v18 + 41) &= ~8u;
      if ( v19 != 259 )
      {
        if ( v19 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v18;
          if ( v17 < v5 )
          {
            v26 = v5 - v17;
            v27 = &v33[v17];
            do
            {
              v28 = *v27++;
              *(_BYTE *)(v28 + 41) &= ~0x10u;
              --v26;
            }
            while ( v26 );
          }
LABEL_45:
          if ( !a1->FirstPendingPacket )
            return 0;
          MaxSendPackets = v29;
          goto LABEL_5;
        }
        if ( !v19 )
          NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v18);
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v18, &v30);
        v20 = v30;
        v21 = *(_QWORD *)v30;
        if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v22 = (_QWORD *)(v18 + 64);
          v23 = *(_QWORD *)(v18 + 64);
          if ( *(_QWORD *)(v23 + 8) != v18 + 64 )
            goto LABEL_47;
          v24 = *(_QWORD **)(v18 + 72);
          if ( (_QWORD *)*v24 != v22 )
            goto LABEL_47;
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v18 + 72) = v18 + 64;
          *v22 = v22;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v20 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v20 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 128) )
            ndisFreePaddedMdl(v18);
          v25 = *(unsigned __int16 *)(v18 + 42);
          *(_BYTE *)(v18 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v25 + v18 + 112) )
            ndisMSendCompletePacketToNetBufferLists(a1, v18, v19);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v18, v19);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      ++v17;
      v16 = ++v31;
      if ( v17 >= v5 )
        goto LABEL_45;
    }
  }
  a1->FirstPendingPacket = 0LL;
  return 0;
}
