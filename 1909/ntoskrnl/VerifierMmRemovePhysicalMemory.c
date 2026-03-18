/*
 * XREFs of VerifierMmRemovePhysicalMemory @ 0x140971110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmRemovePhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmRemovePhysicalMemory)();
}
