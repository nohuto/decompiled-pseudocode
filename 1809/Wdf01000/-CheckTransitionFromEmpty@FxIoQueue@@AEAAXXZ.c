/*
 * XREFs of ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C00145F4
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C001430C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0014584 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079948 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014618 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 */

void __fastcall FxIoQueue::CheckTransitionFromEmpty(FxIoQueue *this)
{
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(this);
}
