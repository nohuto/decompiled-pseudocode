/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C0130E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0130BA4 (-InitializeInputSensors@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT v2; // rcx
  unsigned int v3; // ebx
  int v4; // edi

  v2 = WPP_GLOBAL_Control;
  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x17u,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  if ( !gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, a2);
  v4 = InitializeInputSensors((__int64)v2, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x18u,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  LOBYTE(v3) = v4 >= 0;
  return v3;
}
