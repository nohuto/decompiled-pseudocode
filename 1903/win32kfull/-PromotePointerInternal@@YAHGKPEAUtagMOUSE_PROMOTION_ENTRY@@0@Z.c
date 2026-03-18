/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0207C24
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207820 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02086A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00DAF70 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0207748 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C0207A64 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0207B28 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C0208038 (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r13d
  __int16 v7; // r12
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v9; // rsi
  unsigned int v10; // edx
  BOOL v11; // r15d
  int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v17; // r12
  unsigned int v18; // eax
  int v20; // [rsp+30h] [rbp-48h]
  BOOL v21; // [rsp+34h] [rbp-44h]
  int v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  v7 = a1;
  CacheById = FindCacheById(a1, &v26);
  v9 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C032C328 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C032C228
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C032C328 &= ~8u;
  }
  v10 = v26;
  v22 = v4 & 2;
  v11 = v22 != 0;
  v20 = v4 & 0x80000;
  v23 = v4 & 0x20000;
  v12 = (v4 >> 25) & 1;
  v21 = (v4 & 0x20000) != 0;
  if ( (v4 & 0x40000) != 0 )
    v13 = ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C032C2E0, v26, *((_DWORD *)a3 + 4), (v4 & 2) != 0);
  else
    v13 = 0;
  if ( v13 )
    *((_QWORD *)a3 + 1) = qword_1C032C2EC;
  v14 = v10 + 1;
  v15 = *((_QWORD *)a3 + 1);
  v26 = *((_DWORD *)a3 + 4);
  if ( (unsigned int)v14 < 5 )
  {
    v16 = (unsigned int)(5 - v14);
    v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C032C230 + 24 * v14);
    do
    {
      EmptyMousePromotionQueue(v17);
      v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v17 + 24);
      --v16;
    }
    while ( v16 );
    v4 = a2;
    v7 = a1;
  }
  if ( v20 )
  {
    ProcessDownOnly(v9, a3, v11, v12);
  }
  else
  {
    ProcessRangeInCache(v9, a3, a4, v21, v11, v12);
    if ( !a4 )
    {
      if ( v22 )
        v18 = dword_1C032C328 | 4;
      else
        v18 = dword_1C032C328 & 0xFFFFFFFB;
      dword_1C032C328 = v18 & 0xFFFFFFEF | (16 * v12) | 2;
    }
  }
  if ( v23 )
  {
    qword_1C032C2E0 = gptiCurrent;
    dword_1C032C2F4 = v26;
    word_1C032C2E8 = v7;
    qword_1C032C2EC = v15;
    dword_1C032C2F8 = v22 != 0;
  }
  else if ( v4 )
  {
    memset(&qword_1C032C2E0, 0, 0x20uLL);
  }
  return 1LL;
}
