/*
 * XREFs of CmpRefreshHive @ 0x14083B84C
 * Callers:
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FBB40 (CmpLockKcbShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpRebuildKcbCache @ 0x140635460 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406BA5C8 (CmpCleanUpKCBCacheTable.c)
 *     HvUnlockHiveWriter @ 0x1406E9838 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406ED658 (HvLockHiveWriter.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14075C34C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x14082F4B8 (CmpSwapHiveStorage.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // r14
  char v3; // r12
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // rdi
  int v7; // ebx
  __int64 v9; // r13
  int v10; // eax
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  char v17; // [rsp+68h] [rbp-A0h]
  BOOLEAN v18; // [rsp+69h] [rbp-9Fh]
  ULONG_PTR v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v22[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-58h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  _BYTE v27[352]; // [rsp+C8h] [rbp-40h] BYREF

  memset(v27, 0, sizeof(v27));
  v2 = 0;
  v20 = 0xFFFFFFFFLL;
  v3 = 0;
  v21 = 0xFFFFFFFFLL;
  v4 = 0LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  CmpInitializeDelayDerefContext(v22);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( !v18 )
  {
    v7 = -1073740763;
    goto LABEL_7;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v2 = 1;
  CmpLockRegistry();
  CmpLockKcbShared(v5);
  v17 = 1;
  v7 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v7 < 0 )
    goto LABEL_6;
  if ( *(_BYTE *)(v6 + 2936) == 1 )
  {
    v7 = -1073741431;
LABEL_6:
    CmpUnlockKcb(v5);
    v3 = 1;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
  {
LABEL_17:
    v7 = -1073741811;
    goto LABEL_6;
  }
  HvLockHiveFlusherShared(v6);
  HvLockHiveWriter(v6);
  if ( *(_DWORD *)(v6 + 904) )
  {
    v7 = -1073741823;
    HvUnlockHiveWriter(v6);
    HvUnlockHiveFlusherShared(v6);
    v9 = 0LL;
    goto LABEL_44;
  }
  HvUnlockHiveWriter(v6);
  HvUnlockHiveFlusherShared(v6);
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
    goto LABEL_17;
  if ( *(_DWORD *)(v6 + 2912) )
  {
    v7 = -1073741823;
    goto LABEL_6;
  }
  CmpUnlockKcb(v5);
  v17 = 0;
  CmpUnlockRegistry();
  v24 = *(_QWORD *)(v6 + 1536);
  v3 = 0;
  v10 = *(_DWORD *)(v6 + 164);
  v26 = 0LL;
  v25 = 0LL;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = 1;
      *(_QWORD *)&v25 = *(_QWORD *)(v6 + 1544);
    }
    else
    {
      v11 = 2;
      v25 = *(_OWORD *)(v6 + 1568);
    }
  }
  else
  {
    v11 = 0;
  }
  v7 = CmpCreateHive(
         &v19,
         2u,
         *(_DWORD *)(v6 + 160) & 0xFFFEFFFF,
         v11,
         0LL,
         (__int64)&v24,
         0LL,
         16777218,
         0LL,
         0LL,
         0LL,
         (__int64)v27);
  if ( v7 < 0 || (CmpLockRegistryExclusive(), v3 = 1, v7 = CmpPerformKeyBodyDeletionCheck(a1, 0LL), v7 < 0) )
  {
LABEL_32:
    v4 = v19;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(v6 + 2936) == 1 )
  {
    v7 = -1073741431;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(v6 + 904) )
  {
    v7 = -1073741823;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
  {
LABEL_34:
    v7 = -1073741811;
    goto LABEL_32;
  }
  v4 = v19;
  if ( *(_DWORD *)(v6 + 2912) )
  {
    v7 = -1073741823;
    goto LABEL_7;
  }
  v12 = *(unsigned int *)(*(_QWORD *)(v19 + 64) + 36LL);
  if ( (_DWORD)v12 != *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
  {
    v7 = -1073741811;
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v19 + 8))(v19, v12, &v21);
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v6 + 8))(
          v6,
          *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL),
          &v20);
  v14 = *(_QWORD *)(v4 + 64);
  v15 = v13;
  v23 = v13;
  if ( HvMarkCellDirty(v4, *(unsigned int *)(v14 + 36), 0) )
  {
    v16 = *(_DWORD *)(v15 + 16);
    *(_WORD *)(v9 + 2) |= 0xCu;
    *(_DWORD *)(v9 + 16) = v16;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v6 + 16))(v6, &v20);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v21);
    CmpCleanUpKCBCacheTable(v6);
    CmpSearchKeyControlBlockTreeEx(
      (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshWorkerRoutine,
      v6,
      (__int64)v22,
      0LL,
      1);
    CmpFlushNotifiesOnKeyBodyList(v5, 0LL, (__int64)v22, 1);
    CmpSwapHiveStorage(v6, v4);
    CmpRebuildKcbCache(v5, (__int64)v22);
    ++*(_DWORD *)(v6 + 204);
    v7 = 0;
    goto LABEL_7;
  }
  v7 = -1073741443;
LABEL_44:
  if ( v23 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v6 + 16))(v6, &v20);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v21);
  v3 = 1;
  if ( v17 )
    goto LABEL_6;
LABEL_7:
  CmpDrainDelayDerefContext(v22);
  if ( v3 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v6);
  if ( v18 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( v4 )
    CmpDestroyHive((volatile signed __int32 *)v4);
  return (unsigned int)v7;
}
