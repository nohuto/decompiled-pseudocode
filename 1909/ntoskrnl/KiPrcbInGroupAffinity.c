/*
 * XREFs of KiPrcbInGroupAffinity @ 0x140015A88
 * Callers:
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400152E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041830 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400FBB28 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetSystemAffinityThread @ 0x1400FC5E0 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400FC790 (KiComputeThreadAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x1401158C0 (KiGroupSchedulingMoveThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
