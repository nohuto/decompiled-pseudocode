/*
 * XREFs of ViKeAcquireSpinLockRaiseToDpcCommon @ 0x14093BD74
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x14093A880 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x14093A8D0 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093C048 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall ViKeAcquireSpinLockRaiseToDpcCommon(ULONG_PTR a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax

  VfUtilCheckKernelAddress(a1, 8uLL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, ((unsigned int)MmVerifierData >> 17) & 1);
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockRaiseToDpc)(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
