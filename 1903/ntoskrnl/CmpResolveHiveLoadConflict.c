/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x14082AB24
 * Callers:
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     CmpUnJoinClassOfTrust @ 0x14008BF44 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x14018197C (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1401819F4 (CmpPerformTrustClassAccessCheck.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     CmpReferenceKeyControlBlock @ 0x14069B5DC (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x14069B878 (CmpRecordUnloadEventForHive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A9C4 (CmpIsHiveAlreadyLoaded.c)
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
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rsi
  unsigned int v16; // ebx
  int v17; // edi
  __int64 v18; // rbx
  int v19; // edx
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-B0h]
  _QWORD *v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[38]; // [rsp+60h] [rbp-A0h] BYREF

  v23 = a7;
  v24 = a8;
  v22 = 0LL;
  Object = 0LL;
  v12 = 0LL;
  memset(v25, 0, 0x128uLL);
  v25[19] = &v25[18];
  v25[18] = &v25[18];
  memset(&v25[27], 0, 0x50uLL);
  v14 = ObReferenceObjectByNameEx(a1, v13, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v25, &Object);
  v15 = (__int64 *)Object;
  if ( v14 < 0 )
  {
    v16 = -1073741275;
    goto LABEL_23;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
  {
LABEL_7:
    if ( !CmpIsHiveAlreadyLoaded((__int64)v15, a2, a3, (__int64)&v22, v23)
      || (v18 = v22, v19 = *(_DWORD *)(v22 + 160), (v19 & 0x8000) != 0 && (a3 & 0x2000) == 0)
      || (v19 & 0x8000) == 0 && (a3 & 0x2000) != 0 )
    {
      v16 = -1073741757;
      goto LABEL_22;
    }
    CmpLockKcbExclusive(v15[1]);
    if ( (a3 & 0x800) != 0 )
    {
      CmpReferenceKeyControlBlock(v15[1]);
      *v24 = v15[1];
    }
    if ( a5 && (v17 = CmpRecordUnloadEventForHive(v18, a5), v17 < 0) )
    {
      CmpUnlockKcb(v15[1]);
    }
    else
    {
      CmpUnlockKcb(v15[1]);
      if ( v12 )
      {
        CmpUnJoinClassOfTrust(v18);
        *(_DWORD *)(v18 + 4152) |= 1u;
        CmpJoinClassOfTrust(v18, v12, a6);
      }
      v17 = 0;
    }
LABEL_18:
    if ( v17 == -1073741275 )
      v17 = -1073741823;
    v16 = v17;
    goto LABEL_22;
  }
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v17 = CmpPerformTrustClassAccessCheck(v12, a6);
    if ( v17 < 0 )
      goto LABEL_18;
    goto LABEL_7;
  }
  v16 = -1073741444;
LABEL_22:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_23:
  if ( v15 )
    ObfDereferenceObject(v15);
  CmpCleanupParseContext((__int64)v25, 0);
  return v16;
}
