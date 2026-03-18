/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1402A7988
 * Callers:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     PpmUpdatePerformanceFeedback @ 0x140033D20 (PpmUpdatePerformanceFeedback.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1400C2660 (KiExecuteAllDpcs.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FDA00 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x140100010 (IopQueueIrpToFileObject.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409829F0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140331DF4 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
