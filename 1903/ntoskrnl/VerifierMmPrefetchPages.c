/*
 * XREFs of VerifierMmPrefetchPages @ 0x1409710F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmPrefetchPages()
{
  return ((__int64 (*)(void))pXdvMmPrefetchPages)();
}
