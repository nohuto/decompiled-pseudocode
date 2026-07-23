/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x1406E25B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405820C4 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 64), 0);
    CmpMarkKeyUnbacked(a1);
    CmpDiscardKcb(a1);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1);
  ++a2[1];
  return 0LL;
}
