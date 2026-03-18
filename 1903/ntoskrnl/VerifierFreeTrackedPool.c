/*
 * XREFs of VerifierFreeTrackedPool @ 0x1403289B0
 * Callers:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14033F270 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x1409728A8 (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
