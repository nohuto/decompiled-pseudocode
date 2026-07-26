/*
 * XREFs of PktMonDetachProvider @ 0x1C00C9920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PktMonDetachProvider()
{
  __int64 result; // rax

  byte_1C00E5E20 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  result = 0LL;
  *(_OWORD *)&ProviderBindingContext = 0LL;
  return result;
}
