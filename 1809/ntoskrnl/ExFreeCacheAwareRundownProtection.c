/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14010C8E0
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x14068F9A8 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x1408B9220 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
