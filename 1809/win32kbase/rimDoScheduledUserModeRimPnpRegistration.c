/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C004DC30
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(_DWORD *Object)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x40u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  if ( Object[216] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = RIMDiscoverDevicesOfInputType(Object);
  if ( v5 < 0 )
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x41u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x42u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  return (unsigned int)v5;
}
