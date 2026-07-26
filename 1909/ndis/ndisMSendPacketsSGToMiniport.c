/*
 * XREFs of ndisMSendPacketsSGToMiniport @ 0x1C008BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMAllocSGListS @ 0x1C0079714 (ndisMAllocSGListS.c)
 *     ndisMFreeSGList @ 0x1C0079CA4 (ndisMFreeSGList.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00894C8 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C008A270 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B3BC (ndisMSendCompletePacketToNetBufferLists.c)
 */

void __fastcall ndisMSendPacketsSGToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  struct _NDIS_PACKET *v6; // rbx
  unsigned int v7; // esi
  KIRQL v8; // al
  struct _NDIS_STACK_RESERVED *v9; // r12
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 NdisPacketOobOffset; // rax
  KIRQL v13; // dl
  struct _NDIS_STACK_RESERVED *v14; // [rsp+60h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+18h]

  if ( a3 )
  {
    v4 = a3;
    do
    {
      v6 = *a2;
      v7 = 0;
      if ( (a1->SendFlags & 8) != 0 )
        v7 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v6->Private.Count + v6->Private.NdisPacketOobOffset) = 259;
      if ( v7 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        NewIrql = v8;
        NDIS_STACK_RESERVED_FROM_PACKET(v6, &v14);
        v9 = v14;
        v10 = *(_QWORD *)v14;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v9 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) )
          ndisMFreeSGList((__int64)a1, (__int64)v6, v11);
        *((_DWORD *)v9 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v6[1].Private.Pool + v6->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl((__int64)v6);
        NdisPacketOobOffset = v6->Private.NdisPacketOobOffset;
        v6->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v6[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((__int64)a1, v6, v7);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, v6, v7);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v13 = NewIrql;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v13);
      }
      else
      {
        ndisMAllocSGListS((__int64)a1, v6);
      }
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
