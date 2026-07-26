/*
 * XREFs of ndisMSendPacketCompleteToOpen @ 0x1C008B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp @ 0x1C0089AD0 (McTemplateK0pp.c)
 */

void __fastcall ndisMSendPacketCompleteToOpen(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _NDIS_STACK_RESERVED *v9; // [rsp+40h] [rbp+8h] BYREF

  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v9);
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v9 + 2) = 0;
  if ( (byte_1C00E8044 & 2) != 0 )
    McTemplateK0pp(v7, v6, (const GUID *)(v8 + 4008), a1, a2);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 528), a2, a3);
  ndisMDereferenceOpenUnlocked(a1, 9);
}
