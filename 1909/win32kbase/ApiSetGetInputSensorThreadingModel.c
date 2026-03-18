/*
 * XREFs of ApiSetGetInputSensorThreadingModel @ 0x1C00A901C
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetGetInputSensorThreadingModel(unsigned int a1)
{
  unsigned int InputSensorThreadingModel; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      194,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  InputSensorThreadingModel = 0;
  if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  if ( (int)IsGetInputSensorThreadingModelSupported() >= 0 )
    InputSensorThreadingModel = GetInputSensorThreadingModel(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      195,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return InputSensorThreadingModel;
}
