/*
 * XREFs of ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C0165260
 * Callers:
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C014B448 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetTraceLoggingPTPAAPKeyPress(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE0u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsTraceLoggingPTPAAPKeyPressSupported();
  if ( (int)result >= 0 )
    result = TraceLoggingPTPAAPKeyPress(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xE1u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
