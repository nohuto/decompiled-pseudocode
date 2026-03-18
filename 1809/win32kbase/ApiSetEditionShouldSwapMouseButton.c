/*
 * XREFs of ApiSetEditionShouldSwapMouseButton @ 0x1C006FE08
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C006FDD4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetEditionShouldSwapMouseButton(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  PDEVICE_OBJECT v5; // rcx
  unsigned int ShouldSwapMouseButton; // edi

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB6u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  if ( ((v3 - 1) & v3) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect only ONE value to be set right now: At this point are must be dealing with single button action!");
  ShouldSwapMouseButton = 0;
  if ( (int)IsEditionShouldSwapMouseButtonSupported() >= 0 )
    ShouldSwapMouseButton = EditionShouldSwapMouseButton(a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB7u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return ShouldSwapMouseButton;
}
