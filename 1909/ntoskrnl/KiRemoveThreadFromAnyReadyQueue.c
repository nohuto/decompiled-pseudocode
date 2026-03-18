/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400E9F0C
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400FBB28 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400E9F58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x140115980 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14015BE50 (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496));
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
