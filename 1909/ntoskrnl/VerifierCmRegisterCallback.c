/*
 * XREFs of VerifierCmRegisterCallback @ 0x14096F360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmRegisterCallback)();
}
