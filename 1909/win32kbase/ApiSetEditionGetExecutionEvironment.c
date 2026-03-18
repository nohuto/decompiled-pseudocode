/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C00A6090
 * Callers:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C005DD98 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005DDE0 (--0CSpatialProcessor@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ApiSetEditionGetExecutionEvironment()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int ExecutionEvironment; // ebx
  __int64 v6; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      196,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsEditionGetExecutionEvironmentSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  ExecutionEvironment = EditionGetExecutionEvironment();
  if ( !ExecutionEvironment )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      197,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return ExecutionEvironment;
}
