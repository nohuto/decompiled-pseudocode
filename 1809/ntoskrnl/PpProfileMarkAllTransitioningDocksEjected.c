/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x140833D58
 * Callers:
 *     PnpProcessCompletedEject @ 0x140829480 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 */

void PpProfileMarkAllTransitioningDocksEjected()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
      *((_DWORD *)i - 2) = 4;
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
}
