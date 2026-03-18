/*
 * XREFs of CiNdisCleanupThrottle @ 0x1C000C7D0
 * Callers:
 *     CsTerminate @ 0x1C000C3C0 (CsTerminate.c)
 * Callees:
 *     CiAcquireThreadCountLock @ 0x1C000C76C (CiAcquireThreadCountLock.c)
 *     CiReleaseThreadCountLock @ 0x1C000C7A0 (CiReleaseThreadCountLock.c)
 */

void CiNdisCleanupThrottle()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  if ( CiNdisThrottleWorkItem )
  {
    CiAcquireThreadCountLock();
    v0 = CiNdisThrottleInProgress;
    CiReleaseThreadCountLock();
    if ( v0 )
    {
      ExBlockOnAddressPushLock(&CiNdisThrottleInProgressPushLock, &CiNdisThrottleInProgress, &v0, 1LL, 0LL);
      CiAcquireThreadCountLock();
      CiReleaseThreadCountLock();
    }
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    CiNdisThrottleWorkItem = 0LL;
    if ( CiNdisDeviceHandle )
    {
      ZwClose(CiNdisDeviceHandle);
      CiNdisDeviceHandle = 0LL;
    }
  }
}
