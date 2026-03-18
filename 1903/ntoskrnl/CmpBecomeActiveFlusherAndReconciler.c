/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC
 * Callers:
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14083C6A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     PoIsInitializedStopWatch @ 0x14008BB20 (PoIsInitializedStopWatch.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpAcquireWriteQueue @ 0x140136218 (CmpAcquireWriteQueue.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082EB74 (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbp
  char v4; // al
  _QWORD *v6; // rdx

  v2 = (volatile signed __int64 *)(a1 + 72);
  v3 = (_QWORD *)(a1 + 4248);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( PoIsInitializedStopWatch(v3) )
    {
      v6 = v3;
      goto LABEL_8;
    }
    if ( !PoIsInitializedStopWatch((_QWORD *)(a1 + 4232)) )
      break;
    v6 = (_QWORD *)(a1 + 4232);
LABEL_8:
    CmpWaitOnHiveWriteQueue(a1, v6);
  }
  CmpAcquireWriteQueue(v3);
  CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
  v4 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return CmpUnlockRegistry();
}
