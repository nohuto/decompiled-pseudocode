/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1405B1640
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpLateUnloadHiveWorker @ 0x1405AFC50 (CmpLateUnloadHiveWorker.c)
 *     CmpDoFlushNextHive @ 0x1405B1330 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     ExpWatchProductTypeWork @ 0x1406BF930 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406BFF90 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x1406FAC08 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407368A0 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0348 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v2);
  else
    CmpLockRegistry(v2);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_140437DA8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v5[1] = qword_140437DA8;
    v5[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140437DA8 = v5;
    qword_140437DA8 = (__int64)v5;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v4);
    else
      CmpLockRegistry(v4);
  }
  return 0LL;
}
