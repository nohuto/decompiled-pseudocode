/*
 * XREFs of ApiSetUpdatePTPConfigFromRegistry @ 0x1C0012FA4
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0012D10 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetUpdatePTPConfigFromRegistry()
{
  unsigned int updated; // ebx

  updated = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      220,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsUpdatePTPConfigFromRegistrySupported() >= 0 )
    updated = UpdatePTPConfigFromRegistry();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      221,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return updated;
}
