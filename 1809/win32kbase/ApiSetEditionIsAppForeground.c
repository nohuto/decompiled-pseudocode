/*
 * XREFs of ApiSetEditionIsAppForeground @ 0x1C01620D0
 * Callers:
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C006F968 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsAppForeground(__int64 a1)
{
  unsigned int IsAppForeground; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x28u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  IsAppForeground = 0;
  if ( (int)IsEditionIsAppForegroundSupported() >= 0 )
    IsAppForeground = EditionIsAppForeground(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x29u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return IsAppForeground;
}
