/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01CD6B4
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01CCCF0 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01CDC04 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1, struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  _QWORD *v2; // rax
  __int128 v3; // xmm0

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v2 )
    *v2 = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a2;
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0 )
  {
    xmmword_1C0326BD0 = *(_OWORD *)qword_1C0326BC8;
    xmmword_1C0326BE0 = *(_OWORD *)(qword_1C0326BC8 + 16);
    v3 = *(_OWORD *)(qword_1C0326BC8 + 32);
    *(_QWORD *)&xmmword_1C0326BD0 = 0LL;
    xmmword_1C0326BF0 = v3;
  }
}
