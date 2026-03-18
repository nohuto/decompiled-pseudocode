/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140978620
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409785E0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x140978680 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(ULONG_PTR BugCheckParameter3)
{
  __int64 CurrentIrql; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, (unsigned __int8)CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseInStackQueuedSpinLockFromDpcLevel)(
           BugCheckParameter3,
           CurrentIrql);
}
