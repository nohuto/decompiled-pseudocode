/*
 * XREFs of CmRestoreKey @ 0x14083A914
 * Callers:
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FAAF0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     HvReallocateCell @ 0x14062EFDC (HvReallocateCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140631080 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpReportNotify @ 0x1406338C0 (CmpReportNotify.c)
 *     CmpAssignSecurityToKcb @ 0x140656884 (CmpAssignSecurityToKcb.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanupRollbackPacket @ 0x1406627FC (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14069B44C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpAbortRollbackPacket @ 0x14069BC54 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14069BCB0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F7FA0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCopyKeyPartial @ 0x140716014 (CmpCopyKeyPartial.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407451A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074779C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140747CBC (CmpInvalidateSubtree.c)
 *     CmpTraceHiveRestoreStart @ 0x140826B4C (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x140826C60 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x14082D7E4 (CmpCheckKeyAccess.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DD0C (CmpDoAccessCheckOnSubtree.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 *     CmpRetryBackOff @ 0x140831F98 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140833260 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x140833384 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140835FBC (CmpCopySyncTree.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x14083C8B4 (CmpDeleteTree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3, char a4)
{
  char v4; // bl
  __int64 v8; // rsi
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // r14
  int Hive; // edi
  char v12; // si
  int HiveVolatile; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // ecx
  _QWORD *v18; // r12
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // edi
  size_t v23; // r8
  const void *v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rcx
  void (__fastcall *v27)(ULONG_PTR, __int64 *); // rax
  __int64 v28; // r13
  char v29; // r12
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  unsigned int v37; // r12d
  bool v38; // zf
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rax
  _DWORD *v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // ebx
  void (__fastcall *v45)(ULONG_PTR, _DWORD *); // rax
  _WORD *v46; // rax
  unsigned int v47; // r13d
  int *v48; // r12
  _WORD *v49; // rbx
  char v50; // al
  __int64 v51; // r8
  unsigned int v52; // edx
  __int64 v53; // rax
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  __int64 v56; // rbx
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rbx
  int v61; // ecx
  int v62; // eax
  __int64 v63; // rcx
  unsigned int v64; // esi
  __int64 v66; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+61h] [rbp-9Fh]
  unsigned int BugCheckParameter3; // [rsp+64h] [rbp-9Ch]
  unsigned int BugCheckParameter3_4; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned int v73; // [rsp+78h] [rbp-88h]
  _DWORD v74[2]; // [rsp+80h] [rbp-80h] BYREF
  int v75; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v76[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-58h]
  _DWORD v80[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v85[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v86; // [rsp+E8h] [rbp-18h]
  _DWORD v87[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v88; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD **v89; // [rsp+100h] [rbp+0h]
  _WORD *v90; // [rsp+108h] [rbp+8h]
  void *v91; // [rsp+110h] [rbp+10h] BYREF
  __int128 v92; // [rsp+118h] [rbp+18h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  _BYTE v94[352]; // [rsp+130h] [rbp+30h] BYREF

  v84 = (__int64)a1;
  v4 = 0;
  v75 = a3;
  v90 = 0LL;
  v87[0] = -1;
  v83 = 0xFFFFFFFFLL;
  v74[0] = -1;
  v76[0] = -1;
  v80[0] = -1;
  v8 = 0LL;
  v87[1] = 0;
  v77 = 0LL;
  v72 = 0LL;
  v74[1] = 0;
  v76[1] = 0;
  P = 0LL;
  v80[1] = 0;
  v88 = 0LL;
  v89 = 0LL;
  memset(v94, 0, sizeof(v94));
  v71 = 0;
  v85[0] = 0LL;
  v85[1] = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  CmpInitializeDelayDerefContext(v85);
  v9 = a1[1];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)(v10 + 160) & 0x100000) != 0 )
  {
    Hive = -1073741790;
    goto LABEL_117;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    Hive = -1073741811;
    goto LABEL_117;
  }
  v12 = 1;
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    Hive = HiveVolatile;
LABEL_10:
    v8 = 0LL;
    goto LABEL_117;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v93 = 0LL;
  v89 = &v88;
  v91 = a2;
  v88 = &v88;
  v92 = 0LL;
  Hive = CmpCreateHive((ULONG_PTR *)&P, 2u, 0x8000, 0, 0LL, (__int64)&v91, 0LL, 16777217, 0LL, 0LL, 0LL, (__int64)v94);
  if ( Hive < 0 )
    goto LABEL_10;
  CmpLockRegistryFreezeAware(0);
  v4 = 1;
  CmpLockKcbShared(v9);
  v14 = *(_DWORD *)(v9 + 40);
  BugCheckParameter3 = v14;
  if ( *(_WORD *)(v9 + 66) )
  {
    CmpLogUnsupportedOperation(0x11u);
    Hive = -1073741822;
    goto LABEL_115;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    Hive = -1073741535;
    goto LABEL_115;
  }
  if ( *(_BYTE *)(v9 + 65) == 1 || (PVOID)v10 == CmpMasterHive )
  {
    Hive = -1073741790;
    goto LABEL_115;
  }
  if ( *(_BYTE *)(v10 + 2936) == 1 )
  {
    Hive = -1073741431;
    goto LABEL_115;
  }
  HvLockHiveFlusherShared(v10);
  v68 = 1;
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v14, v74);
  v72 = v15;
  v16 = v15;
  if ( !v15
    || ((*(_BYTE *)(v15 + 2) & 4) == 0 ? (v17 = *(_DWORD *)(v15 + 16)) : (v17 = -1),
        v18 = P,
        v73 = v17,
        v19 = *((_QWORD *)P + 8),
        v86 = v14 >> 31,
        v20 = CmpCopyKeyPartial((__int64)P, *(unsigned int *)(v19 + 36), v10, v17, 6, v66, v14 >> 31),
        LODWORD(v82) = v20,
        v20 == -1) )
  {
    Hive = -1073741670;
    goto LABEL_113;
  }
  v21 = HvReallocateCell(v10, v20, (unsigned int)*(unsigned __int16 *)(v16 + 72) + 76, 1, &v77, &v83);
  BugCheckParameter3_4 = v21;
  v22 = v21;
  if ( v21 == -1 )
    goto LABEL_30;
  v23 = *(unsigned __int16 *)(v16 + 72);
  v24 = (const void *)(v16 + 76);
  v25 = v77;
  LODWORD(v82) = v21;
  memmove((void *)(v77 + 76), v24, v23);
  v26 = v72;
  *(_WORD *)(v25 + 72) = *(_WORD *)(v72 + 72);
  if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
    *(_WORD *)(v25 + 2) |= 0x20u;
  else
    *(_WORD *)(v77 + 2) &= ~0x20u;
  if ( !CmpCopySyncTree((int)P, *(_DWORD *)(v18[8] + 36LL), v10, v22, 2, 0) )
  {
LABEL_30:
    Hive = -1073741670;
LABEL_110:
    v64 = v82;
    if ( (unsigned __int8)CmpDeleteTree(v10) )
      CmpFreeKeyByCell(v10, v64, 0);
    v12 = v68;
    if ( !v68 )
    {
LABEL_114:
      if ( !v12 )
      {
LABEL_116:
        v8 = v72;
        goto LABEL_117;
      }
LABEL_115:
      CmpUnlockKcb(v9);
      goto LABEL_116;
    }
LABEL_113:
    HvUnlockHiveFlusherShared(v10);
    goto LABEL_114;
  }
  HvUnlockHiveFlusherShared(v10);
  v68 = 0;
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v74);
  v27 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16);
  v72 = 0LL;
  v27(v10, &v83);
  v77 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v28 = v84;
  v29 = v75;
  while ( 1 )
  {
    v30 = 0;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
LABEL_108:
      Hive = -1073741431;
      goto LABEL_109;
    }
    if ( CmpIsKeyDeletedForKeyBody(v28, 0LL) )
      goto LABEL_61;
    if ( BugCheckParameter3 != *(_DWORD *)(v9 + 40) )
    {
      Hive = -1073741444;
      goto LABEL_109;
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
    {
      Hive = -1073740763;
      goto LABEL_109;
    }
    if ( *(_BYTE *)(v10 + 2936) == 1 )
      goto LABEL_108;
    if ( v73 != -1 )
    {
      Hive = CmpCheckKeyAccess(v10, v73);
      if ( Hive < 0 )
        goto LABEL_109;
    }
    Hive = CmpCheckKeyAccess(v10, BugCheckParameter3);
    if ( Hive < 0 )
      goto LABEL_109;
    LOBYTE(v31) = 1;
    v33 = CmpTryAcquireKcbIXLocks(v9, v31, v32, (__int64)&v78);
    Hive = v33;
    if ( v33 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 7u);
      CmpUnlockRegistry();
      Hive = CmpAbortRollbackPacket((__int64)&v78);
      if ( Hive >= 0 )
        goto LABEL_46;
      CmpLockRegistryFreezeAware(1);
LABEL_109:
      v4 = 1;
      goto LABEL_110;
    }
    if ( v33 < 0 )
      goto LABEL_109;
    LOBYTE(v34) = a4;
    Hive = CmpDoAccessCheckOnSubtree(v10, BugCheckParameter3, v34, (struct _LOOKASIDE_LIST_EX *)0x10000, 2u);
    if ( Hive < 0 )
      goto LABEL_109;
    if ( (v29 & 8) == 0 )
      break;
    v35 = CmpPrepareToInvalidateAllHigherLayerKcbs(v9, 0, (__int64)&v78);
    Hive = v35;
    if ( v35 == -1073741267 )
    {
      v30 = 1;
    }
    else if ( v35 < 0 )
    {
      goto LABEL_109;
    }
    v36 = CmpPrepareForSubtreeInvalidation(v9, (__int64)&v78);
    Hive = v36;
    if ( v36 != -1073741267 )
    {
      if ( v36 < 0 )
        goto LABEL_109;
      if ( !v30 )
      {
        CmpInvalidateAllHigherLayerKcbs(v9, 0, 1, (__int64)v85);
        CmpInvalidateSubtree(v9, 1, (__int64)v85, 0LL);
        CmpDrainDelayDerefContext(v85);
        goto LABEL_63;
      }
    }
    CmpLogTransactionAbortedForRollbackPacket(v9, 7u);
    CmpUnlockRegistry();
    v4 = 0;
    Hive = CmpAbortRollbackPacket((__int64)&v78);
    if ( Hive < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_110;
    }
LABEL_46:
    CmpCleanupRollbackPacket((__int64)&v78);
    v78 = 0LL;
    v79 = 0LL;
    CmpRetryBackOff(&v71);
    CmpLockRegistryFreezeAware(1);
  }
  CmpEnumerateAllHigherLayerKcbs(
    v9,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpCleanUpHigherLayerKcbCachesPostCallback,
    0LL,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v9) || *(_QWORD *)v9 != 1LL )
  {
LABEL_61:
    Hive = -1073741535;
    goto LABEL_109;
  }
LABEL_63:
  v37 = BugCheckParameter3_4;
  if ( !HvMarkCellDirty(v10, BugCheckParameter3_4, 0) )
    goto LABEL_64;
  v77 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v10 + 8))(v10, BugCheckParameter3, &v83);
  if ( !v77 )
  {
LABEL_66:
    Hive = -1073741670;
    goto LABEL_109;
  }
  v38 = (*(_BYTE *)(v77 + 2) & 4) == 0;
  v39 = *(_DWORD *)(v77 + 16);
  v73 = v39;
  if ( v38 )
  {
    if ( HvMarkCellDirty(v10, v39, 0) )
    {
      v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v39, v76);
      if ( !v43 )
        goto LABEL_66;
      v44 = *(_DWORD *)(v43 + 4LL * v86 + 28);
      v45 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16);
      v75 = v44;
      v45(v10, v76);
      v46 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v44, v87);
      v90 = v46;
      if ( !v46 )
        goto LABEL_66;
      if ( *v46 == 26994 )
      {
        v47 = (unsigned __int16)v46[1];
        v48 = (int *)(v46 + 2);
      }
      else
      {
        v47 = 1;
        v48 = &v75;
      }
      v71 = 0;
      if ( !v47 )
      {
LABEL_91:
        v37 = BugCheckParameter3_4;
LABEL_92:
        v56 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v73, v76);
        v57 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v37, v74)
                                  + 74);
        if ( *(_DWORD *)(v56 + 56) < v57 )
          *(_DWORD *)(v56 + 56) = v57;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v74);
        v42 = v76;
        goto LABEL_95;
      }
      while ( 1 )
      {
        v49 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, (unsigned int)*v48, v80);
        if ( !v49 )
          goto LABEL_66;
        v50 = HvMarkCellDirty(v10, (unsigned int)*v48, 0);
        v51 = 0LL;
        if ( !v50 )
          break;
        v52 = (unsigned __int16)v49[1];
        v53 = 0LL;
        if ( ((*v49 - 26220) & 0xFDFF) != 0 )
        {
          if ( v49[1] )
          {
            v51 = BugCheckParameter3;
            v54 = v49 + 2;
            while ( *v54 != BugCheckParameter3 )
            {
              v53 = (unsigned int)(v53 + 1);
              ++v54;
              if ( (unsigned int)v53 >= v52 )
                goto LABEL_90;
            }
            v37 = BugCheckParameter3_4;
            *(_DWORD *)&v49[2 * v53 + 2] = BugCheckParameter3_4;
LABEL_98:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v80);
            goto LABEL_92;
          }
        }
        else if ( v49[1] )
        {
          v51 = BugCheckParameter3;
          v55 = v49 + 2;
          while ( *v55 != BugCheckParameter3 )
          {
            v53 = (unsigned int)(v53 + 1);
            v55 += 2;
            if ( (unsigned int)v53 >= v52 )
              goto LABEL_90;
          }
          v37 = BugCheckParameter3_4;
          *(_DWORD *)&v49[4 * v53 + 2] = BugCheckParameter3_4;
          goto LABEL_98;
        }
LABEL_90:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v10 + 16))(v10, v80, v51);
        ++v48;
        if ( ++v71 >= v47 )
          goto LABEL_91;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v10 + 16))(v10, v80, 0LL);
    }
LABEL_64:
    Hive = -1073741443;
    goto LABEL_109;
  }
  v40 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))CmpMasterHive + 1))(CmpMasterHive, v39, v76);
  if ( !v40 )
    goto LABEL_66;
  *(_DWORD *)(v40 + 28) = BugCheckParameter3_4;
  (*((void (__fastcall **)(PVOID, _DWORD *))CmpMasterHive + 2))(CmpMasterHive, v76);
  v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, BugCheckParameter3_4, v74);
  v72 = v41;
  if ( !v41 )
    goto LABEL_66;
  *(_DWORD *)(v41 + 16) = v39;
  v42 = v74;
  *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = BugCheckParameter3_4;
LABEL_95:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v42);
  *(_DWORD *)(v9 + 40) = v37;
  CmpCleanUpKcbCachedSymlink(v9);
  v58 = *(_QWORD *)(v9 + 32);
  v84 = 0xFFFFFFFFLL;
  v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v58 + 8))(v58, *(unsigned int *)(v9 + 40), &v84);
  v60 = v59;
  if ( !v59 )
  {
    Hive = -1073741670;
    v72 = 0LL;
    goto LABEL_109;
  }
  v61 = *(_DWORD *)(v59 + 40);
  v62 = *(_DWORD *)(v59 + 36);
  *(_DWORD *)(v9 + 100) = v61;
  *(_DWORD *)(v9 + 96) = v62;
  *(_WORD *)(v9 + 186) = *(_WORD *)(v60 + 2);
  CmpAssignSecurityToKcb(v9, *(unsigned int *)(v60 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v9, 1);
  ++*(_QWORD *)(v9 + 304);
  *(_QWORD *)(v9 + 168) = *(_QWORD *)(v60 + 4);
  *(_WORD *)(v9 + 176) = *(_WORD *)(v60 + 52);
  *(_WORD *)(v9 + 178) = *(_WORD *)(v60 + 60);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(v60 + 64);
  *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ *(unsigned __int16 *)(v60 + 54)) & 0xF;
  *(_DWORD *)(v9 + 184) ^= ((unsigned __int8)*(_DWORD *)(v9 + 184) ^ (unsigned __int8)*(_WORD *)(v60 + 54)) & 0xF0;
  v63 = *(_QWORD *)(v9 + 32);
  *(_BYTE *)(v9 + 185) = *(_BYTE *)(v60 + 55);
  (*(void (__fastcall **)(__int64, __int64 *))(v63 + 16))(v63, &v84);
  *(_WORD *)(v9 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v10) )
    CmpFreeKeyByCell(v10, BugCheckParameter3, 0);
  CmpReportNotify(v9, 0, 1, (__int64)&v88);
  if ( !CmpProfileLoaded )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext(v85);
  CmpUnlockRegistry();
  v4 = 0;
  CmpDestroyHive((volatile signed __int32 *)P);
  P = 0LL;
  CmpSignalDeferredPosts(&v88);
  v8 = 0LL;
LABEL_117:
  CmpDrainDelayDerefContext(v85);
  if ( v4 )
    CmpUnlockRegistry();
  if ( P )
    CmpDestroyHive((volatile signed __int32 *)P);
  if ( v90 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v87);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v74);
  if ( v77 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16))(v10, &v83);
  CmpCleanupRollbackPacket((__int64)&v78);
  CmpTraceHiveRestoreStop(Hive);
  return (unsigned int)Hive;
}
