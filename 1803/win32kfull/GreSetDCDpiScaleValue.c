/*
 * XREFs of GreSetDCDpiScaleValue @ 0x1C026E880
 * Callers:
 *     GreScalingDispatchEscape @ 0x1C026E78C (GreScalingDispatchEscape.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C023FEBC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall GreSetDCDpiScaleValue(HDC a1, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DC::vSetDpiScaling(
      v3[0],
      _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a2), (__m128)COERCE_UNSIGNED_INT((float)a2)).m128_i64[0]);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
}
