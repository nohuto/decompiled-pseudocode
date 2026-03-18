/*
 * XREFs of ApiSetPointerPromotionGetCurrentPointerId @ 0x1C014110C
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01116B8 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetPointerPromotionGetCurrentPointerId()
{
  unsigned __int16 CurrentPointerId; // bx

  CurrentPointerId = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x72u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsPointerPromotionGetCurrentPointerIdSupported() >= 0 )
    CurrentPointerId = PointerPromotionGetCurrentPointerId();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x73u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return CurrentPointerId;
}
