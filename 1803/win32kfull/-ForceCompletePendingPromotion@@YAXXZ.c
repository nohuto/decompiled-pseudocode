/*
 * XREFs of ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00E6660 (xxxCleanupThreadPointerInputInfo.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01CD70C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01CDDE8 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01CD4BC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C01CD7C0 (-ResetPendingPromotion@@YAXXZ.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CD878 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 */

void ForceCompletePendingPromotion(void)
{
  unsigned __int16 v0; // bx
  struct tagMOUSE_PROMOTION_ENTRY *v1; // r9
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v3; // [rsp+48h] [rbp+10h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v4; // [rsp+50h] [rbp+18h] BYREF

  v0 = word_1C0326C20;
  v2 = ((dword_1C0326C30 != 0) + 16842753) | (dword_1C0326C34 != 0 ? 0x2000000 : 0);
  if ( !ValidatePointerPromotion(word_1C0326C20, dword_1C0326C24, &v2, &v4, &v3) )
    goto LABEL_5;
  v1 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 11) |= 0x20u;
    v0 = word_1C0326C20;
  }
  if ( !PromotePointerInternal(v0, v2, v4, v1) )
LABEL_5:
    ResetPendingPromotion();
}
