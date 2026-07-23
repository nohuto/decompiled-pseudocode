/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x1409337D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmGetPhysicalMemoryRanges()
{
  return ((__int64 (*)(void))pXdvMmGetPhysicalMemoryRanges)();
}
