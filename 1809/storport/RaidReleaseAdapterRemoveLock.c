/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C0022538
 * Callers:
 *     StorPortWorkItemRoutine @ 0x1C003F4B0 (StorPortWorkItemRoutine.c)
 *     StorpQueueWorkItem @ 0x1C00411D8 (StorpQueueWorkItem.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 272));
}
