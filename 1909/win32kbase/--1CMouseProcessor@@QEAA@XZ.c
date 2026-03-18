/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C00B56F4
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C00B56B0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C00B58E4 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 442) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 427) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3520));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3520));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3272), v4, v5);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
