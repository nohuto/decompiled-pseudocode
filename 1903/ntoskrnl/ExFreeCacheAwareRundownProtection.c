/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1400B5C70
 * Callers:
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140682604 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x1408F5D78 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware->PoolToFree);
  ExFreeHeapPool((ULONG_PTR)RunRefCacheAware);
}
