/*
 * XREFs of CmSaveKey @ 0x14083AA9C
 * Callers:
 *     NtSaveKeyEx @ 0x140824940 (NtSaveKeyEx.c)
 *     CmDumpKey @ 0x140839D60 (CmDumpKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14027FC74 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F93E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1408263F0 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveStart @ 0x14082645C (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x140826534 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1408265C4 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpCleanupKeyNodeStack @ 0x1408324B0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackEntryPopulate @ 0x14083297C (CmpKeyNodeStackEntryPopulate.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140832A90 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140832E98 (CmpStartKeyNodeStack.c)
 *     HvWriteExternal @ 0x140833788 (HvWriteExternal.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateTemporaryHive @ 0x14083B318 (CmpCreateTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14083BD00 (CmpSaveKeyByFileCopy.c)
 *     CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14083DC74 (CmpFullPromoteHiveRootFromKeyNodeStack.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  char v5; // si
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  int started; // ebx
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // r15
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  int v18; // ecx
  __int64 EntryAtLayerHeight; // rax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+30h] [rbp-99h]
  unsigned int v26; // [rsp+34h] [rbp-95h] BYREF
  int v27; // [rsp+38h] [rbp-91h]
  _WORD v28[16]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h]
  __int64 v30; // [rsp+68h] [rbp-61h]
  unsigned __int16 v31[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v32; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v27 = a3;
  v29 = a2;
  v30 = a1;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  *(_QWORD *)&v32.Data1 = 0LL;
  *(_QWORD *)v32.Data4 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset(v28, 0, sizeof(v28));
  v28[1] = -1;
  CmpInitializeKeyNodeStack((char *)v31);
  v26 = -1;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v32);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v32);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_17;
      }
      CmpLockRegistry();
      v14 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v28, v14, v15, v16);
      if ( started >= 0 )
      {
        CmpLockKcbStackShared((__int64)v28);
        v6 = 1;
        if ( *(PVOID *)(v14 + 32) == CmpMasterHive )
        {
          started = -1073741790;
          goto LABEL_17;
        }
        CmpTraceHiveSaveStart(v14);
        v24 = 1;
        started = CmpPerformKeyBodyDeletionCheck(v30, 0LL);
        if ( started >= 0 )
        {
          started = CmpStartKeyNodeStack((__int64)v31, *(_WORD *)(v14 + 66) + 1, v12, v13);
          if ( started >= 0 )
          {
            CmpLockKcbStackFlusherLocksExclusive((__int64)v28);
            CmpPopulateKeyNodeStackFromKcbStack((__int64)v31, (__int64)v28);
            started = CmpDoAccessCheckOnLayeredSubtree(0LL, 0LL, (__int64)v31, a4, 0x20019u, 3);
            if ( started < 0 )
            {
LABEL_16:
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v28);
              goto LABEL_17;
            }
            v8 = *(_QWORD *)(v14 + 32);
            if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1536) )
            {
              if ( *(_WORD *)(v14 + 66) )
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
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v28);
              CmpUnlockKcbStack((__int64)v28);
              v6 = 0;
              CmpUnlockRegistry();
              v5 = 0;
              started = CmpSaveKeyByFileCopy(v8);
              if ( started >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v18 = v27;
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v27;
              *(_DWORD *)(v9 + 212) = v18;
              started = CmpCopyMergeOfLayeredKeyNode(v31, v9, 0xFFFFFFFF, 1, 0, &v26);
              if ( started < 0 )
                goto LABEL_16;
              CmpTraceHiveSaveTreeCopied();
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v26;
              EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v31, v31[0]);
              CmpKeyNodeStackEntryPopulate(EntryAtLayerHeight, v9, v20);
              started = CmpFullPromoteHiveRootFromKeyNodeStack(v31);
              if ( started < 0 )
                goto LABEL_16;
              started = CmpPromoteSubtree(0LL, v31);
              if ( started < 0 )
                goto LABEL_16;
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)v28);
              CmpCleanupKeyNodeStack((__int64)v31, v21, v22, v23);
              CmpInitializeKeyNodeStack((char *)v31);
              CmpUnlockKcbStack((__int64)v28);
              v6 = 0;
              CmpUnlockRegistry();
              *(_QWORD *)(v9 + 1552) = v29;
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
  CmpCleanupKeyNodeStack((__int64)v31, v10, v12, (__int64)v13);
  if ( v6 )
    CmpUnlockKcbStack((__int64)v28);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1632));
  CmpCleanupKcbStack((__int64)v28);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1552) = 0LL;
    CmpDestroyHive((volatile signed __int32 *)v9);
  }
  if ( v24 )
    CmpTraceHiveSaveStop(started);
  return (unsigned int)started;
}
