/*
 * XREFs of ApiSetGetDefaultPTPConfiguration @ 0x1C01406A0
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00AABAC (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetDefaultPTPConfiguration()
{
  __int64 DefaultPTPConfiguration; // rbx

  DefaultPTPConfiguration = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE0u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsGetDefaultPTPConfigurationSupported() >= 0 )
    DefaultPTPConfiguration = GetDefaultPTPConfiguration();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE1u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return DefaultPTPConfiguration;
}
