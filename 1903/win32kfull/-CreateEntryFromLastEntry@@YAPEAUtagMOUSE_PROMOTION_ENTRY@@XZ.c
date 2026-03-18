/*
 * XREFs of ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C020758C
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020741C (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *CreateEntryFromLastEntry(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    *(_OWORD *)result = xmmword_1C032C2B0;
    *((_OWORD *)result + 1) = xmmword_1C032C2C0;
    *((_OWORD *)result + 2) = xmmword_1C032C2D0;
  }
  return result;
}
