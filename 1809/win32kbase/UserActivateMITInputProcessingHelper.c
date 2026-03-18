/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C0152D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0152C48 (-InitializeInputSensors@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  unsigned int v4; // ebx
  int v5; // edi

  v3 = WPP_GLOBAL_Control;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x17u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  if ( !WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expected for IOCPDispatcher to be created by the time we get here");
  v5 = InitializeInputSensors((__int64)v3, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x18u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  LOBYTE(v4) = v5 >= 0;
  return v4;
}
