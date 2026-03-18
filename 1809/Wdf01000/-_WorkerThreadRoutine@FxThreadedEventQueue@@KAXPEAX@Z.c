/*
 * XREFs of ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C008D930
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008D6D4 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkerThreadRoutine(FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
