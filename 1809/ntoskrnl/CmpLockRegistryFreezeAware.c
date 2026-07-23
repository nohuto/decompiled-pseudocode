/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1405B2640
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpLateUnloadHiveWorker @ 0x1405B0C50 (CmpLateUnloadHiveWorker.c)
 *     CmpDoFlushNextHive @ 0x1405B2330 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x1406FBE88 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140737A70 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
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
    if ( *(__int64 **)qword_140438E68 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v5[1] = qword_140438E68;
    v5[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140438E68 = v5;
    qword_140438E68 = (__int64)v5;
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
