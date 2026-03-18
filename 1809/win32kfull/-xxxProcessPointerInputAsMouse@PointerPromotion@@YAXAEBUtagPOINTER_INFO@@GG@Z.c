/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F21AC
 * Callers:
 *     EditionProcessPointerInputAsMouse @ 0x1C01F2750 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F1158 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C01F1228 (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F1314 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F13A0 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01F15F4 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F1C1C (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F1C74 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01F1F1C (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F1F8C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F2390 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        __m128i *this,
        const struct tagPOINTER_INFO *a2,
        __int16 a3)
{
  __m128i v3; // xmm2
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  unsigned __int16 v6; // r12
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned int v12; // eax
  unsigned __int16 v13; // di
  int v14; // r14d
  char v15; // al
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned __int16 v19; // dx
  PointerPromotion *v20; // rcx
  unsigned __int16 v21[8]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v22; // [rsp+30h] [rbp-50h]
  __m128i v23; // [rsp+40h] [rbp-40h]
  __m128i v24; // [rsp+50h] [rbp-30h]
  __m128i v25; // [rsp+60h] [rbp-20h]
  __m128i v26; // [rsp+70h] [rbp-10h]
  unsigned int v27; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *this;
  MousePromotionEntry = 0LL;
  v6 = (unsigned __int16)a2;
  v7 = this[2];
  v22 = this[1];
  v8 = this[3];
  *(__m128i *)v21 = v3;
  v9 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v24 = v8;
  v10 = this[5];
  v23 = v7;
  v11 = this[4];
  v26 = v10;
  v25 = v11;
  if ( (v9 & 0x200000000000LL) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v21) )
      goto LABEL_31;
    LODWORD(v9) = *(_DWORD *)&v21[4];
  }
  v12 = dword_1C03172F8;
  if ( (v21[6] & 0x8000) != 0 )
  {
    v12 = dword_1C03172F8 & 0xFFFFFFF7;
    dword_1C03172F8 &= ~8u;
  }
  v13 = v21[2];
  if ( v21[2] != word_1C03171F0[0] || (a3 & 0x10) != 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      CancelAutoPromotion();
      v12 = dword_1C03172F8;
    }
    dword_1C03172F8 = v12 & 0xFFFFFFF7;
    ResetMousePromotionInfo(v13);
  }
  v14 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v21, a3);
  if ( !v14 )
  {
    MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v21, v6, a3);
    if ( !MousePromotionEntry )
      goto LABEL_31;
    LODWORD(v9) = *(_DWORD *)&v21[4];
    v13 = v21[2];
  }
  qword_1C03172E8 = v22.m128i_i64[1];
  dword_1C03171F4 = v9;
  if ( MousePromotionEntry )
  {
    v15 = dword_1C03172F8;
    if ( (dword_1C03172F8 & 2) != 0 )
    {
      if ( (dword_1C03172F8 & 4) != 0 )
      {
        *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
        v15 = dword_1C03172F8;
      }
      if ( (v15 & 0x10) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) |= 0x40u;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317270, MousePromotionEntry);
      if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
        dword_1C03172F8 &= 0xFFFFFFE9;
      goto LABEL_31;
    }
    QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0317200, MousePromotionEntry);
  }
  if ( v14 || MousePromotionEntry )
  {
    if ( (dword_1C03172F8 & 8) != 0 )
    {
      v16 = DetectPromotionType(0LL, qword_1C0317208);
      if ( v16 == 0x10000000 )
        goto LABEL_31;
      v18 = v16;
      v19 = v9;
      v20 = (PointerPromotion *)v13;
    }
    else
    {
      if ( !(unsigned int)WantDirectPromotion((const struct tagPOINTER_INFO *)v21, &v27) )
        goto LABEL_31;
      v18 = v27;
      v19 = v21[4];
      v20 = (PointerPromotion *)v21[2];
    }
    PointerPromotion::xxxPromotePointer(v20, v19, v18, v17);
  }
LABEL_31:
  xxxProcessMousePromotionQueue();
}
