/*
 * XREFs of VerifierIoFreeMdl @ 0x140929BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoFreeMdl(ULONG_PTR BugCheckParameter2)
{
  VfUtilCheckKernelAddress(BugCheckParameter2, *(unsigned __int16 *)(BugCheckParameter2 + 8));
  if ( (MmVerifierData & 0x800) != 0 && (*(_WORD *)(BugCheckParameter2 + 10) & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB8uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvIoFreeMdl)(BugCheckParameter2);
}
