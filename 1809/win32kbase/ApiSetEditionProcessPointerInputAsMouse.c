/*
 * XREFs of ApiSetEditionProcessPointerInputAsMouse @ 0x1C01631D4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionProcessPointerInputAsMouse(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x7Au,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionProcessPointerInputAsMouseSupported();
  if ( (int)result >= 0 )
    result = EditionProcessPointerInputAsMouse(a1, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x7Bu,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
