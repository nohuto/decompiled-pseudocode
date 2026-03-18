/*
 * XREFs of VerifierObGetObjectSecurity @ 0x140985320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObGetObjectSecurity(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvObGetObjectSecurity)(a1, a2, a3);
}
