/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x140737A70
 * Callers:
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1407F033C (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F6F8C (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  int v3; // eax
  char v4; // al
  __int64 v6; // rdx

  v2 = (volatile signed __int64 *)(a1 + 72);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    v3 = *(_DWORD *)(a1 + 4280);
    if ( (v3 & 2) != 0 )
    {
      v6 = a1 + 4256;
      goto LABEL_8;
    }
    if ( (v3 & 1) == 0 )
      break;
    v6 = a1 + 4232;
LABEL_8:
    CmpWaitOnHiveWriteQueue(a1, v6, 0LL);
  }
  *(_DWORD *)(a1 + 4280) = v3 | 3;
  *(_QWORD *)(a1 + 4232) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 4256) = KeGetCurrentThread();
  v4 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return CmpUnlockRegistry();
}
