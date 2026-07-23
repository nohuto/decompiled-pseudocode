/*
 * XREFs of ExQueueDebuggerWorker @ 0x14018D0F0
 * Callers:
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
