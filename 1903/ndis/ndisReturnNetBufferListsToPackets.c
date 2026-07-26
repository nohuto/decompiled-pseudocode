/*
 * XREFs of ndisReturnNetBufferListsToPackets @ 0x1C00AF130
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisMPauseComplete @ 0x1C003FC50 (NdisMPauseComplete.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B130 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisReturnPacketToMiniport @ 0x1C00AF264 (ndisReturnPacketToMiniport.c)
 */

void __fastcall ndisReturnNetBufferListsToPackets(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  int v3; // r15d
  KIRQL v4; // si
  char v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // rbp
  struct _NDIS_PACKET *v9; // rax
  PNDIS_PACKET v10; // r9
  int v11; // eax
  bool v12; // zf
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    v4 = KfRaiseIrql(2u);
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      v9 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(a2);
      if ( v9 )
      {
        ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
        NDIS_STACK_RESERVED_FROM_PACKET(v9, &v13);
        ++v3;
        *(_QWORD *)v13 = a1;
        ndisReturnPacketToMiniport(a1, v10);
      }
      a2 = Alignment;
    }
    while ( Alignment );
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 2000));
  v11 = *(_DWORD *)(a1 + 2012) - v3;
  v12 = *(_DWORD *)(a1 + 2008) == 5;
  *(_DWORD *)(a1 + 2012) = v11;
  if ( !v12 || v11 )
  {
    *(_QWORD *)(a1 + 2016) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 2000));
  }
  else
  {
    *(_QWORD *)(a1 + 2016) = 0LL;
    *(_DWORD *)(a1 + 2008) = 6;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 2000));
    NdisMPauseComplete((NDIS_HANDLE)a1);
  }
  if ( !v7 && v4 != 2 )
    KeLowerIrql(v4);
}
