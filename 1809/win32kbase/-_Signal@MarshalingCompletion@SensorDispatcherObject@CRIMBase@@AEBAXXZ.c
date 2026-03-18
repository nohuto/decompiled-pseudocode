/*
 * XREFs of ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0086FF0
 * Callers:
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0031CD8 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0086F00 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(PRKEVENT *this)
{
  struct _KEVENT *v2; // rcx

  v2 = *this;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here if event does not exist");
    v2 = *this;
  }
  if ( KeReadStateEvent(v2) )
    MicrosoftTelemetryAssertTriggeredMsgKM("State is SIGNALED. This is unexpected and indicates potential RACE condition");
  KeSetEvent(*this, 1, 0);
}
