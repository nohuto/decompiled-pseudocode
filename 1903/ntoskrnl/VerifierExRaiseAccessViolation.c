/*
 * XREFs of VerifierExRaiseAccessViolation @ 0x14096F640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseAccessViolation()
{
  return ((__int64 (*)(void))pXdvExRaiseAccessViolation)();
}
