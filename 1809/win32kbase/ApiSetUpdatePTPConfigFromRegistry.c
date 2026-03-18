/*
 * XREFs of ApiSetUpdatePTPConfigFromRegistry @ 0x1C003D888
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C003C8E0 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetUpdatePTPConfigFromRegistry()
{
  unsigned int updated; // ebx

  updated = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE4u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsUpdatePTPConfigFromRegistrySupported() >= 0 )
    updated = UpdatePTPConfigFromRegistry();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE5u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return updated;
}
