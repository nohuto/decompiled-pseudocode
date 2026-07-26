/*
 * XREFs of PktMonClientComponentUnregister @ 0x1C0023D0C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientComponentUnregister(_QWORD *a1)
{
  if ( *a1 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      (*((void (__fastcall **)(PVOID, _QWORD))*(&ProviderBindingContext + 1) + 2))(ProviderBindingContext, *a1);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
    *a1 = 0LL;
    a1[1] = 0LL;
  }
}
