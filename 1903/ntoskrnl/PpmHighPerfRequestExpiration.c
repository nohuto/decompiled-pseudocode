/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x140181D20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 */

void PpmHighPerfRequestExpiration()
{
  KIRQL v0; // di
  unsigned int i; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)PpmHighPerfDeferredEndTime )
  {
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
    PpmHighPerfDeferredEndCount = 0;
  }
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v0);
}
