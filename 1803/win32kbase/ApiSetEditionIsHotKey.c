/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C013EBC4
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012EFDC (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int IsHotKey; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Eu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  IsHotKey = 0;
  if ( (int)IsEditionIsHotKeySupported() >= 0 )
    IsHotKey = EditionIsHotKey(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Fu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return IsHotKey;
}
