/*
 * XREFs of VerifierObReferenceObjectByPointerWithTag @ 0x140946B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointerWithTag(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        int a5)
{
  __int64 v9; // r9

  VfUtilCheckKernelAddress(a1, 8uLL);
  LOBYTE(v9) = a4;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64, int))pXdvObReferenceObjectByPointerWithTag)(
           a1,
           a2,
           a3,
           v9,
           a5);
}
