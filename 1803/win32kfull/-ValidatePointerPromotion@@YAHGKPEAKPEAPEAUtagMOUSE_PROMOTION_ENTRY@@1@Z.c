/*
 * XREFs of ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CD878
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01CDDE8 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01CCF0C (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01CCFF0 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C01CD024 (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CD044 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
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
  __int64 **v12; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v13; // r8
  struct tagMOUSE_PROMOTION_ENTRY *v14; // r9
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  unsigned int v16; // r10d
  int v17; // eax
  bool v18; // zf
  struct tagMOUSE_PROMOTION_ENTRY **v19; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v20; // [rsp+20h] [rbp-38h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v21; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+18h] BYREF

  v5 = *a3;
  v20 = 0LL;
  v21 = 0LL;
  CacheById = (__int16 *)FindCacheById(a1, &v22);
  v10 = CacheById;
  if ( !CacheById || CacheById == word_1C0326B48 && (dword_1C0326C48 & 2) != 0 )
    return 0LL;
  v12 = (__int64 **)(CacheById + 4);
  if ( v5 )
  {
    if ( (unsigned int)FindMousePromotionInContactRange(v12, a2, &v20, &v21) )
    {
      v13 = v20;
      v14 = v21;
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
  }
  else
  {
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)v12, a2);
    v13 = MousePromotionEntry;
    if ( MousePromotionEntry && (*((_DWORD *)MousePromotionEntry + 5) & 0x40004) != 0 )
      v13 = 0LL;
    v14 = v13;
  }
  if ( !v13 )
    return 0LL;
  if ( v5 != 0x10000000 || (v5 = DetectPromotionType(v13, v14), v5 != v16) )
  {
    v17 = v5 & 0x20000;
    if ( v14 )
    {
      if ( v17 && *((_DWORD *)v14 + 9) != a2 )
        return 0LL;
      if ( (v5 & 0x1000000) != 0 )
        goto LABEL_22;
      v18 = (*((_DWORD *)v14 + 5) & 0x8000) == 0;
    }
    else
    {
      if ( v17 )
        return 0LL;
      v18 = v10 == word_1C0326B48;
    }
    if ( !v18 )
      return 0LL;
LABEL_22:
    *a3 = v5;
    goto LABEL_23;
  }
  if ( v10 != word_1C0326B48 )
    return 0LL;
  *a3 = v16;
LABEL_23:
  v19 = a5;
  *a4 = v13;
  *v19 = v14;
  return 1LL;
}
