/*
 * XREFs of CmpDeleteHive @ 0x1405AFDEC
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405A942C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AA470 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1405AA748 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLateUnloadHiveWorker @ 0x1405AFC50 (CmpLateUnloadHiveWorker.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1405D00F0 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x1405D19F8 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceHive @ 0x1406E0CF0 (CmpDereferenceHive.c)
 *     CmpUnfreezeHive @ 0x1407F0634 (CmpUnfreezeHive.c)
 *     CmpBlockHiveWrites @ 0x1407F06A0 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F0754 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1407F08E8 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x1407F09F0 (CmpUnblockTwoHiveWrites.c)
 *     CmpDestroyHive @ 0x1407F6778 (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1407F95A4 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpDeleteKcbCache @ 0x1405AFEA8 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1405AFF14 (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x1405FB668 (CmpReleaseGlobalQuota.c)
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
  CmpReleaseGlobalQuota(4856LL);
  ExFreePoolWithTag(P, 0);
}
