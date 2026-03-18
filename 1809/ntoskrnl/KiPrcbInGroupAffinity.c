/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400D5714
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiComputeThreadAffinity @ 0x14008A430 (KiComputeThreadAffinity.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2C80 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x1400D63E0 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115688 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGroupSchedulingMoveThread @ 0x140116C84 (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE2C (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
