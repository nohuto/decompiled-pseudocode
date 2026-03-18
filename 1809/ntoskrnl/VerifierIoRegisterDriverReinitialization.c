/*
 * XREFs of VerifierIoRegisterDriverReinitialization @ 0x140931EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterDriverReinitialization()
{
  return ((__int64 (*)(void))pXdvIoRegisterDriverReinitialization)();
}
