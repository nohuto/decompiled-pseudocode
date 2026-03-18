/*
 * XREFs of CmpDeleteHive @ 0x1406629D0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063AA0C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x14064EB24 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpDereferenceHive @ 0x1406629A8 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C6B20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406F47A8 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1406F49FC (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406F4D08 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F4DA4 (CmpBlockTwoHiveWrites.c)
 *     CmpQuitNextHive @ 0x1407283F8 (CmpQuitNextHive.c)
 *     CmpUnfreezeHive @ 0x14082AE40 (CmpUnfreezeHive.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140832A58 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x14062E354 (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x140662A8C (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x140662AF8 (HvFreeDirtyData.c)
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
