/*
 * XREFs of VerifierFreeTrackedPool @ 0x1402BA31C
 * Callers:
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EB64 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     ViFreeTrackedPool @ 0x140925838 (ViFreeTrackedPool.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, a2);
}
