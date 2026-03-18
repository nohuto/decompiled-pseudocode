/*
 * XREFs of ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008DA00
 * Callers:
 *     ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008FBE0 (-InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008FC20 (-InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008FC60 (-InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C008CEF0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008DA54 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this)
{
  WDFINTERRUPT__ *v2; // rcx

  FxInterrupt::AcquireLock(this);
  v2 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v2 = 0LL;
  this->m_WakeInterruptMachine->m_Claimed = this->m_EvtInterruptIsr(v2, this->m_InterruptInfo.MessageNumber);
  FxInterrupt::ReleaseLock(this);
}
