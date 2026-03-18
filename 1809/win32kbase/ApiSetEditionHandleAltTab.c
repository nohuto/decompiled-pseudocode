/*
 * XREFs of ApiSetEditionHandleAltTab @ 0x1C008CB38
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTab(
        char a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  __int64 result; // rax
  __int64 v13; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x120u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionHandleAltTabSupported();
  if ( (int)result >= 0 )
  {
    LOBYTE(v13) = a1;
    result = EditionHandleAltTab(v13, a2, a3, a4, a5, a6, a7, a8);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x121u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
