/*
 * XREFs of ndisNotifyAfRegistration @ 0x1C01173B0
 * Callers:
 *     ndisMFinishQueuedPendingOpen @ 0x1C0118D10 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDereferenceAfNotification @ 0x1C0053B98 (ndisDereferenceAfNotification.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __fastcall ndisNotifyAfRegistration(_QWORD *P)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rbp

  v1 = P[5];
  v2 = P;
  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_q(0xEu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  do
  {
    v3 = v2[6];
    v4 = (_QWORD *)*v2;
    if ( (*(_DWORD *)(v3 + 224) & 0x18000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v3 + 24) + 200LL))(*(_QWORD *)(v3 + 32), v2 + 7);
    ExFreePoolWithTag(v2, 0);
    ndisDereferenceAfNotification(v3);
    ndisMDereferenceOpenUnlocked(v3, 14);
    v2 = v4;
  }
  while ( v4 );
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_q(0xFu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v1);
}
