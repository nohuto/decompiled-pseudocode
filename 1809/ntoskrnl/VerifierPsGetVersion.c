/*
 * XREFs of VerifierPsGetVersion @ 0x140932CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsGetVersion()
{
  return ((__int64 (*)(void))pXdvPsGetVersion)();
}
