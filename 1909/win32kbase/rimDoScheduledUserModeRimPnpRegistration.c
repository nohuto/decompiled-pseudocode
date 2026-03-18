/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C0055D2C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(_DWORD *Object, __int64 a2, __int64 a3)
{
  int v4; // edx
  int v5; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 64, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  if ( Object[216] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  v5 = RIMDiscoverDevicesOfInputType(Object);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v4, 1, 65, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v4, 1, 66, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  return (unsigned int)v5;
}
