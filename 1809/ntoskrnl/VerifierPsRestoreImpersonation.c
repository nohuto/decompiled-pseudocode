/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x140933D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsRestoreImpersonation()
{
  return ((__int64 (*)(void))pXdvPsRestoreImpersonation)();
}
