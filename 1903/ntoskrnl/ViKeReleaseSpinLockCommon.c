/*
 * XREFs of ViKeReleaseSpinLockCommon @ 0x140979770
 * Callers:
 *     VerifierKeReleaseSpinLock @ 0x140978860 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1409789D0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140979090 (VerifierPortKeReleaseSpinLockNoXdv.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140979548 (ViKeLowerIrqlSanityChecks.c)
 */

char *__fastcall ViKeReleaseSpinLockCommon(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  unsigned __int8 CurrentIrql; // bl

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ViKeLowerIrqlSanityChecks(CurrentIrql, a2);
}
