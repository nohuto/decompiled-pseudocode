/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x14098E3E0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x14059B590 (BgkResumePrepare.c)
 *     BgkResumeFinished @ 0x14059D98C (BgkResumeFinished.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14046B780, 0LL);
  if ( !--dword_140467FA0 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14046B780, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14046B780);
  KeAbPostRelease((ULONG_PTR)&qword_14046B780);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
