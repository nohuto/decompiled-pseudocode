/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x140744710
 * Callers:
 *     WdipSemCleanStart @ 0x140744684 (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExAllocateTimer @ 0x14016BA20 (ExAllocateTimer.c)
 *     WdipSemSqmInit @ 0x14074479C (WdipSemSqmInit.c)
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
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      qword_14040B7A8 = -1LL;
      WdipTimeoutTimerParameters = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
