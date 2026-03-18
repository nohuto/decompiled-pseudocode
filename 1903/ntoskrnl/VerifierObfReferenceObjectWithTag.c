/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x140985690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfReferenceObjectWithTag(ULONG_PTR a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvObfReferenceObjectWithTag)(a1, a2);
}
