/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x14086C8F0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14071A17C (PipProcessStartPhase2.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     PiProfileSendHardwareProfileCancel @ 0x14086C520 (PiProfileSendHardwareProfileCancel.c)
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
