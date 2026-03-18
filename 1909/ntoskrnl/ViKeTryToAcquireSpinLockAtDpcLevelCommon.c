/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409797E0
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140978CA0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140978D00 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 v3; // dl

  ++dword_140446328;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  if ( (MmVerifierData & 2) != 0 && KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v3, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeTryToAcquireSpinLockAtDpcLevel)(BugCheckParameter3);
}
