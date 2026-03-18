/*
 * XREFs of VerifierIoCreateSynchronizationEvent @ 0x140970330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoCreateSynchronizationEvent()
{
  return ((__int64 (*)(void))pXdvIoCreateSynchronizationEvent)();
}
