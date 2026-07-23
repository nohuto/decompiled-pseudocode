/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x14093AB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(void *a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x20uLL);
  return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD))pXdvKeInitializeSemaphore)(a1, a2, a3);
}
