/*
 * XREFs of ndisPnPCompleteRemoveDevice @ 0x1C00F2FE0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00E346C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00F09BC (ndisMInvokeRemoveDevice.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(__int64 a1)
{
  int v2; // edi
  void (__fastcall *v3)(_QWORD); // rax
  __int64 v4; // rcx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x5Du, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, a1);
  v2 = 1;
  if ( (ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1) || (*(_DWORD *)(a1 + 120) & 0x80u) != 0)
    && *(_DWORD *)(a1 + 1524) == 1
    && (*(_DWORD *)(a1 + 124) & 0x4000) == 0 )
  {
    v2 = 2;
  }
  v3 = *(void (__fastcall **)(_QWORD))(a1 + 4880);
  if ( v3 )
    v3(*(_QWORD *)(a1 + 4904));
  ndisMInvokeRemoveDevice(a1);
  IoDeleteSymbolicLink(*(PUNICODE_STRING *)(a1 + 4208));
  if ( *(_QWORD *)(a1 + 4192) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 4184));
    *(_QWORD *)(a1 + 4192) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 4072);
  *(_DWORD *)(a1 + 4092) = v2;
  if ( v4 )
    ndisIfRemoveIfBlockMiniportAssociation(v4, a1, v2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x5Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, a1);
}
