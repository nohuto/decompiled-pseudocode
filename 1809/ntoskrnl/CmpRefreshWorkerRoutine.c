/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x140803260
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1405AA6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AA8A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AD310 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 24) != a2 || (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, 1);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  return 2LL;
}
