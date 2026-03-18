/*
 * XREFs of ApiSetEditionDevicePnpNotification @ 0x1C013DC98
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDevicePnpNotification(__int64 a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x4Au,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionDevicePnpNotificationSupported();
  if ( (int)result >= 0 )
    result = EditionDevicePnpNotification(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x4Bu,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
