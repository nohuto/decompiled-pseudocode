/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0208498
 * Callers:
 *     EditionProcessPointerInputAsMouse @ 0x1C0208A00 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C020741C (-CancelAutoPromotion@@YAXXZ.c)
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C02074EC (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C02075D8 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0207664 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C02078B8 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C0207E24 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0207EF4 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0207F4C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C02081F4 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0208264 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02086A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        __m128i *this,
        const struct tagPOINTER_INFO *a2,
        __int16 a3)
{
  __m128i v3; // xmm2
  unsigned __int16 v4; // r12
  __m128i v6; // xmm1
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  int v10; // esi
  unsigned __int16 v11; // ax
  bool v12; // cf
  unsigned int v13; // eax
  unsigned __int16 v14; // di
  int v15; // r14d
  char v16; // al
  unsigned int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned __int16 v20; // dx
  PointerPromotion *v21; // rcx
  unsigned __int16 v22[8]; // [rsp+30h] [rbp-29h] BYREF
  __m128i v23; // [rsp+40h] [rbp-19h]
  __m128i v24; // [rsp+50h] [rbp-9h]
  __m128i v25; // [rsp+60h] [rbp+7h]
  __m128i v26; // [rsp+70h] [rbp+17h]
  __m128i v27; // [rsp+80h] [rbp+27h]
  unsigned int v28; // [rsp+C0h] [rbp+67h] BYREF

  v3 = *this;
  v4 = (unsigned __int16)a2;
  v6 = this[2];
  MousePromotionEntry = 0LL;
  v23 = this[1];
  v8 = this[3];
  v24 = v6;
  v9 = this[4];
  v25 = v8;
  v27 = this[5];
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  *(__m128i *)v22 = v3;
  v26 = v9;
  InputTraceLogging::Pointer::PromoteToMouse(v10, v3.m128i_i16[2]);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 12));
  if ( (v11 & 0x2000) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v22) )
      goto LABEL_31;
    v11 = v22[6];
    v10 = *(_DWORD *)&v22[4];
  }
  v12 = (v11 & 0x8000) != 0;
  v13 = dword_1C032C328;
  if ( v12 )
  {
    v13 = dword_1C032C328 & 0xFFFFFFF7;
    dword_1C032C328 &= ~8u;
  }
  v14 = v22[2];
  if ( v22[2] != word_1C032C220[0] || (a3 & 0x10) != 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      CancelAutoPromotion();
      v13 = dword_1C032C328;
    }
    dword_1C032C328 = v13 & 0xFFFFFFF7;
    ResetMousePromotionInfo(v14);
  }
  v15 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v22, a3);
  if ( !v15 )
  {
    MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v22, v4, a3);
    if ( !MousePromotionEntry )
      goto LABEL_31;
    v10 = *(_DWORD *)&v22[4];
    v14 = v22[2];
  }
  qword_1C032C318 = v23.m128i_i64[1];
  dword_1C032C224 = v10;
  if ( MousePromotionEntry )
  {
    v16 = dword_1C032C328;
    if ( (dword_1C032C328 & 2) != 0 )
    {
      if ( (dword_1C032C328 & 4) != 0 )
      {
        *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
        v16 = dword_1C032C328;
      }
      if ( (v16 & 0x10) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) |= 0x40u;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C2A0, MousePromotionEntry);
      if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
        dword_1C032C328 &= 0xFFFFFFE9;
      goto LABEL_31;
    }
    QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C032C230, MousePromotionEntry);
  }
  if ( v15 || MousePromotionEntry )
  {
    if ( (dword_1C032C328 & 8) != 0 )
    {
      v17 = DetectPromotionType(0LL, qword_1C032C238);
      if ( v17 == 0x10000000 )
        goto LABEL_31;
      v19 = v17;
      v20 = v10;
      v21 = (PointerPromotion *)v14;
    }
    else
    {
      if ( !(unsigned int)WantDirectPromotion((const struct tagPOINTER_INFO *)v22, &v28) )
        goto LABEL_31;
      v19 = v28;
      v20 = v22[4];
      v21 = (PointerPromotion *)v22[2];
    }
    PointerPromotion::xxxPromotePointer(v21, v20, v19, v18);
  }
LABEL_31:
  xxxProcessMousePromotionQueue();
}
