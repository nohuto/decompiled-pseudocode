/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140978960
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(ULONG_PTR BugCheckParameter3)
{
  __int64 CurrentIrql; // rdx

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, (unsigned __int8)CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseSpinLockFromDpcLevel)(
           BugCheckParameter3,
           CurrentIrql);
}
