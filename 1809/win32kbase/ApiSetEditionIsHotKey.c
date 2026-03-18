/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C01622DC
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C0151B2C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int IsHotKey; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x126u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  IsHotKey = 0;
  if ( (int)IsEditionIsHotKeySupported() >= 0 )
    IsHotKey = EditionIsHotKey(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x127u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return IsHotKey;
}
