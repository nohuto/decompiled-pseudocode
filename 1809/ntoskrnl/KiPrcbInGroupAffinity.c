/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400D57B4
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2D20 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x1400D6480 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGroupSchedulingMoveThread @ 0x140116D14 (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
