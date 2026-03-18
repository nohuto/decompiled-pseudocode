/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x14097F3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceShared)();
}
