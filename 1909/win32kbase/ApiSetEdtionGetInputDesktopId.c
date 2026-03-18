/*
 * XREFs of ApiSetEdtionGetInputDesktopId @ 0x1C019C7A0
 * Callers:
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C018E994 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C018FCA4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEdtionGetInputDesktopId()
{
  __int64 InputDesktopId; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      338,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  InputDesktopId = 0LL;
  if ( (int)IsEditionGetInputDesktopIdSupported() >= 0 )
    InputDesktopId = EditionGetInputDesktopId();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      339,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return InputDesktopId;
}
