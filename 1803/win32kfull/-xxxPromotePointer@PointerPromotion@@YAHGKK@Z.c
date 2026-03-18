/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01CDDE8
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01CDC04 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     EditionPromotePointer @ 0x1C01CE1B0 (EditionPromotePointer.c)
 * Callees:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01CD4BC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CD878 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01CDA2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

__int64 __fastcall PointerPromotion::xxxPromotePointer(PointerPromotion *this, unsigned int a2, unsigned int a3)
{
  __int16 v5; // bx
  struct tagMOUSE_PROMOTION_ENTRY *v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  struct tagMOUSE_PROMOTION_ENTRY *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = a3;
  v5 = (__int16)this;
  if ( !(unsigned int)ValidatePointerPromotion((__int16)this, a2, &v12, &v13, v11) )
    return 0LL;
  if ( !word_1C0326C20 )
    goto LABEL_12;
  if ( word_1C0326C20 != v5 || (v7 = v13, dword_1C0326C24 != *((_DWORD *)v13 + 8)) )
  {
    ForceCompletePendingPromotion();
    v12 = a3;
    if ( !(unsigned int)ValidatePointerPromotion(v5, a2, &v12, &v13, v11) )
      return 0LL;
LABEL_12:
    v9 = v12;
    v7 = v13;
LABEL_13:
    if ( v9 == 0x10000000 )
    {
      dword_1C0326C48 |= 8u;
      return 1LL;
    }
    else
    {
      v10 = PromotePointerInternal(v5, v9, v7, v11[0]);
      xxxProcessMousePromotionQueue();
      return v10;
    }
  }
  LOBYTE(v8) = v12;
  if ( (v12 & 0x80000) == 0 )
  {
    v9 = (dword_1C0326C34 != 0 ? 50331648 : 0x1000000) | ((dword_1C0326C30 != 0) + 1) | v12 & 0xFFFF00;
    goto LABEL_13;
  }
  if ( dword_1C0326C30 )
    v8 = v12 >> 1;
  return v8 & 1;
}
