/*
 * XREFs of rimDestroyDeadzone @ 0x1C0114B6C
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C01182A8 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0118A5C (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C012DEF4 (-Release@RIMDeadzone@@QEAAXXZ.c)
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
  qword_1C01D0C28 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
