/*
 * XREFs of ndisMDeferredSend @ 0x1C0056450
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0055390 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C005613C (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C0057A3C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0057C0C (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // r9d
  unsigned __int8 *WrapperReserved; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  unsigned int v5; // ebx
  unsigned __int64 *p_Lock; // rbp
  unsigned int Flags; // ebx
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  struct _NDIS_STACK_RESERVED *v10; // r15
  __int64 v11; // r13
  unsigned __int8 **v12; // rax
  __int64 NdisPacketOobOffset; // rax
  _NDIS_PACKET *FirstPendingPacket; // rsi
  struct _NDIS_STACK_RESERVED *v16; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x18u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, (__int64)a1);
  while ( 1 )
  {
    FirstPendingPacket = a1->FirstPendingPacket;
    if ( !FirstPendingPacket || (a1->Flags & 0x400000) == 0 )
      break;
    NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v16);
    a1->FirstPendingPacket = 0LL;
    WrapperReserved = FirstPendingPacket->WrapperReserved;
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)&FirstPendingPacket->MacReserved[16];
    if ( v4 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
      a1->FirstPendingPacket = (_NDIS_PACKET *)&v4[-1].PktMonComp.EdgeCount;
    if ( ((v2 & 0x4000) != 0 || (v2 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
      && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
    {
      v5 = 0;
      p_Lock = &a1->Lock;
LABEL_11:
      v8 = FirstPendingPacket->Private.NdisPacketFlags & 0xEF;
      FirstPendingPacket->Private.NdisPacketFlags = v8;
      if ( v5 == -1073741670 )
      {
        FirstPendingPacket->Private.NdisPacketFlags = v8;
        a1->Flags &= ~0x400000u;
        a1->FirstPendingPacket = FirstPendingPacket;
      }
      else
      {
        if ( !v5 )
          NDISM_SEND_PACKET_STATS(a1, FirstPendingPacket);
        v9 = *(_QWORD *)WrapperReserved;
        v10 = v16;
        v11 = *(_QWORD *)v16;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v12 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v12 != WrapperReserved) )
        {
          __fastfail(3u);
        }
        *v12 = (unsigned __int8 *)v9;
        *(_QWORD *)(v9 + 8) = v12;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v10 = 1297040180LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        *((_DWORD *)v10 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl((__int64)FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(a1, FirstPendingPacket, v5);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v11 + 112))(v11, FirstPendingPacket, v5);
        KeAcquireSpinLockAtDpcLevel(p_Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508279;
      }
    }
    else
    {
      Flags = FirstPendingPacket->Private.Flags;
      p_Lock = &a1->Lock;
      FirstPendingPacket->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v5 = a1->SendHandler(a1->MiniportAdapterContext, FirstPendingPacket, Flags);
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 1508257;
      if ( v5 != 259 )
        goto LABEL_11;
    }
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x19u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, (__int64)a1);
  return 0;
}
