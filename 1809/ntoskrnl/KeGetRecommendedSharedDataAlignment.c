/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x14000E8C0
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A37E0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1405A38F0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x14070FED0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
