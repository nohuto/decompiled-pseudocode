/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01CD70C
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01CD160 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01CDC04 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00BA4F4 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int64 *v2; // rax
  __int16 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // xmm1_8

  if ( word_1C0326B40 )
  {
    if ( word_1C0326C20 )
    {
      if ( word_1C0326BA8 == word_1C0326C20 )
      {
        v2 = (__int64 *)qword_1C0326BB0;
        if ( qword_1C0326BB0 )
        {
          while ( v2 != (__int64 *)qword_1C0326BB8 )
          {
            if ( *((_DWORD *)v2 + 8) == dword_1C0326C24 )
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
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BB0);
    v3 = &word_1C0326BA8;
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
    unk_1C0326B50 = 0LL;
  }
  word_1C0326B40 = a1;
  word_1C0326B48[0] = a1;
}
