/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x1407293E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpCleanUpSubKeyInfo @ 0x140634F00 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, *((_QWORD *)a2 + 1), 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  ++a2[1];
  return 0LL;
}
