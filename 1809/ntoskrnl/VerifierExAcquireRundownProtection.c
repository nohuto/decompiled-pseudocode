/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x140931B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtection()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtection)();
}
