/*
 * XREFs of ndisMDeferredReturnPackets @ 0x1C00625CC
 * Callers:
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0067FF0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMDeferredReturnPackets(__int64 a1)
{
  void (__fastcall *v1)(_QWORD, struct _NDIS_PACKET *); // rsi
  struct _NDIS_PACKET *v3; // rcx
  struct _NDIS_PACKET *v4; // rcx
  struct _NDIS_PACKET *v5; // rdi
  int v6; // eax
  int v7; // edx
  struct _NDIS_STACK_RESERVED *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(a1 + 2176);
  v3 = *(struct _NDIS_PACKET **)(a1 + 152);
  if ( v3 )
  {
    do
    {
      NDIS_STACK_RESERVED_FROM_PACKET(v3, &v8);
      v5 = *(struct _NDIS_PACKET **)v8;
      *(_QWORD *)v8 = 0LL;
      v6 = v4[-1].Reserved[1];
      v7 = *(_DWORD *)&v4[-1].ProtocolReserved[4] - 1;
      *(_DWORD *)&v4[-1].ProtocolReserved[4] = v7;
      if ( (v6 & 1) != 0 && v7 == -1 )
        NDIS_FREE_XFER_DATA_PACKET(v4);
      else
        v1(*(_QWORD *)(a1 + 24), v4);
      if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 1828));
      v3 = v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 152) = 0LL;
}
