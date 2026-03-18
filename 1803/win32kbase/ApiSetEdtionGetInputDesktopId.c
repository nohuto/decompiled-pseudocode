/*
 * XREFs of ApiSetEdtionGetInputDesktopId @ 0x1C0140608
 * Callers:
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0134258 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0134D64 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEdtionGetInputDesktopId()
{
  __int64 InputDesktopId; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB6u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  InputDesktopId = 0LL;
  if ( (int)IsEditionGetInputDesktopIdSupported() >= 0 )
    InputDesktopId = EditionGetInputDesktopId();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xB7u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return InputDesktopId;
}
