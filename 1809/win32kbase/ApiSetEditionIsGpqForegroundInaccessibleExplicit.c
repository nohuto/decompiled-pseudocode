/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C0036C4C
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01522F0 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundInaccessibleExplicit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int IsGpqForegroundInaccessibleExplicit; // edi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x114u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  IsGpqForegroundInaccessibleExplicit = 0;
  if ( (int)IsEditionIsGpqForegroundInaccessibleExplicitSupported() >= 0 )
    IsGpqForegroundInaccessibleExplicit = EditionIsGpqForegroundInaccessibleExplicit(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x115u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return IsGpqForegroundInaccessibleExplicit;
}
