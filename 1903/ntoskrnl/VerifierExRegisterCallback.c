/*
 * XREFs of VerifierExRegisterCallback @ 0x14096F6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRegisterCallback()
{
  return ((__int64 (*)(void))pXdvExRegisterCallback)();
}
