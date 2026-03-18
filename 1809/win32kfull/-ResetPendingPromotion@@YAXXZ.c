/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C01F1D28
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F155C (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01F1864 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C03172D8 )
    *(_DWORD *)(qword_1C03172D8 + 1112) = 0;
  word_1C03172D0 = 0;
  dword_1C03172D4 = 0;
  qword_1C03172D8 = 0LL;
  dword_1C03172E0 = 0;
}
