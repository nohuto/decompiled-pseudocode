/*
 * XREFs of VerifierIoSetShareAccess @ 0x140970990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetShareAccess()
{
  return ((__int64 (*)(void))pXdvIoSetShareAccess)();
}
