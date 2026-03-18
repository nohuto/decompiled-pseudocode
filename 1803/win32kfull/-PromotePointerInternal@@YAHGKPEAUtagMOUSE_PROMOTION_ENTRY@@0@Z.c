/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01CD4BC
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01CDDE8 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00BA4F4 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01CCFF0 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01CD30C (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01CD3CC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C01CD7F8 (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r15d
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // edx
  BOOL v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v17; // r15
  unsigned int v18; // eax
  int v20; // [rsp+30h] [rbp-58h]
  BOOL v21; // [rsp+34h] [rbp-54h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+3Ch] [rbp-4Ch]
  struct tagMOUSE_PROMOTION_ENTRY **v24; // [rsp+40h] [rbp-48h]
  unsigned int v27; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a2;
  CacheById = FindCacheById(a1, &v27);
  v8 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  v24 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C0326C48 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C0326B48
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C0326C48 &= ~8u;
  }
  v9 = *((_DWORD *)a3 + 4);
  v10 = v27;
  v22 = v4 & 2;
  v11 = v22 != 0;
  v20 = v4 & 0x80000;
  v23 = v4 & 0x20000;
  v12 = (v4 >> 25) & 1;
  v21 = (v4 & 0x20000) != 0;
  if ( (v4 & 0x40000) != 0 )
    v13 = ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C0326C00, v27, v9, (v4 & 2) != 0);
  else
    v13 = 0;
  if ( v13 )
    *((_QWORD *)a3 + 1) = qword_1C0326C0C;
  v14 = *((_QWORD *)a3 + 1);
  v15 = v10 + 1;
  if ( (unsigned int)v15 < 5 )
  {
    v16 = (unsigned int)(5 - v15);
    v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0326B50 + 24 * v15);
    do
    {
      EmptyMousePromotionQueue(v17);
      v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v17 + 24);
      --v16;
    }
    while ( v16 );
    v8 = v24;
    v4 = a2;
  }
  if ( v20 )
  {
    ProcessDownOnly(v8, a3, v11, v12);
  }
  else
  {
    ProcessRangeInCache(v8, a3, a4, v21, v11, v12);
    if ( !a4 )
    {
      if ( v22 )
        v18 = dword_1C0326C48 | 4;
      else
        v18 = dword_1C0326C48 & 0xFFFFFFFB;
      dword_1C0326C48 = v18 & 0xFFFFFFEF | (16 * v12) | 2;
    }
  }
  if ( v23 )
  {
    word_1C0326C08 = a1;
    qword_1C0326C00 = gptiCurrent;
    qword_1C0326C0C = v14;
    dword_1C0326C14 = v9;
    dword_1C0326C18 = v22 != 0;
  }
  else if ( v4 )
  {
    memset(&qword_1C0326C00, 0, 0x20uLL);
  }
  return 1LL;
}
