/*
 * XREFs of ApiSetSend3FingerTapHotkey @ 0x1C0164B48
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetSend3FingerTapHotkey()
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xCCu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsSend3FingerTapHotkeySupported();
  if ( (int)result >= 0 )
    result = Send3FingerTapHotkey();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xCDu,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
