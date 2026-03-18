/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1402A76E8
 * Callers:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     PpmUpdatePerformanceFeedback @ 0x140034110 (PpmUpdatePerformanceFeedback.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1400A24E0 (KiExecuteAllDpcs.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FFB90 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x1401046B0 (IopQueueIrpToFileObject.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409829F0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140331854 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
