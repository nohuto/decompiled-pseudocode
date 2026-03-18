/*
 * XREFs of ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C009105C
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0090B80 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008EE38 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(
        FxDevicePwrRequirementMachine *this,
        FxPoxInterface *PoxInterface)
{
  __int64 m_HistoryIndex; // r8

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)PoxInterface);
  this->m_CurrentState = 1;
  memset(this->m_Queue, 0, 0x28uLL);
  m_HistoryIndex = this->m_HistoryIndex;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = this->m_CurrentState;
  this->m_PoxInterface = PoxInterface;
}
