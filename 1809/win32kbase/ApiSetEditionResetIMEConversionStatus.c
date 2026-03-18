/*
 * XREFs of ApiSetEditionResetIMEConversionStatus @ 0x1C0065D70
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0063AA0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionResetIMEConversionStatus(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xF8u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionResetIMEConversionStatusSupported();
  if ( (int)result >= 0 )
    result = EditionResetIMEConversionStatus(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xF9u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
