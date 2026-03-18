/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0208000
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207820 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0207B28 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C032C308 )
    *(_DWORD *)(qword_1C032C308 + 1112) = 0;
  word_1C032C300 = 0;
  dword_1C032C304 = 0;
  qword_1C032C308 = 0LL;
  dword_1C032C310 = 0;
}
