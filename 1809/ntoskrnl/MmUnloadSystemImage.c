/*
 * XREFs of MmUnloadSystemImage @ 0x14070EEB0
 * Callers:
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E09C4 (MiSessionUnloadAllImages.c)
 *     IopDeleteDriver @ 0x14070EDD0 (IopDeleteDriver.c)
 *     MiLoadImportDll @ 0x14071B658 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408352B8 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140651A20 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A60 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
