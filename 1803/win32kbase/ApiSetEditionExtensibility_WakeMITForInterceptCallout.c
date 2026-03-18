/*
 * XREFs of ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x1C013E0B4
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0134D98 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionExtensibility_WakeMITForInterceptCallout()
{
  unsigned int v0; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB8u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionExtensibility_WakeMITForInterceptCalloutSupported() < 0
    || (v0 = 1, !(unsigned int)EditionExtensibility_WakeMITForInterceptCallout()) )
  {
    v0 = 0;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB9u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v0;
}
