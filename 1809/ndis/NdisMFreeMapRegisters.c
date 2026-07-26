/*
 * XREFs of NdisMFreeMapRegisters @ 0x1C0118440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __stdcall NdisMFreeMapRegisters(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // r15
  unsigned int v5; // r14d
  KIRQL v6; // bp

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Du, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) != 0 && *(_QWORD *)(v1 + 136) )
  {
    v3 = (unsigned int)(*(_DWORD *)(v1 + 52) - 2) >> 12;
    v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL) + 56LL);
    v5 = 0;
    v6 = KfRaiseIrql(2u);
    while ( v5 < *(unsigned __int16 *)(v1 + 154) )
      v4(*(_QWORD *)(v1 + 24), *(_QWORD *)(*(_QWORD *)(v1 + 136) + 16LL * v5++), v3 + 2);
    if ( v6 != 2 )
      KeLowerIrql(v6);
    ExFreePoolWithTag(*(PVOID *)(v1 + 136), 0);
    *(_QWORD *)(v1 + 136) = 0LL;
    ndisDereferenceDmaAdapter((PVOID)v1);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
}
