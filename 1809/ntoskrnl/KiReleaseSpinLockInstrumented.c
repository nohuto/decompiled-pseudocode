/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140290F38
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400162E0 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeReleaseSpinLock @ 0x140063080 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     IopQueueIrpToFileObject @ 0x1400B79F0 (IopQueueIrpToFileObject.c)
 *     IopDequeueIrpFromThread @ 0x1400B8EF0 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x1400BC380 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x1400C6D40 (KiExecuteAllDpcs.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140313B38 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
