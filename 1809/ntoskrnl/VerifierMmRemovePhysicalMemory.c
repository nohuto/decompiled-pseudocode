/*
 * XREFs of VerifierMmRemovePhysicalMemory @ 0x140933890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmRemovePhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmRemovePhysicalMemory)();
}
