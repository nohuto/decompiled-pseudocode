/*
 * XREFs of ApiSetGetDefaultPTPConfiguration @ 0x1C0163CF8
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00E52E4 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0xE8u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsGetDefaultPTPConfigurationSupported() >= 0 )
    DefaultPTPConfiguration = GetDefaultPTPConfiguration();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE9u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return DefaultPTPConfiguration;
}
