/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x14093C19C
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x14093B670 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x14093B6D0 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 v3; // dl

  ++dword_14041BA68;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  if ( (MmVerifierData & 2) != 0 && KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v3, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeTryToAcquireSpinLockAtDpcLevel)(BugCheckParameter3);
}
