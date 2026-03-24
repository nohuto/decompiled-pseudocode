/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x140117780
 * Callers:
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF640 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E6C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1401156A8 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x140116E38 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1401177D8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401603C8 (KiRemoveThreadFromReadyQueue.c)
 */

char __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
