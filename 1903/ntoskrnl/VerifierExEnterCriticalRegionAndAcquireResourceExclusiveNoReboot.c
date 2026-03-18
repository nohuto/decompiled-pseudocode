/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x14097F320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceExclusive)();
}
