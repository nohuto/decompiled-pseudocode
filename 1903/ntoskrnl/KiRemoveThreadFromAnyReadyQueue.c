/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400E4F6C
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400F8088 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400E4FB8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400E8D10 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14015B7B0 (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496));
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
