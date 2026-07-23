/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x140737640
 * Callers:
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpWakeWriteQueueWaiters @ 0x1405B5D38 (CmpWakeWriteQueueWaiters.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpReleaseWriteQueue @ 0x1406C8CE0 (CmpReleaseWriteQueue.c)
 */

LONG __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rcx
  struct _KEVENT *v4; // rsi
  __int64 v5; // rcx
  struct _KEVENT *v6; // rbx
  char v7; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(a1 + 72);
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  *(_DWORD *)(a1 + 4280) &= 0xFFFFFFFC;
  v4 = (struct _KEVENT *)CmpReleaseWriteQueue(v3, a1 + 4232);
  v6 = (struct _KEVENT *)CmpReleaseWriteQueue(v5, a1 + 4256);
  v7 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  CmpWakeWriteQueueWaiters(v4, -1073741823);
  return CmpWakeWriteQueueWaiters(v6, -1073741823);
}
