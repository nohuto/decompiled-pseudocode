/*
 * XREFs of ?InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008DA00 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::InvokingEvtIsrInDxNotArmedForWake(FxWakeInterruptMachine *This)
{
  FxInterrupt::InvokeWakeInterruptEvtIsr(This->m_Interrupt);
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 8LL;
}
