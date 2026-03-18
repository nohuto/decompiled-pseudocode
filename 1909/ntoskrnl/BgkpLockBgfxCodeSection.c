/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1409906D0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x14059B590 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140A4135C (BgkInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14046B780, 0LL);
  v1 = dword_140467FA0;
  if ( !dword_140467FA0 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140467FA0;
  }
  dword_140467FA0 = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14046B780, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14046B780);
  KeAbPostRelease((ULONG_PTR)&qword_14046B780);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
