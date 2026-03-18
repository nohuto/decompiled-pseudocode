/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0207C9C
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C0207608 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02081E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C007AC60 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207570 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int64 *v2; // rax
  __int16 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // xmm1_8

  if ( word_1C032A210 )
  {
    if ( word_1C032A2F0 )
    {
      if ( word_1C032A278 == word_1C032A2F0 )
      {
        v2 = (__int64 *)qword_1C032A280;
        if ( qword_1C032A280 )
        {
          while ( v2 != (__int64 *)qword_1C032A288 )
          {
            if ( *((_DWORD *)v2 + 8) == dword_1C032A2F4 )
            {
              ForceCompletePendingPromotion();
              break;
            }
            v2 = (__int64 *)*v2;
            if ( !v2 )
              break;
          }
        }
      }
    }
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032A280);
    v3 = &word_1C032A278;
    v4 = 4LL;
    do
    {
      v5 = *((_QWORD *)v3 - 1);
      *(_OWORD *)v3 = *(_OWORD *)(v3 - 12);
      *((_QWORD *)v3 + 2) = v5;
      v3 -= 12;
      --v4;
    }
    while ( v4 );
    unk_1C032A220 = 0LL;
  }
  word_1C032A210 = a1;
  word_1C032A218[0] = a1;
}
