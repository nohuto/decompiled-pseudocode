/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140638760
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x140638450 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x1406BBDE8 (CmpStartRMLogs.c)
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406E5920 (NtFlushKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  _OWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v3, 0, 0x28uLL);
  KeInitializeEvent((PRKEVENT)&v3[1], SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent((PRKEVENT)&v3[1]);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_1404636C8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v3[0] + 1) = qword_1404636C8;
    *(_QWORD *)&v3[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_1404636C8 = v3;
    qword_1404636C8 = (__int64)v3;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&v3[1], Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
  }
  return 0LL;
}
