/*
 * XREFs of MmUnloadSystemImage @ 0x14070EED0
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E09E4 (MiSessionUnloadAllImages.c)
 *     IopDeleteDriver @ 0x14070EDF0 (IopDeleteDriver.c)
 *     MiLoadImportDll @ 0x14071B678 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1408352D8 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140651A40 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A80 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
