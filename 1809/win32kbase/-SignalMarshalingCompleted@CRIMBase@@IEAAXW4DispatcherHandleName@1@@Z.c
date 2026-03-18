/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0031CD8
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C002F2E0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0086FF0 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  CRIMBase::SensorDispatcherObject::MarshalingCompletion *v5; // rcx

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0xE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)((v3 << 6) + a1 + 168) != (_DWORD)v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (CRIMBase::SensorDispatcherObject::MarshalingCompletion *)((v3 << 6) + a1 + 208);
  if ( *(_QWORD *)v5 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v5);
}
