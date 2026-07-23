/*
 * XREFs of CmpLoadKeyCommon @ 0x140010994
 * Callers:
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpJoinClassOfTrust @ 0x1401B32D0 (CmpJoinClassOfTrust.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x1405817F0 (CmpVEAddHiveToSIDMappingTable.c)
 *     LockShutdownShared @ 0x1405B0FB0 (LockShutdownShared.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpTrimHive @ 0x1405B1000 (CmpTrimHive.c)
 *     UnlockShutdown @ 0x1405B10CC (UnlockShutdown.c)
 *     CmpLockHiveListExclusive @ 0x1405B10F8 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1405B1118 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1406CE220 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1406D2008 (CmpSetGlobalQuotaAllowed.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x14086256C (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        ULONG_PTR BugCheckParameter2,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        __int64 *a8,
        char a9,
        char a10)
{
  __int64 v10; // r14
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // [rsp+60h] [rbp-88h] BYREF
  PRKEVENT Event; // [rsp+68h] [rbp-80h]
  _BYTE v30[48]; // [rsp+70h] [rbp-78h] BYREF

  v10 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 160) |= 0x20u;
  v28 = 0LL;
  Event = a6;
  *(_QWORD *)(BugCheckParameter2 + 4208) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(BugCheckParameter2 + 4152) | 0x20;
    *(_DWORD *)(BugCheckParameter2 + 4152) = v16;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(BugCheckParameter2 + 4152) = v16 | 0x40;
  }
  *(_DWORD *)(BugCheckParameter2 + 4152) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v17) = 1;
  CmpLockRegistryFreezeAware(v17);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v19 = -1073741444;
LABEL_17:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ObDrainDeferredObjectDeletion();
      CmpAttachToRegistryProcess(v30);
      CmpDestroyHive((PVOID)BugCheckParameter2);
      CmpDetachFromRegistryProcess(v30);
      goto LABEL_33;
    }
    LOBYTE(v18) = a7;
    v19 = CmpJoinClassOfTrust(BugCheckParameter2, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL), v18);
    if ( v19 < 0 )
      goto LABEL_17;
    v19 = CmpVEAddHiveToSIDMappingTable(BugCheckParameter2, a2);
    if ( v19 < 0 )
      goto LABEL_17;
  }
  if ( a5 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a5, 0LL) )
    {
      v19 = (*(_BYTE *)(a5 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_17;
    }
    v10 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v10 + 176) & 0x40000) == 0 )
    {
      v19 = -1073741811;
      goto LABEL_17;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v20) = a9;
  v19 = CmpLinkHiveToMaster(a2[2], a2[1], BugCheckParameter2, v20, 512, v15 != 0, Event, a2[4], v10, (__int64)&v28, 0);
  if ( v19 < 0 )
  {
    LOBYTE(v21) = 1;
    CmpLockRegistryFreezeAware(v21);
    goto LABEL_17;
  }
  v22 = v28;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(v28);
    *a8 = v22;
  }
  LOBYTE(v21) = 1;
  CmpLockRegistryFreezeAware(v21);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(BugCheckParameter2 + 2928));
    *a8 = *(_QWORD *)(BugCheckParameter2 + 2928);
  }
  CmpLockHiveListExclusive();
  v23 = (_QWORD *)qword_14096F7D0;
  v24 = (_QWORD *)(BugCheckParameter2 + 1600);
  if ( *(__int64 **)qword_14096F7D0 != &CmpHiveListHead )
    __fastfail(3u);
  *v24 = &CmpHiveListHead;
  *(_QWORD *)(BugCheckParameter2 + 1608) = v23;
  *v23 = v24;
  qword_14096F7D0 = BugCheckParameter2 + 1600;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v30);
  CmpRecheckHiveVolumePolicy(BugCheckParameter2);
  CmpDetachFromRegistryProcess(v30);
  CmpDereferenceKeyControlBlockUnsafe(v22);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v25) = a10;
    CmpInitCmRM(BugCheckParameter2, v25);
    *(_DWORD *)(BugCheckParameter2 + 4152) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v30);
    CmpFlushHive(BugCheckParameter2);
    CmpDetachFromRegistryProcess(v30);
  }
  if ( !v15 )
    CmpAddToHiveFileList(BugCheckParameter2);
  v26 = *(_QWORD *)(BugCheckParameter2 + 4192);
  if ( v26 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v26 + 56), CmKtmNotification, *(PVOID *)(BugCheckParameter2 + 4192));
    CmRmFinalizeRecovery(*(_QWORD *)(BugCheckParameter2 + 4192));
  }
  CmpTrimHive(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x20u;
  *(_QWORD *)(BugCheckParameter2 + 4208) = 0LL;
  UNLOCK_HIVE_LOAD();
  v19 = 0;
LABEL_33:
  UnlockShutdown();
  if ( !BYTE5(NlsMbCodePageTag) && !CmpWasSetupBoot )
  {
    BYTE5(NlsMbCodePageTag) = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v19;
}
