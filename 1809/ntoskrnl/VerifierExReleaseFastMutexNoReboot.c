/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x140943230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViExReleaseFastMutexCommon @ 0x140943768 (ViExReleaseFastMutexCommon.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexNoReboot(ULONG_PTR a1)
{
  ViExReleaseFastMutexCommon(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseFastMutex)(a1);
}
