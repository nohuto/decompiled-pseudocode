/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140291128
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400162E0 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeReleaseSpinLock @ 0x140063070 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     IopQueueIrpToFileObject @ 0x1400B7930 (IopQueueIrpToFileObject.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x1400C6C80 (KiExecuteAllDpcs.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140313D28 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
