/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0207F4C
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C02078B8 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0208498 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00DAF70 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207820 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int64 *v2; // rax
  __int16 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // xmm1_8

  if ( word_1C032C220 )
  {
    if ( word_1C032C300 )
    {
      if ( word_1C032C288 == word_1C032C300 )
      {
        v2 = (__int64 *)qword_1C032C290;
        if ( qword_1C032C290 )
        {
          while ( v2 != (__int64 *)qword_1C032C298 )
          {
            if ( *((_DWORD *)v2 + 8) == dword_1C032C304 )
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
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C290);
    v3 = &word_1C032C288;
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
    unk_1C032C230 = 0LL;
  }
  word_1C032C220 = a1;
  word_1C032C228[0] = a1;
}
