/*
 * XREFs of ApiSetDoPrediction @ 0x1C0198D24
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C0156230 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

_QWORD *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v9; // rdi
  int v11; // edx
  _QWORD *result; // rax

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      64,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsDoPredictionSupported() < 0 )
  {
    *a6 = v9;
    result = a7;
    *a7 = a3;
  }
  else
  {
    result = (_QWORD *)DoPrediction(a1, v9, a3, a4, a5, a6, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      return (_QWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v11,
                         10,
                         65,
                         (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
