/*
 * XREFs of ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014464
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0014188 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C007A1FC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014488 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 */

void __fastcall FxIoQueue::CheckTransitionFromEmpty(FxIoQueue *this)
{
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(this);
}
