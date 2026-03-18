/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C007AC60
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020716C (-CancelAutoPromotion@@YAXXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C0207660 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0207974 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0207C9C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *v2; // rcx

  while ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    Win32FreePool(v2);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
