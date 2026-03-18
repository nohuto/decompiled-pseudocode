/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C0187120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0186FE0 (-InitializeInputSensors@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edi

  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        23,
        (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
    }
  }
  if ( !gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = InitializeInputSensors((__int64)a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      2,
      24,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  LOBYTE(v3) = v5 >= 0;
  return v3;
}
