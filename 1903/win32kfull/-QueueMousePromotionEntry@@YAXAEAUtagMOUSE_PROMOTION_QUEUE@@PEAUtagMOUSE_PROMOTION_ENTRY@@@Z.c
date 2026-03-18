/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0207EF4
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020741C (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0208498 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
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
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C2A0 )
  {
    xmmword_1C032C2B0 = *(_OWORD *)qword_1C032C2A8;
    xmmword_1C032C2C0 = *(_OWORD *)(qword_1C032C2A8 + 16);
    v3 = *(_OWORD *)(qword_1C032C2A8 + 32);
    *(_QWORD *)&xmmword_1C032C2B0 = 0LL;
    xmmword_1C032C2D0 = v3;
  }
}
