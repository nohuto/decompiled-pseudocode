/*
 * XREFs of ApiSetIsMouseDeviceOnIgnoreList @ 0x1C00A4430
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C0068114 (UpdateMouseConnectionState.c)
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      370,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  if ( (int)IsIsMouseDeviceOnIgnoreListSupported() >= 0 )
    v2 = IsMouseDeviceOnIgnoreList(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      371,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v2;
}
