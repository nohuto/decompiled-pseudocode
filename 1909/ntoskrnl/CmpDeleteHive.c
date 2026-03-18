/*
 * XREFs of CmpDeleteHive @ 0x1406B97A0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByKcb @ 0x140635780 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetNextHive @ 0x14063AF48 (CmpGetNextHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063DA9C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140661CE4 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpDereferenceHive @ 0x1406B9778 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406F6518 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1406F676C (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406F6A78 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F6B14 (CmpBlockTwoHiveWrites.c)
 *     CmpQuitNextHive @ 0x140729768 (CmpQuitNextHive.c)
 *     CmpUnfreezeHive @ 0x14082A540 (CmpUnfreezeHive.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408320B8 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x1406321D4 (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x1406B985C (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1406B98C8 (HvFreeDirtyData.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  v1 = P + 200;
  if ( (_QWORD *)*v1 != v1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v5 = (void *)P[230];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[232];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  CmpReleaseGlobalQuota(0x12E8u);
  ExFreePoolWithTag(P, 0);
}
