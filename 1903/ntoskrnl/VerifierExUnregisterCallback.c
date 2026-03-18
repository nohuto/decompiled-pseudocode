/*
 * XREFs of VerifierExUnregisterCallback @ 0x14096F7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExUnregisterCallback()
{
  return ((__int64 (*)(void))pXdvExUnregisterCallback)();
}
