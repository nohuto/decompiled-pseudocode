/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1400E4D24
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400F8088 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x140014060 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
    KiSetPriorityBoost(0LL, (_BYTE *)a1, 15, *(_QWORD *)(a1 + 72));
  return KiInsertDeferredReadyList(a3, a1);
}
