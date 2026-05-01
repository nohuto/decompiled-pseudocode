/*
 * XREFs of ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180421D70
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180416890 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_PreviousExecutionState(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ApplicationExecutionState *a2)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  *(_DWORD *)a2 = *((_DWORD *)this + 19);
  return 0LL;
}
