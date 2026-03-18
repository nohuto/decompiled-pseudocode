/*
 * XREFs of ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C001506C
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001531C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008E4F0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00155C4 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 */

void __fastcall FxThreadedEventQueue::QueueToThread(FxThreadedEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx

  if ( FxEventQueue::QueueToThreadWorker(this) )
  {
    m_PkgPnp = this->m_PkgPnp;
    if ( m_PkgPnp->m_HasPowerThread )
      m_PkgPnp->m_PowerThreadInterface.PowerThreadEnqueue(
        m_PkgPnp->m_PowerThreadInterface.Interface.Context,
        &this->m_EventWorkQueueItem);
    else
      IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxThreadedEventQueue::_WorkItemCallback, DelayedWorkQueue, this);
  }
}
