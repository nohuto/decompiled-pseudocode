/*
 * XREFs of ApiSetTraceLoggingUserIsActive @ 0x1C009EA98
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0038A30 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetTraceLoggingUserIsActive(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      374,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsTraceLoggingUserIsActiveSupported();
  if ( (int)result >= 0 )
    result = TraceLoggingUserIsActive(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v5,
               10,
               375,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
