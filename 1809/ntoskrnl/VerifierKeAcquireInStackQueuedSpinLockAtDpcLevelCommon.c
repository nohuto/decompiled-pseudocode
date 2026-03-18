/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140939424
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1409393E0 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1409394E0 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x14093507C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v6; // dl

  ++dword_14041A988;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v6, a3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel)(a1, a3);
}
