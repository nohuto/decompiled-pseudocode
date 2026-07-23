/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14010C960
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140690B68 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x1408BA4E0 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
