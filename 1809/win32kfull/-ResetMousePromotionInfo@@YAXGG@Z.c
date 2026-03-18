/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F1C74
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01F15F4 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F21AC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00EB7BC (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F155C (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int64 *v2; // rax
  __int16 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // xmm1_8

  if ( word_1C03171F0 )
  {
    if ( word_1C03172D0 )
    {
      if ( word_1C0317258 == word_1C03172D0 )
      {
        v2 = (__int64 *)qword_1C0317260;
        if ( qword_1C0317260 )
        {
          while ( v2 != (__int64 *)qword_1C0317268 )
          {
            if ( *((_DWORD *)v2 + 8) == dword_1C03172D4 )
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
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0317260);
    v3 = &word_1C0317258;
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
    unk_1C0317200 = 0LL;
  }
  word_1C03171F0 = a1;
  word_1C03171F8[0] = a1;
}
