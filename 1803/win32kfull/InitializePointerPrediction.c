/*
 * XREFs of InitializePointerPrediction @ 0x1C01137C0
 * Callers:
 *     <none>
 * Callees:
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InitializePointerPrediction(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  glTOUCH_DRIVER_HW_STACK_LATENCY = 0;
  glTOUCH_DRIVER_HW_STACK_SAMPLETIME = 0;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = 0;
  v5[0] = 0LL;
  v5[1] = 0LL;
  result = gliQpcFreq;
  if ( gliQpcFreq )
  {
    result = ReadPointerDeviceSettings(156, (__int64)v5, a3, a4);
    if ( (_DWORD)result )
    {
      gPredictorRLSLambdaMin = 3865470464LL;
      gPredictorRLSLambdaMax = 4290672384LL;
      result = 4252017664LL;
      gPredictorRLSExpoSmoothAlpha = 4252017664LL;
      gPredictorRLSDelta = 4294968LL;
      gPredictorRLSLambdaLearningRate = 4294968LL;
    }
  }
  return result;
}
