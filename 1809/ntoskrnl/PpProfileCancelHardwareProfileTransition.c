/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x1408327E4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase2 @ 0x1406FD644 (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x1400C5EA0 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140825FC4 (PnpRequestHwProfileChangeNotification.c)
 */

LONG PpProfileCancelHardwareProfileTransition()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
    {
      _InterlockedDecrement(&PiProfileDevicesInTransition);
      *((_DWORD *)i - 2) = 1;
    }
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( PiProfileChangeCancelRequired )
    PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
