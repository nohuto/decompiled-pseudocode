/*
 * XREFs of ndisMSendPacketsToMiniport @ 0x1C008BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00894C8 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C008A270 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B3BC (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C009B7F8 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMSendPacketsToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  KSPIN_LOCK *p_Lock; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  unsigned int v9; // r15d
  _LIST_ENTRY *p_PacketList; // r13
  struct _NDIS_PACKET *v11; // rdi
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *Blink; // rdx
  struct _NDIS_STACK_RESERVED *v14; // r14
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **v16; // rax
  __int64 NdisPacketOobOffset; // rax
  KIRQL v18; // [rsp+70h] [rbp+8h]
  struct _NDIS_STACK_RESERVED *v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v20 = a3;
  p_Lock = &a1->Lock;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v18 = v8;
  v9 = 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_PacketList = &a1->PacketList;
    do
    {
      v11 = *a2;
      if ( (a1->SendFlags & 8) != 0 )
        v7 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
      NDIS_STACK_RESERVED_FROM_PACKET(v11, &v19);
      v12 = (_LIST_ENTRY *)&v11->MacReserved[16];
      *(_QWORD *)&v11->MacReserved[24] = &v11->MacReserved[16];
      *(_QWORD *)&v11->MacReserved[16] = &v11->MacReserved[16];
      Blink = a1->PacketList.Blink;
      if ( Blink->Flink != p_PacketList )
LABEL_23:
        __fastfail(3u);
      v12->Flink = p_PacketList;
      *(_QWORD *)&v11->MacReserved[24] = Blink;
      Blink->Flink = v12;
      a1->PacketList.Blink = v12;
      if ( v7 )
      {
        v14 = v19;
        Flink = v12->Flink;
        v21 = *(_QWORD *)v19;
        if ( Flink->Blink != v12 )
          goto LABEL_23;
        v16 = *(_LIST_ENTRY ***)&v11->MacReserved[24];
        if ( *v16 != v12 )
          goto LABEL_23;
        *v16 = Flink;
        Flink->Blink = (_LIST_ENTRY *)v16;
        *(_QWORD *)&v11->MacReserved[24] = &v11->MacReserved[16];
        v12->Flink = v12;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v14 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        *((_DWORD *)v14 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v11[1].Private.Pool + v11->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl((__int64)v11);
        NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
        v11->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v11[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((__int64)a1, v11, v7);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v21 + 112))(v21, v11, v7);
        KeAcquireSpinLockAtDpcLevel(p_Lock);
        v7 = 0;
        a1->MiniportThread = KeGetCurrentThread();
      }
      else if ( !a1->FirstPendingPacket )
      {
        a1->FirstPendingPacket = v11;
      }
      ++v9;
      ++a2;
    }
    while ( v9 < v20 );
    v8 = v18;
  }
  ndisMQueueWorkItem((char)a1);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    ndisMProcessDeferred((char)a1);
    a1->LockThread = 0LL;
    a1->LockAcquired = 0;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v8);
}
