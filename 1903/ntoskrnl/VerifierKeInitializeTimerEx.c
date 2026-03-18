/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1409781C0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1409781A0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x1402A6D58 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
