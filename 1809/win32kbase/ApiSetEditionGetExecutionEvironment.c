/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C0094930
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0006300 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00065BC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ApiSetEditionGetExecutionEvironment()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int ExecutionEvironment; // ebx
  __int64 v3; // r8

  if ( (int)IsEditionGetExecutionEvironmentSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Must be implemented");
  ExecutionEvironment = EditionGetExecutionEvironment();
  if ( !ExecutionEvironment )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  return ExecutionEvironment;
}
