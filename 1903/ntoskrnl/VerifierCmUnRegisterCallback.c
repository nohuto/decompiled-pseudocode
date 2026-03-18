/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x14096F3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmUnRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmUnRegisterCallback)();
}
