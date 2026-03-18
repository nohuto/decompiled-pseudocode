/*
 * XREFs of MmUnloadSystemImage @ 0x1407471E0
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x140727E30 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x14074414C (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x140784030 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x14086FC68 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
