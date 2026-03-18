/*
 * XREFs of ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C0141B64
 * Callers:
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C0125AD0 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetTraceLoggingPTPAAPKeyPress(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xD8u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsTraceLoggingPTPAAPKeyPressSupported();
  if ( (int)result >= 0 )
    result = TraceLoggingPTPAAPKeyPress(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xD9u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
