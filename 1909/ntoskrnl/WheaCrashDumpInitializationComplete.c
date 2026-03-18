/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x14078C8EC
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WheapWriteTriageDump @ 0x14091A4DC (WheapWriteTriageDump.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  char v0; // di
  unsigned int v1; // ebx

  v0 = 0;
  v1 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
  WheapCrashDumpInitialized = 1;
  if ( WheapTriageDumpGenerated && !WheapTriageDumpReported )
  {
    v0 = 1;
    WheapTriageDumpReported = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
  if ( v0 )
  {
    v1 = WheapWriteTriageDump();
    ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
    WheapTriageDump = 0LL;
    WheapTriageDumpLength = 0;
  }
  return v1;
}
