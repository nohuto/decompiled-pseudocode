/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140939B90
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140939B70 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140290238 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140926400 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter3, 0x40uLL);
  if ( (MmVerifierData & 0x400000) == 0 )
    KeCheckForTimer(BugCheckParameter3, 64LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeTimerEx)(BugCheckParameter3, a2);
}
