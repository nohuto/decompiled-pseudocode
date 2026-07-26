/*
 * XREFs of NdisReturnPackets @ 0x1C0098C40
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00AE0B4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisReturnPacketToMiniport @ 0x1C00AF434 (ndisReturnPacketToMiniport.c)
 */

void __fastcall NdisReturnPackets(struct _NDIS_PACKET **a1, unsigned int a2)
{
  __int64 v3; // rsi
  KIRQL v4; // bl
  struct _NDIS_PACKET *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  struct _NDIS_PACKET *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *v9; // r10
  struct _NDIS_STACK_RESERVED *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v4 = KfRaiseIrql(2u);
  if ( (_DWORD)v3 )
  {
    do
    {
      NDIS_STACK_RESERVED_FROM_PACKET(*a1, &v10);
      v6 = *(_QWORD *)v10;
      v7 = *(__int64 *)((char *)&v5[1].Private.Head + v5->Private.NdisPacketOobOffset);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v7 )
        {
          NDIS_STACK_RESERVED_FROM_PACKET(v5, &v11);
          *(_QWORD *)v11 = 0LL;
          --*(_DWORD *)&v8[-1].ProtocolReserved[4];
          if ( (v9->Flags & 0x8000) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&v9->IndicatedPacketsCount);
          ndisReturnPacketToNetBufferList(v9, v8);
        }
        else
        {
          ndisReturnPacketToMiniport(v6, v5);
        }
      }
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
}
