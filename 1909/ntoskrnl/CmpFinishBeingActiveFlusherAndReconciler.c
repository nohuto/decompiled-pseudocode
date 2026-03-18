/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x14075C34C
 * Callers:
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14083BD00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406EA8A4 (CmpWakeWriteQueueWaiters.c)
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
