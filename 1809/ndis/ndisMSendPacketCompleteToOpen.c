/*
 * XREFs of ndisMSendPacketCompleteToOpen @ 0x1C0058360
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     McTemplateK0pp @ 0x1C00555E4 (McTemplateK0pp.c)
 */

void __fastcall ndisMSendPacketCompleteToOpen(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0x14u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v10);
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v10 + 2) = 0;
  if ( (byte_1C00A2084 & 2) != 0 )
    McTemplateK0pp(v8, v7, (const GUID *)(v3 + 4040), a1, a2);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 528), a2, a3);
  ndisMDereferenceOpenUnlocked(a1, 9);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x15u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}
