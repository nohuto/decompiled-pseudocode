/*
 * XREFs of ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C020777C
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C0207910 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02080B4 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall FindMousePromotionEntry(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        unsigned int a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  for ( result = *a1;
        result && (*((_DWORD *)result + 8) > a2 || *((_DWORD *)result + 9) < a2);
        result = *(struct tagMOUSE_PROMOTION_ENTRY **)result )
  {
    ;
  }
  return result;
}
