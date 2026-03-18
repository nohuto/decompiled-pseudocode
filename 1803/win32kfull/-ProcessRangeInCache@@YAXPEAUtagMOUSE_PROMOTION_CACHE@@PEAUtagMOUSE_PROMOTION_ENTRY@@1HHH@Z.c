/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01CD3CC
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01CD4BC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CCC98 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01CCDA4 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01CCF68 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C01CD7C0 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_ENTRY **v6; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v14; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v15[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1 + 1;
  ClearMousePromotionQueueUntil(a1 + 1, a2);
  *(_OWORD *)v15 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v15, a2, a3);
  v10 = v15[1];
  v11 = v15[0];
  if ( a4 )
  {
    *((_QWORD *)v15[1] + 1) = *((_QWORD *)v15[0] + 1);
    while ( 1 )
    {
      v12 = *(struct tagMOUSE_PROMOTION_ENTRY **)v11;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v11 == v10 )
        break;
      *(_QWORD *)v11 = *(_QWORD *)v12;
      Win32FreePool(v12);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v11; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
    {
      if ( a5 )
        *((_DWORD *)i + 11) &= ~1u;
      if ( a6 )
        *((_DWORD *)i + 11) |= 0x40u;
    }
  }
  if ( word_1C0326C20 )
  {
    v14 = v11;
    v11 = *(struct tagMOUSE_PROMOTION_ENTRY **)v11;
    Win32FreePool(v14);
    ResetPendingPromotion();
  }
  if ( v11 )
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0, v11, v10);
}
