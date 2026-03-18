/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x140117760
 * Callers:
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115688 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x140116E18 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1401177B8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401603A8 (KiRemoveThreadFromReadyQueue.c)
 */

char __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
