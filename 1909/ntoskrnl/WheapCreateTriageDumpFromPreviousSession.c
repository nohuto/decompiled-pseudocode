/*
 * XREFs of WheapCreateTriageDumpFromPreviousSession @ 0x1405AF0BC
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x1403401A0 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WheapCreateLiveTriageDump @ 0x14091A270 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 */

__int64 WheapCreateTriageDumpFromPreviousSession()
{
  char v0; // di
  int LiveTriageDump; // ebx

  v0 = 0;
  if ( _InterlockedIncrement(&WheapTriageDumpCreation) <= 1 )
  {
    LiveTriageDump = WheapCreateLiveTriageDump();
    if ( LiveTriageDump >= 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
      WheapTriageDumpGenerated = 1;
      if ( WheapCrashDumpInitialized )
      {
        v0 = 1;
        WheapTriageDumpReported = 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
      if ( v0 )
      {
        LiveTriageDump = WheapWriteTriageDump();
        ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
        WheapTriageDump = 0LL;
        WheapTriageDumpLength = 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)LiveTriageDump;
}
