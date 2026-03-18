/*
 * XREFs of ApiSetEditionShouldSwapMouseButton @ 0x1C00656F8
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00656C4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetEditionShouldSwapMouseButton(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT v4; // rcx
  unsigned int ShouldSwapMouseButton; // edi

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xAEu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  if ( ((v2 - 1) & v2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  ShouldSwapMouseButton = 0;
  if ( (int)IsEditionShouldSwapMouseButtonSupported() >= 0 )
    ShouldSwapMouseButton = EditionShouldSwapMouseButton(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xAFu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return ShouldSwapMouseButton;
}
