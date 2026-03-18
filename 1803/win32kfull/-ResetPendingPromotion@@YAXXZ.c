/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C01CD7C0
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01CD3CC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0326C28 )
    *(_DWORD *)(qword_1C0326C28 + 1104) = 0;
  word_1C0326C20 = 0;
  dword_1C0326C24 = 0;
  qword_1C0326C28 = 0LL;
  dword_1C0326C30 = 0;
}
