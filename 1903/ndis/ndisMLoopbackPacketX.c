/*
 * XREFs of ndisMLoopbackPacketX @ 0x1C008AFC8
 * Callers:
 *     ndisMDeferredSend @ 0x1C008A2F0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C008A520 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C008A940 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C008AD90 (ndisMDeferredSendSG.c)
 *     ndisMSendPacketsXToMiniport @ 0x1C008BF60 (ndisMSendPacketsXToMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C00895AC (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 */

bool __fastcall ndisMLoopbackPacketX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  KIRQL v3; // di
  struct _NDIS_PACKET *v4; // rcx
  bool v6; // zf
  bool v7; // al
  bool v8; // bp
  char *v9; // r14
  struct _NDIS_STACK_RESERVED *v10; // rax
  struct _NDIS_PACKET *v12; // [rsp+48h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = (a2->Private.NdisPacketFlags & 0x20) == 0;
  v12 = 0LL;
  v8 = 0;
  if ( v6 )
  {
    v7 = ndisMIsLoopbackPacket(a1, a2, &v12);
    v4 = v12;
    if ( v7 )
      v8 = 1;
  }
  if ( v4 )
  {
    a2->Private.NdisPacketFlags |= 0x20u;
    v9 = (char *)v4 + v4->Private.NdisPacketOobOffset;
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v13);
    v10 = v13;
    *((_DWORD *)v9 + 8) = -1073741670;
    *(_QWORD *)&v12->MacReserved[v12->Private.NdisPacketOobOffset + 24] = *(_QWORD *)v10;
    if ( (a1->Flags & 0x40000) == 0 || (v3 = KfRaiseIrql(2u), (a1->Flags & 0x40000) == 0) )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      *((_DWORD *)v9 + 4) = 14;
      a1->PacketIndicateHandler(a1, &v12, 1u);
    }
    if ( (a1->Flags & 0x40000) != 0 )
    {
      if ( v3 != 2 )
        KeLowerIrql(v3);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
    }
    IoFreeMdl(v12->Private.Head);
    v12 = (struct _NDIS_PACKET *)((char *)v12 - 16 - 48LL * ndisPacketStackSize);
    ExFreePoolWithTag(v12, 0);
  }
  return v8;
}
