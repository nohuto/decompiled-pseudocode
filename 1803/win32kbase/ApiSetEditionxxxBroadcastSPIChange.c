/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1C0140574
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionxxxBroadcastSPIChange(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x12Cu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionxxxBroadcastSPIChangeSupported();
  if ( (int)result >= 0 )
    result = EditionxxxBroadcastSPIChange(a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x12Du,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
