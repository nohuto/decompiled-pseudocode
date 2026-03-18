/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x140979000
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_140446328;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 148LL);
  VfUtilCheckKernelAddress((ULONG_PTR)SpinLock, 8uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
