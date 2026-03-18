/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0207C44
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020716C (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02081E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
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
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032A290 )
  {
    xmmword_1C032A2A0 = *(_OWORD *)qword_1C032A298;
    xmmword_1C032A2B0 = *(_OWORD *)(qword_1C032A298 + 16);
    v3 = *(_OWORD *)(qword_1C032A298 + 32);
    *(_QWORD *)&xmmword_1C032A2A0 = 0LL;
    xmmword_1C032A2C0 = v3;
  }
}
