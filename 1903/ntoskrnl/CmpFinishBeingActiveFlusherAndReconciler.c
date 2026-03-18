/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140757AB8
 * Callers:
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14083C6A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406E9484 (CmpWakeWriteQueueWaiters.c)
 */

char __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  struct _KEVENT *v2; // rbp
  struct _KEVENT *v3; // r14
  char v4; // al

  CmpLockRegistry();
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  v2 = *(struct _KEVENT **)(a1 + 4240);
  *(_QWORD *)(a1 + 4240) = 0LL;
  *(_QWORD *)(a1 + 4232) = 0LL;
  v3 = *(struct _KEVENT **)(a1 + 4256);
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4248) = 0LL;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(a1 + 4232, v2, -1073741823);
  return CmpWakeWriteQueueWaiters(a1 + 4248, v3, -1073741823);
}
