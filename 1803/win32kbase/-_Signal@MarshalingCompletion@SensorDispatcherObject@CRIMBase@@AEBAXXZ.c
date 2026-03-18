/*
 * XREFs of ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C012479C
 * Callers:
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C003AED0 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0121FD0 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(PRKEVENT *this, __int64 a2)
{
  struct _KEVENT *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = *this;
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
    v3 = *this;
  }
  if ( KeReadStateEvent(v3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  KeSetEvent(*this, 1, 0);
}
