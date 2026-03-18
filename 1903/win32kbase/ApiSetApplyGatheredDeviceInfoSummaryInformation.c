/*
 * XREFs of ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1C006D3E4
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C006D2D0 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetApplyGatheredDeviceInfoSummaryInformation(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v9; // esi
  __int64 result; // rax
  int v12; // edx

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      208,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsApplyGatheredDeviceInfoSummaryInformationSupported();
  if ( (int)result >= 0 )
    result = ApplyGatheredDeviceInfoSummaryInformation(a1, v9, a3, a4, a5, a6, a7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v12,
               10,
               209,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
