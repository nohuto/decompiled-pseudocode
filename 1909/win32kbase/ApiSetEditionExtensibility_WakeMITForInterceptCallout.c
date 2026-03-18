/*
 * XREFs of ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x1C0199BC4
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C018FCD8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionExtensibility_WakeMITForInterceptCallout()
{
  unsigned int v0; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      340,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  v0 = 0;
  if ( (int)IsEditionExtensibility_WakeMITForInterceptCalloutSupported() >= 0 )
    v0 = EditionExtensibility_WakeMITForInterceptCallout();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      341,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v0;
}
