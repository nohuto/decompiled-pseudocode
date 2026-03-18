/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0207D50
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207570 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0207878 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C032A2F8 )
    *(_DWORD *)(qword_1C032A2F8 + 1112) = 0;
  word_1C032A2F0 = 0;
  dword_1C032A2F4 = 0;
  qword_1C032A2F8 = 0LL;
  dword_1C032A300 = 0;
}
