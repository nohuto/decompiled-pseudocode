/*
 * XREFs of ExQueueDebuggerWorker @ 0x140192A68
 * Callers:
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
