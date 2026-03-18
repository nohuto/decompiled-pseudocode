/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140977D14
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140977CD0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140977DB0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402A6F00 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(
        volatile __int64 *a1,
        __int64 a2,
        ULONG_PTR a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_140446328;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress((ULONG_PTR)a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  LOBYTE(v5) = 12;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireInStackQueuedSpinLockRaiseToSynch(a1, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
