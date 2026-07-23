/*
 * XREFs of CmRestoreKey @ 0x1408025AC
 * Callers:
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140693A6C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x1406965F8 (CmpReportNotify.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 *     CmpTraceHiveRestoreStart @ 0x1407ED240 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1407ED354 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x1407F5A24 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F616C (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x140804698 (CmpDeleteTree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, char a4)
{
  __int64 v7; // r15
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int Hive; // edi
  int HiveVolatile; // eax
  unsigned int v12; // edi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r12d
  __int64 v27; // r9
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  unsigned int v30; // ebx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // ebx
  void (__fastcall *v36)(ULONG_PTR, _DWORD *); // rax
  int v37; // eax
  unsigned int *v38; // r13
  _WORD *v39; // rbx
  char v40; // al
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rbx
  unsigned int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // r14d
  __int64 v57; // [rsp+28h] [rbp-D8h]
  unsigned int v59; // [rsp+64h] [rbp-9Ch]
  unsigned int v60; // [rsp+68h] [rbp-98h]
  unsigned int v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD v63[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int BugCheckParameter3; // [rsp+78h] [rbp-88h]
  unsigned int BugCheckParameter3_4; // [rsp+7Ch] [rbp-84h]
  _DWORD v66[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h]
  _DWORD v70[2]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v73; // [rsp+B8h] [rbp-48h]
  unsigned int v74; // [rsp+BCh] [rbp-44h] BYREF
  _DWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v76[2]; // [rsp+C8h] [rbp-38h] BYREF
  _WORD *v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v79[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v80[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v81[5]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v82[352]; // [rsp+130h] [rbp+30h] BYREF

  BugCheckParameter3_4 = a3;
  v77 = 0LL;
  v76[1] = 0;
  v76[0] = -1;
  v72 = 0xFFFFFFFFLL;
  v63[0] = -1;
  v66[0] = -1;
  v70[0] = -1;
  v7 = 0LL;
  v67 = 0LL;
  v63[1] = 0;
  v66[1] = 0;
  P = 0LL;
  v70[1] = 0;
  memset(v82, 0, sizeof(v82));
  v8 = a1[1];
  v68 = 0LL;
  v69 = 0LL;
  v62 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    Hive = -1073741790;
    goto LABEL_120;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    Hive = -1073741811;
    goto LABEL_120;
  }
  if ( a1[7] || a1[8] )
  {
    Hive = -1073741811;
    goto LABEL_114;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    Hive = HiveVolatile;
    goto LABEL_120;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v79[1] = v79;
  v79[0] = v79;
  memset(v81, 0, 0x20uLL);
  v81[0] = a2;
  Hive = CmpCreateHive((ULONG_PTR *)&P, 2u, 0x8000u, 0, 0LL, v81, 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)v82);
  if ( Hive < 0 )
    goto LABEL_120;
  CmpLockRegistryFreezeAware(0);
  ExAcquirePushLockSharedEx(v8 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
  v12 = *(_DWORD *)(v8 + 32);
  v59 = v12;
  if ( *(_WORD *)(v8 + 58) )
  {
    CmpLogUnsupportedOperation(0x11u);
    Hive = -1073741822;
    goto LABEL_112;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    Hive = -1073741535;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(v8 + 57) == 1 || (PVOID)v9 == CmpMasterHive )
  {
    Hive = -1073741790;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    Hive = -1073741431;
    goto LABEL_112;
  }
  v13 = (volatile signed __int64 *)(v9 + 72);
  ExAcquirePushLockSharedEx(v9 + 72, 0LL);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v12, v63);
  v7 = v14;
  if ( !v14
    || ((*(_BYTE *)(v14 + 2) & 4) == 0 ? (v15 = *(_DWORD *)(v14 + 16)) : (v15 = -1),
        v60 = v15,
        v16 = *((_QWORD *)P + 8),
        v73 = v12 >> 31,
        v17 = CmpCopyKeyPartial((__int64)P, *(unsigned int *)(v16 + 36), v9, v15, 6, v57, v12 >> 31),
        v17 == -1) )
  {
LABEL_109:
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
    KeAbPostRelease(v9 + 72);
    Hive = -1073741670;
LABEL_112:
    CmpUnlockKcb(v8);
    CmpUnlockRegistry();
    CmpDestroyHive((volatile signed __int32 *)P);
LABEL_116:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v63);
    goto LABEL_118;
  }
  v18 = HvReallocateCell(v9, v17, (unsigned int)*(unsigned __int16 *)(v7 + 72) + 76, 1, &v67, &v72);
  BugCheckParameter3 = v18;
  if ( v18 == -1
    || ((v19 = v67,
         v17 = v18,
         memmove((void *)(v67 + 76), (const void *)(v7 + 76), *(unsigned __int16 *)(v7 + 72)),
         *(_WORD *)(v19 + 72) = *(_WORD *)(v7 + 72),
         (*(_BYTE *)(v7 + 2) & 0x20) == 0)
      ? (*(_WORD *)(v19 + 2) &= ~0x20u)
      : (*(_WORD *)(v19 + 2) |= 0x20u),
        !CmpCopySyncTree((int)P, *(_DWORD *)(*((_QWORD *)P + 8) + 36LL), v9, v17, 2, 0)) )
  {
    if ( (unsigned __int8)CmpDeleteTree(v9, v17) )
      CmpFreeKeyByCell(v9, v17, 0);
    goto LABEL_109;
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
  KeAbPostRelease(v9 + 72);
  CmpUnlockKcb(v8);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v63);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v72);
  v67 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v20 = BugCheckParameter3_4;
  while ( 1 )
  {
    if ( (CmpShutdownRundown & 1) != 0 )
    {
LABEL_103:
      Hive = -1073741431;
      goto LABEL_104;
    }
    if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
      goto LABEL_102;
    if ( v59 != *(_DWORD *)(v8 + 32) )
    {
      Hive = -1073741444;
      goto LABEL_104;
    }
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
    {
      Hive = -1073740763;
      goto LABEL_104;
    }
    if ( *(_BYTE *)(v9 + 2936) == 1 )
      goto LABEL_103;
    if ( v60 != -1 )
    {
      Hive = CmpCheckKeyAccess(v9, v60);
      if ( Hive < 0 )
        goto LABEL_104;
    }
    Hive = CmpCheckKeyAccess(v9, v59);
    if ( Hive < 0 )
      goto LABEL_104;
    LOBYTE(v21) = 1;
    v23 = CmpTryAcquireKcbIXLocks(v8, v21, v22, (__int64)&v68);
    Hive = v23;
    if ( v23 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v25, v68);
      CmpUnlockRegistry();
      Hive = CmpAbortRollbackPacket((__int64)&v68, 0LL);
      if ( Hive < 0 )
        goto LABEL_55;
      goto LABEL_45;
    }
    if ( v23 < 0 )
      goto LABEL_104;
    LOBYTE(v24) = a4;
    Hive = CmpDoAccessCheckOnSubtree(v9, v59, v24, 0x10000LL, 2u);
    if ( Hive < 0 )
      goto LABEL_104;
    if ( (v20 & 8) == 0 )
      break;
    v80[0] = 0LL;
    v80[2] = 0LL;
    v80[1] = &v68;
    CmpEnumerateAllHigherLayerKcbs(
      v8,
      (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (__int64)v80,
      1,
      1);
    Hive = v80[0];
    v26 = v80[0];
    if ( (int)(LODWORD(v80[0]) + 0x80000000) >= 0 && LODWORD(v80[0]) != -1073741267 )
      goto LABEL_104;
    Hive = CmpPrepareForSubtreeInvalidation(v8, 0, (__int64)&v68);
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
        goto LABEL_104;
      if ( v26 != -1073741267 )
      {
        v78 = 1LL;
        CmpEnumerateAllHigherLayerKcbs(
          v8,
          (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
          (__int64)&v78,
          1,
          1);
        CmpInvalidateSubtree(v8, 1u, 0, 0LL);
        goto LABEL_59;
      }
    }
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v27, v68);
    CmpUnlockRegistry();
    Hive = CmpAbortRollbackPacket((__int64)&v68, 0LL);
    if ( Hive < 0 )
    {
LABEL_55:
      CmpLockRegistryFreezeAware(1);
LABEL_104:
      v55 = BugCheckParameter3;
      if ( (unsigned __int8)CmpDeleteTree(v9, BugCheckParameter3) )
        CmpFreeKeyByCell(v9, v55, 0);
      CmpUnlockRegistry();
      CmpDestroyHive((volatile signed __int32 *)P);
      goto LABEL_114;
    }
LABEL_45:
    CmpCleanupRollbackPacket((__int64)&v68);
    v68 = 0LL;
    v69 = 0LL;
    CmpRetryBackOff(&v62);
    CmpLockRegistryFreezeAware(1);
  }
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPostCallback,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v8) || *(_DWORD *)v8 != 1 )
  {
LABEL_102:
    Hive = -1073741535;
    goto LABEL_104;
  }
LABEL_59:
  v28 = BugCheckParameter3;
  if ( !HvpMarkCellDirty(v9, BugCheckParameter3, 0) )
    goto LABEL_60;
  v29 = v59;
  v67 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v59, &v72);
  if ( !v67 )
  {
LABEL_62:
    Hive = -1073741670;
    goto LABEL_104;
  }
  v30 = *(_DWORD *)(v67 + 16);
  v31 = *(_BYTE *)(v67 + 2);
  BugCheckParameter3_4 = v30;
  if ( (v31 & 4) == 0 )
  {
    if ( HvpMarkCellDirty(v9, v30, 0) )
    {
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v30, v66);
      if ( !v34 )
        goto LABEL_62;
      v35 = *(_DWORD *)(v34 + 4LL * v73 + 28);
      v36 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16);
      v74 = v35;
      v36(v9, v66);
      v77 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v35, v76);
      if ( !v77 )
        goto LABEL_62;
      if ( *v77 == 26994 )
      {
        v37 = (unsigned __int16)v77[1];
        v38 = (unsigned int *)(v77 + 2);
      }
      else
      {
        v37 = 1;
        v38 = &v74;
      }
      v61 = v37;
      v62 = 0;
      if ( !v37 )
      {
LABEL_87:
        v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, BugCheckParameter3_4, v66);
        v47 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v63) + 74);
        if ( *(_DWORD *)(v46 + 56) < v47 )
          *(_DWORD *)(v46 + 56) = v47;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v63);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v66);
        v29 = v59;
        goto LABEL_90;
      }
      while ( 1 )
      {
        v39 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, *v38, v70);
        if ( !v39 )
          goto LABEL_62;
        v40 = HvpMarkCellDirty(v9, *v38, 0);
        v41 = 0LL;
        if ( !v40 )
          break;
        v42 = (unsigned __int16)v39[1];
        v43 = 0LL;
        if ( ((*v39 - 26220) & 0xFDFF) != 0 )
        {
          if ( v39[1] )
          {
            v41 = v59;
            v44 = v39 + 2;
            while ( *v44 != v59 )
            {
              v43 = (unsigned int)(v43 + 1);
              ++v44;
              if ( (unsigned int)v43 >= v42 )
                goto LABEL_86;
            }
            *(_DWORD *)&v39[2 * v43 + 2] = v28;
LABEL_97:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v70);
            goto LABEL_87;
          }
        }
        else if ( v39[1] )
        {
          v41 = v59;
          v45 = v39 + 2;
          while ( *v45 != v59 )
          {
            v43 = (unsigned int)(v43 + 1);
            v45 += 2;
            if ( (unsigned int)v43 >= v42 )
              goto LABEL_86;
          }
          *(_DWORD *)&v39[4 * v43 + 2] = v28;
          goto LABEL_97;
        }
LABEL_86:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v9 + 16))(v9, v70, v41);
        ++v38;
        if ( ++v62 >= v61 )
          goto LABEL_87;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v9 + 16))(v9, v70, 0LL);
    }
LABEL_60:
    Hive = -1073741443;
    goto LABEL_104;
  }
  v32 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))CmpMasterHive + 1))(CmpMasterHive, v30, v66);
  if ( !v32 )
    goto LABEL_62;
  *(_DWORD *)(v32 + 28) = v28;
  (*((void (__fastcall **)(PVOID, _DWORD *))CmpMasterHive + 2))(CmpMasterHive, v66);
  v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v28, v63);
  v7 = v33;
  if ( !v33 )
    goto LABEL_62;
  *(_DWORD *)(v33 + 16) = v30;
  *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v28;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v63);
LABEL_90:
  *(_DWORD *)(v8 + 32) = v28;
  CmpCleanUpKcbValueCache(v8);
  v48 = *(_QWORD *)(v8 + 24);
  v75[0] = -1;
  v49 = *(unsigned int *)(v8 + 32);
  v75[1] = 0;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v48 + 8))(v48, v49, v75);
  v7 = 0LL;
  v51 = v50;
  if ( !v50 )
    goto LABEL_62;
  v52 = *(unsigned int *)(v50 + 40);
  v53 = *(_DWORD *)(v50 + 36);
  *(_QWORD *)(v8 + 96) = v52;
  *(_DWORD *)(v8 + 88) = v53;
  *(_WORD *)(v8 + 178) = *(_WORD *)(v51 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v51 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8, 1);
  ++*(_QWORD *)(v8 + 296);
  *(_QWORD *)(v8 + 160) = *(_QWORD *)(v51 + 4);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v51 + 52);
  *(_WORD *)(v8 + 170) = *(_WORD *)(v51 + 60);
  *(_DWORD *)(v8 + 172) = *(_DWORD *)(v51 + 64);
  *(_DWORD *)(v8 + 176) ^= (*(_DWORD *)(v8 + 176) ^ *(unsigned __int16 *)(v51 + 54)) & 0xF;
  *(_DWORD *)(v8 + 176) ^= ((unsigned __int8)*(_DWORD *)(v8 + 176) ^ (unsigned __int8)*(_WORD *)(v51 + 54)) & 0xF0;
  v54 = *(_QWORD *)(v8 + 24);
  *(_BYTE *)(v8 + 177) = *(_BYTE *)(v51 + 55);
  (*(void (__fastcall **)(__int64, _DWORD *))(v54 + 16))(v54, v75);
  *(_WORD *)(v8 + 4) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9, v29) )
    CmpFreeKeyByCell(v9, v29, 0);
  CmpReportNotify(v8, 0LL, 1, (__int64)v79);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyHive((volatile signed __int32 *)P);
  CmpSignalDeferredPosts(v79);
LABEL_114:
  if ( v77 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v76);
    goto LABEL_116;
  }
LABEL_118:
  if ( v67 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v72);
LABEL_120:
  CmpCleanupRollbackPacket((__int64)&v68);
  CmpTraceHiveRestoreStop(Hive);
  return (unsigned int)Hive;
}
