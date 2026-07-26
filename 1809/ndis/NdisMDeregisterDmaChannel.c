/*
 * XREFs of NdisMDeregisterDmaChannel @ 0x1C0118370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __stdcall NdisMDeregisterDmaChannel(NDIS_HANDLE MiniportDmaHandle)
{
  __int64 v1; // rdi
  KIRQL v3; // si

  v1 = *((_QWORD *)MiniportDmaHandle + 5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x27u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 48LL))();
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceDmaAdapter(*(PVOID *)(v1 + 504));
  ndisDereferencePackage((__int64)&ndisPkgs);
  ExFreePoolWithTag(MiniportDmaHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x28u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
}
