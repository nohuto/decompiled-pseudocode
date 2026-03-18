/*
 * XREFs of MmUnloadSystemImage @ 0x1407490E0
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x1407291A0 (MiSessionUnloadAllImages.c)
 *     MiLoadImportDll @ 0x14074604C (MiLoadImportDll.c)
 *     IopDeleteDriver @ 0x140786390 (IopDeleteDriver.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x14086F368 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
