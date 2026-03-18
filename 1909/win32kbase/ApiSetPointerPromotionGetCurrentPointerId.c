/*
 * XREFs of ApiSetPointerPromotionGetCurrentPointerId @ 0x1C019DD8C
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C0164674 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetPointerPromotionGetCurrentPointerId()
{
  unsigned __int16 CurrentPointerId; // bx

  CurrentPointerId = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      240,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsPointerPromotionGetCurrentPointerIdSupported() >= 0 )
    CurrentPointerId = PointerPromotionGetCurrentPointerId();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      241,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return CurrentPointerId;
}
