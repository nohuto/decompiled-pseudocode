/*
 * XREFs of IoInitializeCrashDump @ 0x140771680
 * Callers:
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F476C (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1401931E4 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14019CD58 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140771714 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v3; // di

  if ( ForceDumpDisabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
