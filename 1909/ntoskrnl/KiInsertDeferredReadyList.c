/*
 * XREFs of KiInsertDeferredReadyList @ 0x14000D450
 * Callers:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E9CC4 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400FBB28 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140115EEC (KiMoveScbThreadsToNewReadylist.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x1402B5AAC (KiFlushReadyLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 116) |= 2u;
  *(_BYTE *)(a2 + 388) = 7;
  v2 = (__int64 *)(a2 + 216);
  result = *a1;
  *v2 = *a1;
  *a1 = (__int64)v2;
  return result;
}
