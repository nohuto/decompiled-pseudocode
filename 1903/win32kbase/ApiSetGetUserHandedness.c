/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C019F6E4
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C013AF10 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C013AFEC (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C015AAA4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C015C3FC (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C015C7C8 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetUserHandedness()
{
  unsigned int UserHandedness; // ebx
  __int64 v1; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      96,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  UserHandedness = 1;
  if ( (int)IsGetUserHandednessSupported() >= 0 )
    UserHandedness = GetUserHandedness(v1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      97,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return UserHandedness;
}
