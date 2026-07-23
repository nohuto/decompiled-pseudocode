/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInsertHeadCircularList @ 0x1401353A0 (RtlInsertHeadCircularList.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  PRTL_BALANCED_NODE v4; // rax
  __int64 v5; // rdx
  _KLOCK_ENTRY *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v8[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v8[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v8);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = KeAbPreAcquire(v3, 0LL, 0);
  v6 = (_KLOCK_ENTRY *)v4;
  if ( v4 )
    KeAbPreWait((__int64)v4, v5);
  KeWaitForSingleObject(&v8[1], Executive, 0, 0, 0LL);
  if ( v6 )
  {
    KeAbPreAcquire(v3, &v6->TreeNode, 0);
    KeAbPostReleaseEx(v3, v6);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
