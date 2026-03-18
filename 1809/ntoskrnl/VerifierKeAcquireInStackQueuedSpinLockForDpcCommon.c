/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409395E4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1409395A0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140939660 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14093507C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  ++dword_14041A988;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockForDpc)(a1, a3);
}
