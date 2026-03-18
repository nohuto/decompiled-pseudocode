/*
 * XREFs of VerifierExCreateCallback @ 0x140930C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExCreateCallback()
{
  return ((__int64 (*)(void))pXdvExCreateCallback)();
}
