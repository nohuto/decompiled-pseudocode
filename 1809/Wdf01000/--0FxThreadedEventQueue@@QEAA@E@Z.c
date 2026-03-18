/*
 * XREFs of ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008D698
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00815E8 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008E2AC (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008F7F4 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 * Callees:
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C008D654 (--0FxEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxThreadedEventQueue::FxThreadedEventQueue(FxThreadedEventQueue *this, unsigned __int8 QueueDepth)
{
  FxEventQueue::FxEventQueue(this, QueueDepth);
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_EventWorkQueueItem.WorkerRoutine = FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_EventWorkQueueItem.Parameter = this;
}
