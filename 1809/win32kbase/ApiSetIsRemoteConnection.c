/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C00503D8
 * Callers:
 *     RIMOpenDev @ 0x1C0049C08 (RIMOpenDev.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0050190 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C01256D8 (rimDoVirtRimDevChange.c)
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
