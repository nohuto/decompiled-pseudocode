/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1400FD470
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406AC7D0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1406AC8E0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14073CC90 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
