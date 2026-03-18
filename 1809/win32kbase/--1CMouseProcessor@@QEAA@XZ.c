/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C0005E54
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0005DA0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C000660C (--1CBaseProcessor@@QEAA@XZ.c)
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C000786C (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_QWORD *)this + 359) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 2856));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 2856));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2552));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this);
}
