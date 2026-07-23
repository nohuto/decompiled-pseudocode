/*
 * XREFs of CmSaveKey @ 0x140803130
 * Callers:
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14026C634 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14026C6BC (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1407ED3E4 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveStart @ 0x1407ED450 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x1407ED528 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1407ED5B8 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F6014 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpCleanupKeyNodeStack @ 0x1407FABA0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FB2F0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1407FB69C (CmpStartKeyNodeStack.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FDAA8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateTemporaryHive @ 0x140803A40 (CmpCreateTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSubtree @ 0x140806D3C (CmpPromoteSubtree.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v5; // r15
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 v11; // r14
  int v13; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v15; // r9d
  char v16; // [rsp+30h] [rbp-99h]
  unsigned int v18; // [rsp+34h] [rbp-95h] BYREF
  int v19; // [rsp+38h] [rbp-91h]
  PPRIVILEGE_SET v20[4]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int16 v23[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v24; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v21 = a2;
  v19 = a3;
  v22 = a1;
  memset(v20, 0, sizeof(v20));
  WORD1(v20[0]) = -1;
  CmpInitializeKeyNodeStack((char *)v23);
  v18 = -1;
  v5 = 0;
  v16 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v24);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v24);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_17;
      }
      CmpLockRegistry();
      v11 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v20, v11);
      if ( started >= 0 )
      {
        CmpLockKcbStackShared((__int64)v20);
        v6 = 1;
        if ( *(PVOID *)(v11 + 24) == CmpMasterHive )
        {
          started = -1073741790;
          goto LABEL_17;
        }
        CmpTraceHiveSaveStart(v11);
        v16 = 1;
        started = CmpPerformKeyBodyDeletionCheck(v22, 0LL);
        if ( started >= 0 )
        {
          started = CmpStartKeyNodeStack((__int64)v23, *(_WORD *)(v11 + 58) + 1);
          if ( started >= 0 )
          {
            CmpLockKcbStackFlusherLocksExclusive((__int64)v20);
            CmpPopulateKeyNodeStackFromKcbStack((__int64)v23, (__int64)v20, 0LL);
            started = CmpDoAccessCheckOnLayeredSubtree(0LL, 0LL, (__int64)v23, a4, 0x20019u, 3);
            if ( started < 0 )
            {
LABEL_16:
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v20);
              goto LABEL_17;
            }
            v8 = *(_QWORD *)(v11 + 24);
            if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1536) )
            {
              if ( *(_WORD *)(v11 + 58) )
              {
                CmpLogUnsupportedOperation(0x19u);
                started = -1073741822;
                goto LABEL_16;
              }
              v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1632));
              if ( !v7 )
              {
                started = -1073741444;
                goto LABEL_16;
              }
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v20);
              CmpUnlockKcbStack((__int64)v20);
              v6 = 0;
              CmpUnlockRegistry();
              v5 = 0;
              started = CmpSaveKeyByFileCopy(v8);
              if ( started >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v13 = v19;
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v19;
              *(_DWORD *)(v9 + 212) = v13;
              started = CmpCopyMergeOfLayeredKeyNode(v23, v9, 0xFFFFFFFF, 1, 0, &v18);
              if ( started < 0 )
                goto LABEL_16;
              CmpTraceHiveSaveTreeCopied();
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v18;
              EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v23, v23[0]);
              *(_QWORD *)EntryAtLayerHeight = v9;
              *(_DWORD *)(EntryAtLayerHeight + 8) = v15;
              *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(v9 + 8))(
                                                       v9,
                                                       v15,
                                                       EntryAtLayerHeight + 24);
              started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v23);
              if ( started < 0 )
                goto LABEL_16;
              started = CmpPromoteSubtree(0LL, v23);
              if ( started < 0 )
                goto LABEL_16;
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v20);
              CmpCleanupKeyNodeStack((__int64)v23);
              CmpInitializeKeyNodeStack((char *)v23);
              CmpUnlockKcbStack((__int64)v20);
              v6 = 0;
              CmpUnlockRegistry();
              *(_QWORD *)(v9 + 1552) = v21;
              v5 = 0;
              started = HvWriteExternal(v9);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
      }
    }
  }
LABEL_17:
  CmpCleanupKeyNodeStack((__int64)v23);
  if ( v6 )
    CmpUnlockKcbStack((__int64)v20);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1632));
  if ( v20[3] )
    CmSiFreeMemory(v20[3]);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1552) = 0LL;
    CmpDestroyHive((volatile signed __int32 *)v9);
  }
  if ( v16 )
    CmpTraceHiveSaveStop(started);
  return (unsigned int)started;
}
