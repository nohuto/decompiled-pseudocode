/*
 * XREFs of ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008F7F4
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008F3D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008D698 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
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
