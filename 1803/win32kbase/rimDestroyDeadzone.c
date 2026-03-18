/*
 * XREFs of rimDestroyDeadzone @ 0x1C00E9F80
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C00ECF30 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00ED6B4 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01061E8 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void rimDestroyDeadzone()
{
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool((__int64)RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C01A5F00 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
