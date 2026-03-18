/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x1C00405B8
 * Callers:
 *     UpdateAsyncKeyState @ 0x1C00403C0 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C0188414 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      424,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  result = IsEditionPostUpdateKeyStateEventSupported();
  if ( (int)result >= 0 )
    result = EditionPostUpdateKeyStateEvent(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               425,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return result;
}
