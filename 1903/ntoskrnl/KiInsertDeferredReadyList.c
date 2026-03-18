/*
 * XREFs of KiInsertDeferredReadyList @ 0x14000D220
 * Callers:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E4D24 (KiPrepareReadyThreadForRescheduling.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400E927C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400F8088 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x1402B5D4C (KiFlushReadyLists.c)
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
