/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14000E8C0
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A27E0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1405A28F0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14070EC50 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
