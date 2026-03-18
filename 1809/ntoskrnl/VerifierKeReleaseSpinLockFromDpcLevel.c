/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093A2A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v3; // dl

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x800) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, v3, BugCheckParameter3, 0LL);
  VfDeadlockReleaseResource(BugCheckParameter3);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseSpinLockFromDpcLevel)(BugCheckParameter3);
}
