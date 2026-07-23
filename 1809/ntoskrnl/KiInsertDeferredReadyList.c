/*
 * XREFs of KiInsertDeferredReadyList @ 0x1400ACB08
 * Callers:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114E14 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1401173E0 (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14029D4B8 (KiFlushReadyLists.c)
 * Callees:
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
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
