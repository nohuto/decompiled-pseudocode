/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140977B2C
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1409779C0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140977CB0 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_140446328;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLock)(a1, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
