/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C000F32C
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C000EE90 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     RIMOpenDev @ 0x1C00F7DB0 (RIMOpenDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetIsRemoteConnection()
{
  if ( (int)IsIsRemoteConnectionSupported() < 0 )
    return 0LL;
  else
    return IsRemoteConnection();
}
