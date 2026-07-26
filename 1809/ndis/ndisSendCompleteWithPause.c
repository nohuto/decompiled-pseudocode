/*
 * XREFs of ndisSendCompleteWithPause @ 0x1C0059540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

void __fastcall ndisSendCompleteWithPause(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  bool v6; // si
  struct _NDIS_STACK_RESERVED *v7; // rax
  KIRQL v8; // al
  int v9; // ecx
  struct _NDIS_STACK_RESERVED *v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0x34u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v11);
  v7 = v11;
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v7 + 2) = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
  v9 = *(_DWORD *)(a1 + 644) - 1;
  *(_BYTE *)(a1 + 632) = v8;
  *(_DWORD *)(a1 + 644) = v9;
  if ( *(_DWORD *)(a1 + 640) == 1 )
    v6 = v9 == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 624), v8);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 528), a2, a3);
  if ( v6 )
    KeSetEvent((PRKEVENT)(a1 + 648), 0, 0);
  ndisMDereferenceOpenUnlocked(a1, 9);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x35u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}
