/*
 * XREFs of ndisMSendCompleteSG @ 0x1C0057CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMFreeSGList @ 0x1C004CEB8 (ndisMFreeSGList.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0055390 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C005613C (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0057C0C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMQueueWorkItem @ 0x1C00638BC (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMSendCompleteSG(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned __int8 NdisPacketFlags; // al
  struct _NDIS_STACK_RESERVED *v7; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 **v11; // rcx
  __int64 v12; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0x24u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v14);
  if ( (*(_DWORD *)v14 & 0xFFFFFF00) != 0x4D4F4300LL )
  {
    NdisPacketFlags = a2->Private.NdisPacketFlags;
    if ( (NdisPacketFlags & 0x10) != 0 )
    {
      if ( !a3 )
      {
        NDISM_SEND_PACKET_STATS(a1, a2);
        NdisPacketFlags = a2->Private.NdisPacketFlags;
      }
      if ( (NdisPacketFlags & 8) != 0 )
      {
        *(unsigned int *)((char *)&a2->Private.Count + a2->Private.NdisPacketOobOffset) = a3;
        a2->Private.NdisPacketFlags &= ~8u;
      }
      else
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v7 = v14;
        a1->MiniportThread = KeGetCurrentThread();
        WrapperReserved = a2->WrapperReserved;
        a1->LockDbg = 1509611;
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
          ndisMQueueWorkItem(a1, 1LL);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
          ndisMFreeSGList((__int64)a1, (__int64)a2, v12);
        *((_DWORD *)v7 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl((__int64)a2);
        NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
        a2->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((__int64)a1, a2, a3);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, a2, a3);
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x25u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}
