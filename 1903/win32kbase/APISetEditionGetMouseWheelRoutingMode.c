/*
 * XREFs of APISetEditionGetMouseWheelRoutingMode @ 0x1C019AD58
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0190680 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 APISetEditionGetMouseWheelRoutingMode()
{
  unsigned int MouseWheelRoutingMode; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      334,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  MouseWheelRoutingMode = 0;
  if ( (int)IsEditionGetMouseWheelRoutingModeSupported() >= 0 )
    MouseWheelRoutingMode = EditionGetMouseWheelRoutingMode();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      335,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return MouseWheelRoutingMode;
}
