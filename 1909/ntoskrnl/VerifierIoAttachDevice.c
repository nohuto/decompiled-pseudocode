/*
 * XREFs of VerifierIoAttachDevice @ 0x140970010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAttachDevice()
{
  return ((__int64 (*)(void))pXdvIoAttachDevice)();
}
