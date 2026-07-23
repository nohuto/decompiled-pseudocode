/*
 * XREFs of CmpRefreshHive @ 0x140803FAC
 * Callers:
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpCleanUpKCBCacheTable @ 0x140693CDC (CmpCleanUpKCBCacheTable.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140737640 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140737A70 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x1407F7B00 (CmpSwapHiveStorage.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r15
  ULONG_PTR v4; // rdi
  int v5; // ebx
  volatile signed __int64 *v7; // rsi
  volatile signed __int64 *v8; // r14
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // r9d
  ULONG_PTR v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR v15; // rsi
  char v16; // [rsp+68h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v19[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v20[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[352]; // [rsp+B8h] [rbp-50h] BYREF

  v19[0] = 0LL;
  v18 = 0xFFFFFFFFLL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v19[0]) = -1;
  v4 = *(_QWORD *)(v3 + 24);
  BugCheckParameter2 = 0LL;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 1632)) )
    return (unsigned int)-1073740763;
  CmpBecomeActiveFlusherAndReconciler(v4);
  CmpLockRegistry();
  ExAcquirePushLockSharedEx(v3 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  v16 = 1;
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 < 0 )
    goto LABEL_6;
  if ( *(_BYTE *)(v4 + 2936) == 1 )
  {
    v5 = -1073741431;
LABEL_6:
    CmpUnlockKcb(v3);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v4 + 160) & 2) == 0 )
  {
LABEL_12:
    v5 = -1073741811;
    goto LABEL_6;
  }
  v7 = (volatile signed __int64 *)(v4 + 72);
  ExAcquirePushLockSharedEx(v4 + 72, 0LL);
  v8 = (volatile signed __int64 *)(v4 + 80);
  ExAcquirePushLockExclusiveEx(v4 + 80, 0LL);
  if ( *(_DWORD *)(v4 + 904) )
  {
    v5 = -1073741823;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
    KeAbPostRelease(v4 + 80);
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 72));
    KeAbPostRelease(v4 + 72);
    v9 = 0LL;
LABEL_44:
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v18);
    if ( v2 )
      (*(void (__fastcall **)(ULONG_PTR, _QWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    if ( !v16 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
  KeAbPostRelease(v4 + 80);
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v4 + 72));
  KeAbPostRelease(v4 + 72);
  if ( (*(_DWORD *)(v3 + 176) & 0x40000) == 0 )
    goto LABEL_12;
  if ( *(_DWORD *)(v4 + 2912) )
  {
    v5 = -1073741823;
    goto LABEL_6;
  }
  CmpUnlockKcb(v3);
  v16 = 0;
  CmpUnlockRegistry();
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  v20[0] = *(_QWORD *)(v4 + 1536);
  v10 = *(_DWORD *)(v4 + 164);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = 1;
      v20[1] = *(_QWORD *)(v4 + 1544);
    }
    else
    {
      v11 = 2;
      v20[1] = *(_QWORD *)(v4 + 1568);
      v20[2] = *(_QWORD *)(v4 + 1576);
    }
  }
  else
  {
    v11 = 0;
  }
  v5 = CmpCreateHive(
         &BugCheckParameter2,
         2u,
         *(_DWORD *)(v4 + 160) & 0xFFFEFFFF,
         v11,
         0LL,
         v20,
         0LL,
         (*(_DWORD *)(v4 + 4152) & 0x10000) != 0 ? 18415650 : 18415682,
         0LL,
         0LL,
         0LL,
         (__int64)v21);
  if ( v5 < 0 )
    goto LABEL_8;
  CmpLockRegistryExclusive();
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(v4 + 2936) == 1 )
    {
      v5 = -1073741431;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(v4 + 160) & 2) != 0 )
    {
      if ( *(_DWORD *)(v4 + 904) )
        goto LABEL_38;
      if ( (*(_DWORD *)(v3 + 176) & 0x40000) == 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v4 + 2912) )
      {
LABEL_38:
        v5 = -1073741823;
        goto LABEL_7;
      }
      v12 = BugCheckParameter2;
      v13 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
      if ( (_DWORD)v13 == *(_DWORD *)(*(_QWORD *)(v4 + 64) + 36LL) )
      {
        v2 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               v13,
               v19);
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v4 + 8))(
               v4,
               *(unsigned int *)(*(_QWORD *)(v4 + 64) + 36LL),
               &v18);
        if ( HvpMarkCellDirty(v12, *(unsigned int *)(*(_QWORD *)(v12 + 64) + 36LL), 0) )
        {
          v14 = *(_DWORD *)(v9 + 16);
          *(_WORD *)(v2 + 2) |= 0xCu;
          *(_DWORD *)(v2 + 16) = v14;
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v18);
          v15 = BugCheckParameter2;
          (*(void (__fastcall **)(ULONG_PTR, _QWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
          CmpCleanUpKCBCacheTable(v4);
          CmpSearchKeyControlBlockTreeEx(
            (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
            v4,
            0LL,
            1);
          CmpFlushNotifiesOnKeyBodyList(v3, 0LL, 1);
          CmpSwapHiveStorage(v4, v15);
          CmpRebuildKcbCache(v3);
          ++*(_DWORD *)(v4 + 204);
          v5 = 0;
          goto LABEL_7;
        }
        v5 = -1073741443;
        goto LABEL_44;
      }
    }
LABEL_36:
    v5 = -1073741811;
  }
LABEL_7:
  CmpUnlockRegistry();
LABEL_8:
  CmpFinishBeingActiveFlusherAndReconciler(v4);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 1632));
  if ( BugCheckParameter2 )
    CmpDestroyHive((volatile signed __int32 *)BugCheckParameter2);
  return (unsigned int)v5;
}
