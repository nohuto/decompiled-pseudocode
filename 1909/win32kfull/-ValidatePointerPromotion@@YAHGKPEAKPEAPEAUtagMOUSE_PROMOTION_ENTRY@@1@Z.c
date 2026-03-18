/*
 * XREFs of ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0207E04
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207570 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02083F0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C02073B4 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0207498 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C02074CC (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02074EC (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 */

__int64 __fastcall ValidatePointerPromotion(
        __int16 a1,
        unsigned int a2,
        unsigned int *a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4,
        struct tagMOUSE_PROMOTION_ENTRY **a5)
{
  unsigned int v5; // ebx
  __int16 *CacheById; // rax
  __int16 *v10; // rdi
  __int64 **v11; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v12; // r8
  struct tagMOUSE_PROMOTION_ENTRY *v13; // r9
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  unsigned int v15; // r10d
  struct tagMOUSE_PROMOTION_ENTRY **v16; // rax
  int v18; // eax
  struct tagMOUSE_PROMOTION_ENTRY *v19; // [rsp+20h] [rbp-38h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v20; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = *a3;
  v19 = 0LL;
  v20 = 0LL;
  CacheById = (__int16 *)FindCacheById(a1, &v21);
  v10 = CacheById;
  if ( !CacheById || CacheById == word_1C032A218 && (dword_1C032A318 & 2) != 0 )
    return 0LL;
  v11 = (__int64 **)(CacheById + 4);
  if ( v5 )
  {
    if ( (unsigned int)FindMousePromotionInContactRange(v11, a2, &v19, &v20) )
    {
      v12 = v19;
      v13 = v20;
    }
    else
    {
      v12 = 0LL;
      v13 = 0LL;
    }
  }
  else
  {
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)v11, a2);
    v12 = MousePromotionEntry;
    if ( MousePromotionEntry && (*((_DWORD *)MousePromotionEntry + 5) & 0x40004) != 0 )
      v12 = 0LL;
    v13 = v12;
  }
  if ( !v12 )
    return 0LL;
  if ( v5 != 0x10000000 || (v5 = DetectPromotionType(v12, v13), v5 != v15) )
  {
    v18 = v5 & 0x20000;
    if ( v13 )
    {
      if ( v18 && *((_DWORD *)v13 + 9) != a2 || (v5 & 0x1000000) == 0 && (*((_DWORD *)v13 + 5) & 0x8000) != 0 )
        return 0LL;
    }
    else if ( v18 || v10 != word_1C032A218 )
    {
      return 0LL;
    }
    *a3 = v5;
    goto LABEL_17;
  }
  if ( v10 == word_1C032A218 )
  {
    *a3 = v15;
LABEL_17:
    v16 = a5;
    *a4 = v12;
    *v16 = v13;
    return 1LL;
  }
  return 0LL;
}
