/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C019F048
 * Callers:
 *     RIMApplyTransforms @ 0x1C01438A0 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0144920 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  int v7; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      104,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v6 = 0;
  if ( (int)IsTransformForInputMagnificationSupported() >= 0 )
    v6 = TransformForInputMagnification(a1, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      105,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v6;
}
