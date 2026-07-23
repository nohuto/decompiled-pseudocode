/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x140933770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmAddPhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmAddPhysicalMemory)();
}
