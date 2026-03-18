/*
 * XREFs of ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0012F2C
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C0012E94 (UpdateMouseConnectionState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      226,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsIsMouseDeviceOnIgnoreListSupported() >= 0 )
    v2 = IsMouseDeviceOnIgnoreList(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      227,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v2;
}
