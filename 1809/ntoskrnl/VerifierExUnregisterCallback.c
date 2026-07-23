/*
 * XREFs of VerifierExUnregisterCallback @ 0x140931F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierExUnregisterCallback()
{
  return ((__int64 (*)(void))pXdvExUnregisterCallback)();
}
