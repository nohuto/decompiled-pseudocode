/*
 * XREFs of ViKeInitializeMutexCommon @ 0x140979440
 * Callers:
 *     VerifierKeInitializeMutex @ 0x140978100 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x140978130 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(void *a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  return ((__int64 (__fastcall *)(void *, _QWORD))pXdvKeInitializeMutex)(a1, a2);
}
