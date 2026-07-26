/*
 * XREFs of ndisMSendCompleteSG @ 0x1C008B270
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C0079AD4 (ndisMFreeSGList.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0088D4C (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C008A0A0 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMQueueWorkItem @ 0x1C009B628 (ndisMQueueWorkItem.c)
 */

char __fastcall ndisMSendCompleteSG(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v7; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 **v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _NDIS_STACK_RESERVED *v15; // [rsp+40h] [rbp+8h] BYREF

  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v15);
  NdisPacketOobOffset = *(_DWORD *)v15 & 0xFFFFFF00;
  if ( NdisPacketOobOffset != 1297040128 )
  {
    LOBYTE(NdisPacketOobOffset) = a2->Private.NdisPacketFlags;
    if ( (NdisPacketOobOffset & 0x10) != 0 )
    {
      if ( !a3 )
      {
        NDISM_SEND_PACKET_STATS(a1, a2);
        LOBYTE(NdisPacketOobOffset) = a2->Private.NdisPacketFlags;
      }
      if ( (NdisPacketOobOffset & 8) != 0 )
      {
        NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
        *(unsigned int *)((char *)&a2->Private.Count + NdisPacketOobOffset) = a3;
        a2->Private.NdisPacketFlags &= ~8u;
      }
      else
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v7 = v15;
        a1->MiniportThread = KeGetCurrentThread();
        WrapperReserved = a2->WrapperReserved;
        v9 = *(_QWORD *)&a2->MacReserved[16];
        v10 = *(_QWORD *)v7;
        if ( *(struct _NDIS_PACKET **)(v9 + 8) != (struct _NDIS_PACKET *)&a2->MacReserved[16]
          || (v11 = *(unsigned __int8 ***)&a2->MacReserved[24], *v11 != WrapperReserved) )
        {
          __fastfail(3u);
        }
        *v11 = (unsigned __int8 *)v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)&a2->MacReserved[24] = &a2->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v7 = 1297040177LL;
        if ( a1->FirstPendingPacket )
          ndisMQueueWorkItem((char)a1);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
          ndisMFreeSGList((__int64)a1, (__int64)a2, v12);
        *((_DWORD *)v7 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl((__int64)a2);
        v13 = a2->Private.NdisPacketOobOffset;
        a2->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&a2[1].Private.Head + v13) )
          LOBYTE(NdisPacketOobOffset) = (unsigned __int8)ndisMSendCompletePacketToNetBufferLists((__int64)a1, a2, a3);
        else
          LOBYTE(NdisPacketOobOffset) = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v10 + 112))(
                                          v10,
                                          a2,
                                          a3);
      }
    }
  }
  return NdisPacketOobOffset;
}
