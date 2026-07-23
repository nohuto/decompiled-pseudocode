/*
 * XREFs of VerifierMmResetDriverPaging @ 0x1409338B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmResetDriverPaging()
{
  return ((__int64 (*)(void))pXdvMmResetDriverPaging)();
}
