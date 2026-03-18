/*
 * XREFs of ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CCC98
 * Callers:
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01CD30C (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01CD3CC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AppendMousePromotionQueue(
        struct tagMOUSE_PROMOTION_QUEUE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3)
{
  __int128 v3; // xmm0

  if ( *(_QWORD *)a1 )
    **((_QWORD **)a1 + 1) = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a3;
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0 )
  {
    xmmword_1C0326BD0 = *(_OWORD *)qword_1C0326BC8;
    xmmword_1C0326BE0 = *(_OWORD *)(qword_1C0326BC8 + 16);
    v3 = *(_OWORD *)(qword_1C0326BC8 + 32);
    *(_QWORD *)&xmmword_1C0326BD0 = 0LL;
    xmmword_1C0326BF0 = v3;
  }
}
