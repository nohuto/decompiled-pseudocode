/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1400996D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140663500 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140663610 (ExInitializeRundownProtectionCacheAware.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14073AD30 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
