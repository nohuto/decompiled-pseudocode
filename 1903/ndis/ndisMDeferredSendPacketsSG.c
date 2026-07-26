/*
 * XREFs of ndisMDeferredSendPacketsSG @ 0x1C008A940
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C0079AD4 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C008A0A0 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C008AFC8 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  unsigned int Flags; // eax
  unsigned int v5; // esi
  _NDIS_PACKET **v6; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct _NDIS_STACK_RESERVED *v13; // r15
  __int64 v14; // r13
  unsigned __int8 **v15; // rax
  __int64 v16; // r8
  __int64 NdisPacketOobOffset; // rax
  __int64 *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rdi
  unsigned int v21; // r14d
  struct _NDIS_STACK_RESERVED *v22; // r15
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v33; // [rsp+28h] [rbp-D0h] BYREF
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v35[16]; // [rsp+40h] [rbp-B8h] BYREF

  MaxSendPackets = a1->MaxSendPackets;
  Flags = a1->Flags;
  v32 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !a1->FirstPendingPacket )
    a1->Flags = Flags | 0x400000;
  if ( a1->PacketList.Flink != &a1->PacketList )
  {
    if ( !a1->FirstPendingPacket )
      return 0;
LABEL_8:
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    v5 = 0;
    v6 = (_NDIS_PACKET **)v35;
    if ( !MaxSendPackets )
      return 0;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v33);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v9 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v9 != v10 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v9 - 64);
      if ( ((v11 = a1->Flags, (v11 & 0x4000) != 0)
         || (v11 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v12 = *(_QWORD *)WrapperReserved;
        v13 = v33;
        v14 = *(_QWORD *)v33;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v15 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v15 != WrapperReserved) )
        {
LABEL_52:
          __fastfail(3u);
        }
        *v15 = (unsigned __int8 *)v12;
        *(_QWORD *)(v12 + 8) = v15;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v13 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved + FirstPendingPacket->Private.NdisPacketOobOffset) )
          ndisMFreeSGList((__int64)a1, (__int64)FirstPendingPacket, v16);
        *((_DWORD *)v13 + 2) = 0;
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
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v14 + 112))(v14, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      else
      {
        *v6 = FirstPendingPacket;
        ++v5;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v6;
      }
    }
    while ( v5 < MaxSendPackets );
    if ( !v5 )
      return 0;
    a1->MiniportThread = 0LL;
    v18 = v35;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v35, v5);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v19 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    while ( 1 )
    {
      v20 = *v18;
      v21 = *(_DWORD *)(*(unsigned __int16 *)(*v18 + 42) + *v18 + 32);
      *(_BYTE *)(*v18 + 41) &= ~8u;
      if ( v21 != 259 )
      {
        if ( v21 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v20;
          if ( (unsigned int)v19 < v5 )
          {
            v29 = &v35[v19];
            v30 = v5 - (unsigned int)v19;
            do
            {
              v31 = *v29++;
              *(_BYTE *)(v31 + 41) &= ~0x10u;
              --v30;
            }
            while ( v30 );
          }
LABEL_50:
          if ( !a1->FirstPendingPacket )
            return 0;
          MaxSendPackets = v32;
          goto LABEL_8;
        }
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v20, &v33);
        v22 = v33;
        v23 = *(_QWORD *)v33;
        if ( (*(_QWORD *)v33 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v24 = (_QWORD *)(v20 + 64);
          v25 = *(_QWORD *)(v20 + 64);
          if ( *(_QWORD *)(v25 + 8) != v20 + 64 )
            goto LABEL_52;
          v26 = *(_QWORD **)(v20 + 72);
          if ( (_QWORD *)*v26 != v24 )
            goto LABEL_52;
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *(_QWORD *)(v20 + 72) = v20 + 64;
          *v24 = v24;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v22 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v20 + 42) + v20 + 80) )
            ndisMFreeSGList((__int64)a1, v20, v27);
          *((_DWORD *)v22 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v20 + 42) + v20 + 128) )
            ndisFreePaddedMdl(v20);
          v28 = *(unsigned __int16 *)(v20 + 42);
          *(_BYTE *)(v20 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v28 + v20 + 112) )
            ndisMSendCompletePacketToNetBufferLists(a1, v20, v21);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v23 + 112))(v23, v20, v21);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      v19 = (unsigned int)(v19 + 1);
      ++v18;
      if ( (unsigned int)v19 >= v5 )
        goto LABEL_50;
    }
  }
  a1->FirstPendingPacket = 0LL;
  return 0;
}
