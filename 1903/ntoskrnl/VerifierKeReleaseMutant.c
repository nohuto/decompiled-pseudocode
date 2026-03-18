/*
 * XREFs of VerifierKeReleaseMutant @ 0x1409786C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutant(ULONG_PTR a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  VfDeadlockReleaseResource(a1);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))pXdvKeReleaseMutant)(a1, a2, v9, v8);
}
