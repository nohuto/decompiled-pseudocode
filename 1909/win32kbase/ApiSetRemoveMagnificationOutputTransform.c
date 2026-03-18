/*
 * XREFs of ApiSetRemoveMagnificationOutputTransform @ 0x1C00880F8
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetRemoveMagnificationOutputTransform(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      204,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsRemoveMagnificationOutputTransformSupported();
  if ( (int)result >= 0 )
    result = RemoveMagnificationOutputTransform(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               205,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
