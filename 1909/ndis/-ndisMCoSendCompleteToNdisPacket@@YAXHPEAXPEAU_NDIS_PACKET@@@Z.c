/*
 * XREFs of ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0088BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C0079CA4 (ndisMFreeSGList.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0088F1C (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoSendCompleteToNdisPacket(unsigned int a1, _QWORD *a2, struct _NDIS_PACKET *a3)
{
  __int64 v3; // rbp
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _NDIS_STACK_RESERVED *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2[9];
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120);
  if ( (v6->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a3->Reserved + a3->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(*(_QWORD *)(v3 + 120), (__int64)a3, (__int64)a3);
  if ( !a1 )
    NDISM_SEND_PACKET_STATS(v6, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a3, &v7);
  a3->Private.NdisPacketFlags &= 0xC0u;
  *((_DWORD *)v7 + 2) = 0;
  --*(_DWORD *)&a3[-1].ProtocolReserved[4];
  (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v3 + 48))(a1, *(_QWORD *)(v3 + 24), a3);
}
