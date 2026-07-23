/*
 * XREFs of MmUnloadSystemImage @ 0x140710150
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E1C64 (MiSessionUnloadAllImages.c)
 *     IopDeleteDriver @ 0x140710070 (IopDeleteDriver.c)
 *     MiLoadImportDll @ 0x14071C8F8 (MiLoadImportDll.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140836518 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(__int64 BugCheckParameter2)
{
  struct _KTHREAD *Lock; // rbx

  Lock = MmAcquireLoadLock();
  MiUnloadSystemImage(BugCheckParameter2, -1);
  MmReleaseLoadLock((__int64)Lock);
  return 0LL;
}
