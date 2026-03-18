/*
 * XREFs of VerifierObfDereferenceObject @ 0x140945BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObject(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvObfDereferenceObject)(a1);
}
