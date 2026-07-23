/*
 * XREFs of CmSaveMergedKeys @ 0x1408034FC
 * Callers:
 *     NtSaveMergedKeys @ 0x1407EBB60 (NtSaveMergedKeys.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F1954 (CmpBlockTwoHiveWrites.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F616C (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x140803A40 (CmpCreateTemporaryHive.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rcx
  __int64 v6; // r13
  ULONG_PTR v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // r12
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  const GUID *v18; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-91h]
  char v21; // [rsp+40h] [rbp-79h]
  char v24; // [rsp+48h] [rbp-71h]
  unsigned int v25; // [rsp+50h] [rbp-69h]
  unsigned int v26; // [rsp+54h] [rbp-65h]
  _DWORD v27[2]; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v29; // [rsp+68h] [rbp-51h]
  ULONG_PTR v30; // [rsp+70h] [rbp-49h]
  ULONG_PTR v31; // [rsp+78h] [rbp-41h]
  __int64 v32; // [rsp+80h] [rbp-39h]
  __int64 v33; // [rsp+88h] [rbp-31h]
  UUID v34; // [rsp+90h] [rbp-29h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+B0h] [rbp-9h] BYREF

  v33 = a3;
  v28[1] = 0;
  v27[1] = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v28[0] = -1;
  v27[0] = -1;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 24);
  v9 = 0LL;
  v31 = v4;
  v10 = 0;
  v26 = *(_DWORD *)(v4 + 32);
  LODWORD(v4) = *(_DWORD *)(v5 + 32);
  v30 = v5;
  v32 = a2;
  v29 = 0LL;
  v25 = v4;
  v21 = 0;
  v11 = CmpUuidCreate(&Uuid);
  if ( v11 < 0 )
    goto LABEL_46;
  v11 = CmpUuidCreate(&v34);
  if ( v11 < 0 )
    goto LABEL_46;
  if ( (PVOID)v8 == CmpMasterHive || (PVOID)v6 == CmpMasterHive )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
      TlgWrite(&stru_140400AA0, &unk_14036D669, 0LL, v18, 2u, &v36);
    v11 = -1073741790;
LABEL_42:
    if ( v29 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v27);
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v28);
    goto LABEL_46;
  }
  if ( v8 == v6 )
  {
LABEL_6:
    v11 = -1073741811;
    goto LABEL_46;
  }
  CmpLockRegistry();
  CmpLockTwoKcbsShared(v31, v30);
  v21 = 1;
  if ( *(_WORD *)(v31 + 58) || *(_WORD *)(v30 + 58) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v11 = -1073741822;
    goto LABEL_46;
  }
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) || CmpIsKeyDeletedForKeyBody(v32, 0LL) )
  {
    v11 = -1073741444;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) != 0 && *(_DWORD *)(v6 + 104)
    || (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) )
  {
    goto LABEL_6;
  }
  v7 = CmpCreateTemporaryHive(&Uuid, &v34);
  if ( !v7 )
  {
    v11 = -1073741670;
    goto LABEL_46;
  }
  v11 = CmpBlockTwoHiveWrites(v8, v6, 0);
  if ( v11 >= 0 )
  {
    v10 = 6;
    ExAcquirePushLockSharedEx(v6 + 1776, 0LL);
    LOBYTE(v12) = a4;
    v11 = CmpDoAccessCheckOnSubtree(v6, v26, v12, 131097LL, 3u);
    ExReleasePushLockEx(v6 + 1776, 0LL);
    if ( v11 >= 0 )
    {
      ExAcquirePushLockSharedEx(v8 + 1776, 0LL);
      LOBYTE(v13) = a4;
      v11 = CmpDoAccessCheckOnSubtree(v8, v25, v13, 131097LL, 3u);
      ExReleasePushLockEx(v8 + 1776, 0LL);
      if ( v11 >= 0 )
      {
        ExAcquirePushLockExclusiveEx(v7 + 72, 0LL);
        v24 = 7;
        v14 = CmpCopyKeyPartial(v6, v26, v7, 0xFFFFFFFF, 6, (__int64)pData, 0);
        v15 = v14;
        if ( v14 == -1 )
          goto LABEL_21;
        *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = v14;
        if ( !CmpCopySyncTree(v6, v26, v7, v14, 2, 0) )
          goto LABEL_21;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 72));
        KeAbPostRelease(v6 + 72);
        v24 = 5;
        v29 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v8 + 8))(v8, v25, v27);
        if ( !v29 )
          goto LABEL_21;
        v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v15, v28);
        v9 = v16;
        if ( v16 && CmpMergeKeyValues(v8, v17, v29, v7, v15, v16) )
        {
          (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v27);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v28);
          if ( CmpCopySyncTree(v8, v25, v7, v15, 2, 2) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72));
            KeAbPostRelease(v8 + 72);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 72));
            KeAbPostRelease(v7 + 72);
            v24 = 0;
            CmpUnlockTwoKcbs(v31, v30);
            CmpUnlockRegistry();
            *(_QWORD *)(v7 + 1552) = v33;
            v21 = 0;
            v11 = HvWriteExternal(v7);
            *(_QWORD *)(v7 + 1552) = 0LL;
            goto LABEL_22;
          }
LABEL_21:
          v11 = -1073741670;
LABEL_22:
          v10 = v24;
          goto LABEL_46;
        }
        v10 = 5;
        v11 = -1073741670;
        goto LABEL_42;
      }
    }
  }
LABEL_46:
  if ( (v10 & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 72));
    KeAbPostRelease(v8 + 72);
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 72));
    KeAbPostRelease(v6 + 72);
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 72));
    KeAbPostRelease(v7 + 72);
  }
  if ( v21 )
  {
    CmpUnlockTwoKcbs(v31, v30);
    CmpUnlockRegistry();
  }
  if ( v7 )
    CmpDestroyHive((volatile signed __int32 *)v7);
  return (unsigned int)v11;
}
