/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C019ED14
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015AC70 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  int v7; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      84,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsSetUserPTPEnabledPreferenceSupported();
  if ( (int)result >= 0 )
    result = SetUserPTPEnabledPreference(a1, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v7,
               10,
               85,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
