/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400D5734
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiComputeThreadAffinity @ 0x14008A430 (KiComputeThreadAffinity.c)
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2CA0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x1400D6400 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x14011547C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1401156A8 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGroupSchedulingMoveThread @ 0x140116CA4 (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE4C (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
