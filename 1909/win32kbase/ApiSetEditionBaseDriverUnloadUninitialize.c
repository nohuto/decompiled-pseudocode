/*
 * XREFs of ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B34E4
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B2660 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionBaseDriverUnloadUninitialize()
{
  unsigned int v0; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      452,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  v0 = 0;
  if ( (int)IsEditionBaseDriverUnloadUninitializeSupported() >= 0 )
    v0 = EditionBaseDriverUnloadUninitialize();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      453,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v0;
}
