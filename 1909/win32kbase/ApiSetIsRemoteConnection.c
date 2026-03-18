/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C00579BC
 * Callers:
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0057620 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetIsRemoteConnection()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      94,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  v0 = 0;
  if ( (int)IsIsRemoteConnectionSupported() >= 0 )
    v0 = IsRemoteConnection(v2, v1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      95,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return v0;
}
