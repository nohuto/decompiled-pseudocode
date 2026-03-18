/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x14076E2D4
 * Callers:
 *     WdipSemCleanStart @ 0x14076E248 (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAllocateTimer @ 0x140176950 (ExAllocateTimer.c)
 *     WdipSemSqmInit @ 0x14076E358 (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    WdipTimeoutTimer = ExAllocateTimer((__int64)WdipTimeoutTimerRoutine, 0LL, 8u);
    if ( WdipTimeoutTimer )
    {
      WdipTimeoutTimerParameters = 0LL;
      qword_140432E28 = -1LL;
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
