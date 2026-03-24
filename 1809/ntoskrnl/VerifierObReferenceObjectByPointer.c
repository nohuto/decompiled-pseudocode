/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x140945AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointer(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r9

  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  if ( !*(_QWORD *)(BugCheckParameter2 - 48) && (MmVerifierData & 0x800) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, BugCheckParameter2, 1uLL, 0LL);
  LOBYTE(v8) = a4;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))pXdvObReferenceObjectByPointer)(
           BugCheckParameter2,
           a2,
           a3,
           v8);
}
