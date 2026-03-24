/*
 * XREFs of KiInsertDeferredReadyList @ 0x1400ACBC8
 * Callers:
 *     KiWakeQueueWaiter @ 0x1400ACA10 (KiWakeQueueWaiter.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF640 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400D7168 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E6C (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114DA4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1401156A8 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117314 (KiPrepareReadyThreadForRescheduling.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140117370 (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x14029905C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14029D2C8 (KiFlushReadyLists.c)
 * Callees:
 *     KiSetThreadState @ 0x1401B4B8C (KiSetThreadState.c)
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
