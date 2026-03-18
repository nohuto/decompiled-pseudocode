/*
 * XREFs of CmpLoadKeyCommon @ 0x1400ED16C
 * Callers:
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpJoinClassOfTrust @ 0x14018206C (CmpJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmRmFinalizeRecovery @ 0x14068BDE4 (CmRmFinalizeRecovery.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     LockShutdownShared @ 0x14068C7D8 (LockShutdownShared.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpLockHiveListExclusive @ 0x14068CCDC (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14068CCFC (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14068CD1C (UnlockShutdown.c)
 *     CmpTrimHive @ 0x14068CD48 (CmpTrimHive.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1406F1E30 (CmpSetGlobalQuotaAllowed.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x140747928 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x14089D5BC (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        char *P,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // edi
  ULONG_PTR v20; // rdi
  ULONG_PTR *v21; // r15
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR *v29; // [rsp+68h] [rbp-41h]
  PRKEVENT Event; // [rsp+70h] [rbp-39h]
  _BYTE v31[48]; // [rsp+78h] [rbp-31h] BYREF

  Event = a6;
  v29 = a8;
  memset(v31, 0, sizeof(v31));
  *((_DWORD *)P + 40) |= 0x20u;
  v14 = 0LL;
  BugCheckParameter2 = 0LL;
  *((_QWORD *)P + 526) = KeGetCurrentThread();
  if ( (a3 & 0x10) != 0 )
  {
    v15 = *((_DWORD *)P + 1038) | 0x20;
    *((_DWORD *)P + 1038) = v15;
    if ( (a3 & 0x20) != 0 )
      *((_DWORD *)P + 1038) = v15 | 0x40;
  }
  *((_DWORD *)P + 1038) |= 1u;
  LockShutdownShared();
  LOCK_HIVE_LOAD();
  LOBYTE(v16) = 1;
  CmpLockRegistryFreezeAware(v16);
  if ( a4 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v19 = -1073741444;
LABEL_36:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ObDrainDeferredObjectDeletion();
      CmpAttachToRegistryProcess(v31);
      CmpDestroyHive(P);
      CmpDetachFromRegistryProcess(v31);
      goto LABEL_21;
    }
    LOBYTE(v27) = a7;
    v19 = CmpJoinClassOfTrust(P, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v27);
    if ( v19 < 0 )
      goto LABEL_36;
    v19 = CmpVEAddHiveToSIDMappingTable(P, a2);
    if ( v19 < 0 )
      goto LABEL_36;
  }
  if ( !a5 )
    goto LABEL_6;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a5, 0LL) )
  {
    v19 = (*(_BYTE *)(a5 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_36;
  }
  v14 = *(_QWORD *)(a5 + 8);
  if ( (*(_DWORD *)(v14 + 184) & 0x40000) == 0 )
  {
    v19 = -1073741811;
    goto LABEL_36;
  }
LABEL_6:
  CmpUnlockRegistry();
  LOBYTE(v17) = a9;
  v19 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          (int)P,
          v17,
          512,
          (a3 & 0x10) != 0,
          Event,
          a2[4],
          v14,
          (__int64)&BugCheckParameter2,
          0);
  if ( v19 < 0 )
  {
    LOBYTE(v18) = 1;
    CmpLockRegistryFreezeAware(v18);
    goto LABEL_36;
  }
  v20 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v21 = v29;
    *v29 = v20;
  }
  else
  {
    v21 = v29;
  }
  LOBYTE(v18) = 1;
  CmpLockRegistryFreezeAware(v18);
  if ( (a3 & 0x10) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(*((_QWORD *)P + 366));
    *v21 = *((_QWORD *)P + 366);
  }
  CmpLockHiveListExclusive();
  v22 = (_QWORD *)qword_1409AE898;
  v23 = P + 1600;
  if ( *(__int64 **)qword_1409AE898 != &CmpHiveListHead )
    __fastfail(3u);
  *v23 = &CmpHiveListHead;
  *((_QWORD *)P + 201) = v22;
  *v22 = v23;
  qword_1409AE898 = (__int64)(P + 1600);
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v31);
  CmpRecheckHiveVolumePolicy(P);
  CmpDetachFromRegistryProcess(v31);
  CmpDereferenceKeyControlBlockUnsafe(v20);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v24) = a10;
    CmpInitCmRM(P, v24);
    *((_DWORD *)P + 1038) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v31);
    CmpFlushHive((ULONG_PTR)P);
    CmpDetachFromRegistryProcess(v31);
  }
  if ( (a3 & 0x10) == 0 )
    CmpAddToHiveFileList(P);
  v25 = *((_QWORD *)P + 524);
  if ( v25 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v25 + 56), CmKtmNotification, *((PVOID *)P + 524));
    CmRmFinalizeRecovery(*((_QWORD *)P + 524));
  }
  CmpTrimHive(P);
  LOCK_HIVE_LOAD();
  *((_DWORD *)P + 40) &= ~0x20u;
  *((_QWORD *)P + 526) = 0LL;
  UNLOCK_HIVE_LOAD();
  v19 = 0;
LABEL_21:
  UnlockShutdown();
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return (unsigned int)v19;
}
