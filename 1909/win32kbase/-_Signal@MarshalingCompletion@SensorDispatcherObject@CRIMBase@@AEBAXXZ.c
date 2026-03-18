/*
 * XREFs of ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0054DB4
 * Callers:
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0054B14 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0054CC4 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(PRKEVENT *this, __int64 a2, __int64 a3)
{
  struct _KEVENT *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = *this;
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
    v4 = *this;
  }
  if ( KeReadStateEvent(v4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  KeSetEvent(*this, 1, 0);
}
