/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1400E9CC4
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400FBB28 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x140014290 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
    KiSetPriorityBoost(0LL, (_BYTE *)a1, 15, *(_QWORD *)(a1 + 72));
  return KiInsertDeferredReadyList(a3, a1);
}
