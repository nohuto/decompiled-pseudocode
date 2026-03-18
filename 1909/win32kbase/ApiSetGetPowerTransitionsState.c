/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00A540C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0153610 (rimApplyPointerDevicePolicies.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C0155C8C (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      88,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  memset(a1, 0, 0x3CuLL);
  result = IsGetPowerTransitionsStateSupported();
  if ( (int)result >= 0 )
    result = GetPowerTransitionsState(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               89,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
