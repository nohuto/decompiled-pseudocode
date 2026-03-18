/*
 * XREFs of VerifierMmResetDriverPaging @ 0x140971130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmResetDriverPaging()
{
  return ((__int64 (*)(void))pXdvMmResetDriverPaging)();
}
