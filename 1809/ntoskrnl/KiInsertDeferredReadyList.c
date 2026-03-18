/*
 * XREFs of KiInsertDeferredReadyList @ 0x1400ACBA8
 * Callers:
 *     KiWakeQueueWaiter @ 0x1400AC9F0 (KiWakeQueueWaiter.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0000 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400D7148 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115688 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1401172F4 (KiPrepareReadyThreadForRescheduling.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140117350 (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CC9C (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14029D1C8 (KiFlushReadyLists.c)
 * Callees:
 *     KiSetThreadState @ 0x1401B4B6C (KiSetThreadState.c)
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 a1, __int64 a2)
{
  __int64 *v2; // r10
  __int64 result; // rax
  __int64 v4; // r9

  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 116) |= 2u;
  KiSetThreadState(a2, 7LL);
  result = *v2;
  *(_QWORD *)(v4 + 216) = *v2;
  *v2 = v4 + 216;
  return result;
}
