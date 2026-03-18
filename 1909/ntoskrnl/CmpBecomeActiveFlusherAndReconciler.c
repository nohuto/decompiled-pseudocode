/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14075C790
 * Callers:
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14083BD00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     PoIsInitializedStopWatch @ 0x14008CE20 (PoIsInitializedStopWatch.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     CmpAcquireWriteQueue @ 0x140136BB8 (CmpAcquireWriteQueue.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082E9E4 (CmpWaitOnHiveWriteQueue.c)
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
