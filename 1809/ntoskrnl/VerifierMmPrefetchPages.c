/*
 * XREFs of VerifierMmPrefetchPages @ 0x140932870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmPrefetchPages()
{
  return ((__int64 (*)(void))pXdvMmPrefetchPages)();
}
