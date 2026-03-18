/*
 * XREFs of ApiSetGatherDeviceInfoSummaryInformation @ 0x1C0053944
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C0053A2C (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

_DWORD *__fastcall ApiSetGatherDeviceInfoSummaryInformation(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v9; // rsi
  int v11; // edx
  _DWORD *result; // rax

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      10,
      206,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsGatherDeviceInfoSummaryInformationSupported() < 0 )
  {
    *v9 = 0;
    *a3 = 0;
    *a4 = 0;
    *a5 = 0;
    *a6 = 0;
    result = a7;
    *a7 = 0;
  }
  else
  {
    result = (_DWORD *)GatherDeviceInfoSummaryInformation(a1, v9, a3, a4, a5, a6, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      return (_DWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v11,
                         10,
                         207,
                         (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
