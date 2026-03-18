/*
 * XREFs of PpReleaseBootDDB @ 0x140774AF4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SdbReleaseDatabase @ 0x140708CB4 (SdbReleaseDatabase.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  v1 = 0;
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase((__int64)PpDDBHandle);
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
  }
  else
  {
    v1 = -1073741823;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
