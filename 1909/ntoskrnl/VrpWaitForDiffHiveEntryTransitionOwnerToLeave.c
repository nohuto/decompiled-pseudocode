/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140846E48
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140846830 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     RtlInsertHeadCircularList @ 0x140135AF8 (RtlInsertHeadCircularList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  PRTL_BALANCED_NODE v4; // rax
  _KLOCK_ENTRY *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v7[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v7[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v7);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = KeAbPreAcquire(v3, 0LL, 0);
  v5 = (_KLOCK_ENTRY *)v4;
  if ( v4 )
    KeAbPreWait((__int64)v4);
  KeWaitForSingleObject(&v7[1], Executive, 0, 0, 0LL);
  if ( v5 )
  {
    KeAbPreAcquire(v3, &v5->TreeNode, 0);
    KeAbPostReleaseEx(v3, v5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
