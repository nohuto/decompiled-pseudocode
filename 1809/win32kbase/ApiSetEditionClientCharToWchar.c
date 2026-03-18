/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1C0161114
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0065320 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v4; // bx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x12Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v4 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
    v4 = EditionClientCharToWchar(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x12Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v4;
}
