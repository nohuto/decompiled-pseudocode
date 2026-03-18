/*
 * XREFs of ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008C3C0
 * Callers:
 *     ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008E430 (-InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008E470 (-InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008E4B0 (-InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C008B900 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008C414 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  WDFINTERRUPT__ *v3; // rcx

  FxInterrupt::AcquireLock(this, a2);
  v3 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v3 = 0LL;
  this->m_WakeInterruptMachine->m_Claimed = this->m_EvtInterruptIsr(v3, this->m_InterruptInfo.MessageNumber);
  FxInterrupt::ReleaseLock(this);
}
