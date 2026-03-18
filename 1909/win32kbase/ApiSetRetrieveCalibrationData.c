/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x1C019E350
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rbx
  __int64 result; // rax
  int v5; // edx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      10,
      78,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsRetrieveCalibrationDataSupported();
  if ( (int)result >= 0 )
  {
    v6 = *v2;
    result = RetrieveCalibrationData(a1, &v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v5,
               10,
               79,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
