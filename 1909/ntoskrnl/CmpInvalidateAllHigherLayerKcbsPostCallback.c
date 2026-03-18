/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140832910
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x140749BBC (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  CmpInvalidateSubtree(a1, *(_DWORD *)(a3 + 4), a2, 0LL);
  if ( *(_BYTE *)a3 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, *(unsigned int *)(a3 + 4), a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
