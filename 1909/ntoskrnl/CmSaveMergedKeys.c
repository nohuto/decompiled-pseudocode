/*
 * XREFs of CmSaveMergedKeys @ 0x14083AE6C
 * Callers:
 *     NtSaveMergedKeys @ 0x140824BF0 (NtSaveMergedKeys.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmUnlockHiveSecurity @ 0x140634F84 (CmUnlockHiveSecurity.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14066359C (CmpLockTwoKcbsShared.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068FF8C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14068FFC4 (HvLockHiveFlusherExclusive.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F6B14 (CmpBlockTwoHiveWrites.c)
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DB88 (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmLockHiveSecurityShared @ 0x140832088 (CmLockHiveSecurityShared.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     HvWriteExternal @ 0x140833788 (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x14083561C (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x140836580 (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x14083B318 (CmpCreateTemporaryHive.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // r12
  _DWORD *v8; // r13
  char v9; // r15
  ULONG_PTR v10; // rcx
  __int64 v11; // rsi
  int v12; // ebx
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r12
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  const GUID *v22; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v25; // [rsp+40h] [rbp-69h]
  ULONG_PTR v27; // [rsp+48h] [rbp-61h]
  ULONG_PTR v28; // [rsp+50h] [rbp-59h]
  unsigned int v29; // [rsp+58h] [rbp-51h]
  _DWORD v30[2]; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-31h]
  __int64 v34; // [rsp+80h] [rbp-29h]
  __int64 v35; // [rsp+88h] [rbp-21h]
  UUID Uuid; // [rsp+90h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp-9h] BYREF

  v33 = a1;
  v35 = a3;
  v31[1] = 0;
  v30[1] = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v31[0] = -1;
  v30[0] = -1;
  v37.Ptr = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD **)(v4 + 32);
  v7 = 0LL;
  *(_QWORD *)&v37.Size = 0LL;
  v8 = 0LL;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  v9 = 0;
  *(_QWORD *)Uuid.Data4 = 0LL;
  v10 = *(_QWORD *)(a2 + 8);
  v27 = v4;
  v32 = *(_DWORD *)(v4 + 40);
  LODWORD(v4) = *(_DWORD *)(v10 + 40);
  v11 = *(_QWORD *)(v10 + 32);
  v28 = v10;
  v34 = a2;
  v29 = v4;
  v25 = 0;
  v12 = CmpUuidCreate((UUID *)&v37);
  if ( v12 < 0 )
    goto LABEL_41;
  v12 = CmpUuidCreate(&Uuid);
  if ( v12 < 0 )
    goto LABEL_41;
  if ( (PVOID)v11 == CmpMasterHive || v6 == CmpMasterHive )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
      TlgWrite(&stru_140425BC0, &unk_14038C39B, 0LL, v22, 2u, &v37);
    v12 = -1073741790;
    goto LABEL_37;
  }
  if ( (_DWORD *)v11 == v6 )
  {
    v12 = -1073741811;
LABEL_41:
    v13 = v28;
    goto LABEL_42;
  }
  CmpLockRegistry();
  v13 = v28;
  v14 = v27;
  CmpLockTwoKcbsShared(v27, v28);
  v25 = 1;
  if ( *(_WORD *)(v27 + 66) || *(_WORD *)(v28 + 66) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v12 = -1073741822;
    goto LABEL_43;
  }
  if ( CmpIsKeyDeletedForKeyBody(v33, 0LL) || CmpIsKeyDeletedForKeyBody(v34, 0LL) )
  {
    v12 = -1073741444;
    goto LABEL_43;
  }
  if ( (v6[40] & 2) != 0 && v6[26] || (*(_DWORD *)(v11 + 160) & 2) != 0 && *(_DWORD *)(v11 + 104) )
  {
    v12 = -1073741811;
    goto LABEL_43;
  }
  v5 = CmpCreateTemporaryHive(&v37, &Uuid);
  if ( !v5 )
  {
    v12 = -1073741670;
    goto LABEL_43;
  }
  v12 = CmpBlockTwoHiveWrites(v11, (__int64)v6, 0);
  if ( v12 >= 0 )
  {
    v9 = 6;
    CmLockHiveSecurityShared((__int64)v6);
    v15 = v32;
    LOBYTE(v16) = a4;
    v12 = CmpDoAccessCheckOnSubtree((__int64)v6, v32, v16, (struct _LOOKASIDE_LIST_EX *)0x20019, 3u);
    CmUnlockHiveSecurity((__int64)v6);
    if ( v12 < 0 )
      goto LABEL_42;
    CmLockHiveSecurityShared(v11);
    LOBYTE(v17) = a4;
    v12 = CmpDoAccessCheckOnSubtree(v11, v29, v17, (struct _LOOKASIDE_LIST_EX *)0x20019, 3u);
    CmUnlockHiveSecurity(v11);
    if ( v12 < 0 )
      goto LABEL_42;
    HvLockHiveFlusherExclusive(v5);
    v9 = 7;
    v18 = CmpCopyKeyPartial((__int64)v6, v32, v5, 0xFFFFFFFF, 6, (__int64)pData, 0);
    v19 = v18;
    if ( v18 == -1 || (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) = v18, !CmpCopySyncTree((int)v6, v15, v5, v18, 2, 0)) )
    {
      v12 = -1073741670;
LABEL_42:
      v14 = v27;
      goto LABEL_43;
    }
    HvUnlockHiveFlusherExclusive((__int64)v6);
    v9 = 5;
    v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v11 + 8))(v11, v29, v30);
    if ( !v8 )
      goto LABEL_25;
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v5 + 8))(v5, v19, v31);
    v7 = v20;
    if ( v20 && CmpMergeKeyValues(v11, v21, v8, v5, v19, v20) )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v30);
      (*(void (__fastcall **)(__int64, _DWORD *))(v5 + 16))(v5, v31);
      if ( CmpCopySyncTree(v11, v29, v5, v19, 2, 2) )
      {
        HvUnlockHiveFlusherExclusive(v11);
        HvUnlockHiveFlusherExclusive(v5);
        v13 = v28;
        v9 = 0;
        v14 = v27;
        CmpUnlockTwoKcbs(v27, v28);
        CmpUnlockRegistry();
        *(_QWORD *)(v5 + 1552) = v35;
        v25 = 0;
        v12 = HvWriteExternal(v5);
        *(_QWORD *)(v5 + 1552) = 0LL;
        goto LABEL_43;
      }
LABEL_25:
      v12 = -1073741670;
      goto LABEL_41;
    }
    v12 = -1073741670;
LABEL_37:
    if ( v8 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v30);
    if ( v7 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v5 + 16))(v5, v31);
    goto LABEL_41;
  }
LABEL_43:
  if ( (v9 & 4) != 0 )
    HvUnlockHiveFlusherExclusive(v11);
  if ( (v9 & 2) != 0 )
    HvUnlockHiveFlusherExclusive((__int64)v6);
  if ( (v9 & 1) != 0 )
    HvUnlockHiveFlusherExclusive(v5);
  if ( v25 )
  {
    CmpUnlockTwoKcbs(v14, v13);
    CmpUnlockRegistry();
  }
  if ( v5 )
    CmpDestroyHive((volatile signed __int32 *)v5);
  return (unsigned int)v12;
}
