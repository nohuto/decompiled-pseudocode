/*
 * XREFs of ndisReturnPacketToMiniport @ 0x1C006E99C
 * Callers:
 *     NdisReturnPackets @ 0x1C00613F0 (NdisReturnPackets.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C006E840 (ndisReturnNetBufferListsToPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisMQueueWorkItem @ 0x1C00638BC (ndisMQueueWorkItem.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0067FF0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisReturnPacketToMiniport(__int64 a1, struct _NDIS_PACKET *a2)
{
  char v4; // si
  void (__fastcall *v5)(_QWORD, struct _NDIS_PACKET *); // r8
  int v6; // eax
  int v7; // ecx
  struct _NDIS_STACK_RESERVED *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v8);
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    goto LABEL_7;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2492805;
  if ( !*(_BYTE *)(a1 + 89) )
  {
    *(_BYTE *)(a1 + 89) = 1;
    v4 = 1;
    *(_DWORD *)(a1 + 1868) = 2492806;
    *(_QWORD *)(a1 + 1872) = KeGetCurrentThread();
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 || v4 )
  {
LABEL_7:
    v5 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(a1 + 2176);
    *(_QWORD *)v8 = 0LL;
    v6 = a2[-1].Reserved[1];
    v7 = *(_DWORD *)&a2[-1].ProtocolReserved[4] - 1;
    *(_DWORD *)&a2[-1].ProtocolReserved[4] = v7;
    if ( (v6 & 1) != 0 && v7 == -1 )
      NDIS_FREE_XFER_DATA_PACKET(a2);
    else
      v5(*(_QWORD *)(a1 + 2184), a2);
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 1828));
  }
  else
  {
    *(_QWORD *)v8 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 152) = a2;
    ndisMQueueWorkItem(a1, 2, 0LL);
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 )
  {
    if ( v4 )
    {
      *(_DWORD *)(a1 + 1868) = 0;
      *(_QWORD *)(a1 + 1872) = 0LL;
      *(_BYTE *)(a1 + 89) = 0;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
}
