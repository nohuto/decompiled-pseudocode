/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x140764C7C
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  char v0; // di
  unsigned int v1; // ebx

  v0 = 0;
  v1 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.CurrentIrp);
  WheapCrashDumpInitialized = 1;
  if ( WheapTriageDumpGenerated && !WheapTriageDumpReported )
  {
    v0 = 1;
    WheapTriageDumpReported = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.CurrentIrp);
  if ( v0 )
  {
    v1 = WheapWriteTriageDump();
    ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
    WheapTriageDump = 0LL;
    WheapTriageDumpLength = 0;
  }
  return v1;
}
