/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407FB1C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, unsigned int *a2)
{
  CmpInvalidateSubtree(a1, *a2, a2[1], 0LL);
  if ( (a2[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
