/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x1407F1528
 * Callers:
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpJoinClassOfTrust @ 0x1401B32D0 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1401B334C (CmpPerformTrustClassAccessCheck.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B336C (CmpUnJoinClassOfTrust.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x1406940AC (CmpRecordUnloadEventForHive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F13C8 (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        char a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v12; // r14
  int v13; // eax
  __int64 *v14; // rsi
  unsigned int v15; // ebx
  int v16; // edi
  __int64 v17; // rbx
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-B0h]
  _QWORD *v22; // [rsp+58h] [rbp-A8h]
  _QWORD v23[38]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = a7;
  v22 = a8;
  v20 = 0LL;
  Object = 0LL;
  v12 = 0LL;
  memset(v23, 0, 0x128uLL);
  v23[19] = &v23[18];
  v23[18] = &v23[18];
  memset(&v23[27], 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, 0LL, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v23, &Object);
  v14 = (__int64 *)Object;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_25;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
  {
LABEL_7:
    if ( !CmpIsHiveAlreadyLoaded((__int64)v14, a2, a3, (__int64)&v20, v21)
      || (v17 = v20, (*(_DWORD *)(v20 + 160) & 0x8000) != 0) && (a3 & 0x2000) == 0
      || (*(_DWORD *)(v20 + 160) & 0x8000) == 0 && (a3 & 0x2000) != 0 )
    {
      v15 = -1073741757;
      goto LABEL_24;
    }
    CmpLockKcbExclusive(v14[1]);
    if ( (a3 & 0x800) != 0 )
    {
      CmpReferenceKeyControlBlock(v14[1]);
      *v22 = v14[1];
    }
    if ( a5 && (v16 = CmpRecordUnloadEventForHive(v17, a5), v16 < 0) )
    {
      CmpUnlockKcb(v14[1]);
    }
    else
    {
      CmpUnlockKcb(v14[1]);
      if ( v12 )
      {
        CmpUnJoinClassOfTrust(v17);
        *(_DWORD *)(v17 + 4152) |= 1u;
        CmpJoinClassOfTrust(v17, v12, a6);
      }
      v16 = 0;
    }
LABEL_21:
    if ( v16 == -1073741275 )
      v16 = -1073741823;
    v15 = v16;
    goto LABEL_24;
  }
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    v16 = CmpPerformTrustClassAccessCheck(v12, a6);
    if ( v16 < 0 )
      goto LABEL_21;
    goto LABEL_7;
  }
  v15 = -1073741444;
LABEL_24:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_25:
  if ( v14 )
    ObfDereferenceObject(v14);
  CmpCleanupParseContext((__int64)v23, 0);
  return v15;
}
