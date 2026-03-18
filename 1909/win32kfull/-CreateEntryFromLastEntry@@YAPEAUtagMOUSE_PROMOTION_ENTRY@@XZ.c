/*
 * XREFs of ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C02072DC
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020716C (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *CreateEntryFromLastEntry(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    *(_OWORD *)result = xmmword_1C032A2A0;
    *((_OWORD *)result + 1) = xmmword_1C032A2B0;
    *((_OWORD *)result + 2) = xmmword_1C032A2C0;
  }
  return result;
}
