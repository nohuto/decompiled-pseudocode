/*
 * XREFs of ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C008C598
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00040A0 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 * Callees:
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0058E94 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008E4F0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

unsigned __int8 __fastcall FxInterrupt::WakeInterruptIsr(FxInterrupt *this)
{
  FxWakeInterruptMachine **p_m_WakeInterruptMachine; // rdi
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v5; // rbx

  p_m_WakeInterruptMachine = &this->m_WakeInterruptMachine;
  FxWakeInterruptMachine::ProcessEvent(this->m_WakeInterruptMachine, WakeInterruptEventIsr);
  m_ObjectSize = this->m_ObjectSize;
  m_Globals = this->m_Globals;
  v5 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  _FX_DRIVER_GLOBALS::WaitForSignal(
    m_Globals,
    &(*p_m_WakeInterruptMachine)->m_IsrEvent,
    "Wake Interrupt ISR is stuck waiting for the deviceto power back up and driver calllback to be processed",
    v5,
    m_Globals->DbgWaitForWakeInterruptIsrTimeoutInSec,
    3);
  return (*p_m_WakeInterruptMachine)->m_Claimed;
}
