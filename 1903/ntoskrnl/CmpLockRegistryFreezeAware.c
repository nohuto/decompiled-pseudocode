/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140662030
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x140661D20 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x14069A0B0 (CmpStartRMLogs.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
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
    if ( *(__int64 **)qword_1404639E8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v3[0] + 1) = qword_1404639E8;
    *(_QWORD *)&v3[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_1404639E8 = v3;
    qword_1404639E8 = (__int64)v3;
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
