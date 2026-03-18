/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1C01F1158
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F21AC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00EB7BC (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C01F12C8 (-CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F13FC (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F14D8 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F1C1C (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void CancelAutoPromotion(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *EntryFromLastEntry; // rax
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v2; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317270,
                       dword_1C03171F4,
                       &v3,
                       &v2) )
  {
    v1 = 0LL;
    ExtractRangeFromQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317270,
      (struct tagMOUSE_PROMOTION_QUEUE *)&v1,
      v3,
      v2);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v1);
  }
  else
  {
    EntryFromLastEntry = CreateEntryFromLastEntry();
    if ( EntryFromLastEntry )
    {
      *((_DWORD *)EntryFromLastEntry + 5) = 303104;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317270, EntryFromLastEntry);
    }
  }
  dword_1C03172F8 &= 0xFFFFFFE9;
}
