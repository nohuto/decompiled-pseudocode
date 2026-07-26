/*
 * XREFs of PktMonDetachProvider @ 0x1C00C99D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 PktMonDetachProvider()
{
  byte_1C00E5E20 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  *(_OWORD *)&ProviderBindingContext = 0LL;
  if ( qword_1C00E5E30 )
    qword_1C00E5E30();
  return 0LL;
}
