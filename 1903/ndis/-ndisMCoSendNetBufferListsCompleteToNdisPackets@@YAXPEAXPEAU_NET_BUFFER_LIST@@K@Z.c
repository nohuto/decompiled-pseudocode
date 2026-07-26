/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0088B40
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B268 (ndisXlateSendCompleteNetBufferListToPacket.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNdisPackets(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  __int64 v2; // rdi
  struct _NET_BUFFER_LIST *v3; // rax
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v2 = a1[9];
    v3 = a2;
    v6 = 0;
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
      ndisXlateSendCompleteNetBufferListToPacket(v3, &v7, (int *)&v6);
      NDIS_STACK_RESERVED_FROM_PACKET(v7, &v8);
      *((_DWORD *)v8 + 2) = 0;
      v5 = v6;
      --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(v2 + 48))(v5, *(_QWORD *)(v2 + 24), v7);
      v3 = Alignment;
    }
    while ( Alignment );
  }
}
