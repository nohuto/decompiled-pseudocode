/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C006E7E0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C0132744 (--0CBaseProcessor@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ApiSetEditionGetExecutionEvironment()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int ExecutionEvironment; // ebx

  if ( (int)IsEditionGetExecutionEvironmentSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
  ExecutionEvironment = EditionGetExecutionEvironment();
  if ( !ExecutionEvironment )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  return ExecutionEvironment;
}
