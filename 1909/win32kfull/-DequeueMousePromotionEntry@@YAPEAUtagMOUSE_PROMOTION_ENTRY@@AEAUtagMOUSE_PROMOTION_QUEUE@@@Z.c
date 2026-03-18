/*
 * XREFs of ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C020738C
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0207FB4 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall DequeueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  result = 0LL;
  if ( *(_QWORD *)a1 )
  {
    result = *(struct tagMOUSE_PROMOTION_ENTRY **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    if ( *((struct tagMOUSE_PROMOTION_ENTRY **)a1 + 1) == result )
      *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
