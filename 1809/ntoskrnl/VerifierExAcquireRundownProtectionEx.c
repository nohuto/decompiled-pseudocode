/*
 * XREFs of VerifierExAcquireRundownProtectionEx @ 0x140931BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtectionEx()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtectionEx)();
}
