/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x14086D1F0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14071838C (PipProcessStartPhase2.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x14009C4C0 (KeAcquireGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     PiProfileSendHardwareProfileCancel @ 0x14086CE20 (PiProfileSendHardwareProfileCancel.c)
 */

LONG PpProfileCancelHardwareProfileTransition()
{
  __int64 *i; // rax

  KeAcquireGuardedMutex(&PiProfileDeviceListLock);
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
    PiProfileSendHardwareProfileCancel();
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
