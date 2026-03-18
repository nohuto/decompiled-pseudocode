/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x140945C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObjectWithTag(ULONG_PTR a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvObfDereferenceObjectWithTag)(a1, a2);
}
