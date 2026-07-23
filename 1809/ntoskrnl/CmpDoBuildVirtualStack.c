/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1407F3C18
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140583A30 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCleanupKcbStack @ 0x140644FD0 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140700FA4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140700FD4 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v7; // r12d
  int AccessStateFromSubjectContext; // ebx
  __int64 v10; // r14
  _DWORD *v11; // r15
  __m128i *v12; // r12
  __int64 v13; // rdi
  __int16 v14; // dx
  int v15; // eax
  int v16; // eax
  ULONG_PTR v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  ULONG_PTR v21; // r14
  __int64 v22; // r15
  __int64 v23; // rdi
  ULONG_PTR v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  _WORD v32[16]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v33[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int64 v35[38]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v36[5]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v37[28]; // [rsp+2B0h] [rbp+1B0h] BYREF

  BugCheckParameter2 = 0LL;
  v5 = a1;
  v30 = a1;
  v7 = a2;
  v27 = 0xFFFFFFFFLL;
  v28 = 0xFFFFFFFFLL;
  v29 = a2;
  LOBYTE(v26) = 0;
  memset(v35, 0, 0x128uLL);
  v35[19] = (__int64)&v35[18];
  v35[18] = (__int64)&v35[18];
  memset(&v35[27], 0, 0x50uLL);
  memset(v32, 0, sizeof(v32));
  v32[1] = -1;
  memset(v33, 0, sizeof(v33));
  v33[1] = -1;
  CmpAttachToRegistryProcess((__int64)&v35[21]);
  LODWORD(v35[20]) |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a5,
                                    v36,
                                    v37,
                                    4u,
                                    (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v10 = 0LL;
    if ( v7 )
    {
      v11 = (_DWORD *)(v5 + 40);
      while ( 1 )
      {
        LODWORD(v35[3]) = 0;
        v12 = (__m128i *)(v5 + 48 * v10);
        v34 = *((_QWORD *)v11 - 3);
        v13 = v34;
        memset(v33, 0, sizeof(v33));
        v33[1] = -1;
        memset(v32, 0, sizeof(v32));
        v14 = *(_WORD *)(v34 + 58);
        v32[1] = -1;
        AccessStateFromSubjectContext = CmpStartKcbStack((__int64)v33, v14);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb((__int64)v32, v13);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        v15 = CmpHashUnicodeComponent(v12);
        LODWORD(v25) = v15 + 37 * *(_DWORD *)(v13 + 8);
        v16 = CmpWalkOneLevel(
                v13,
                (__int64)v32,
                &BugCheckParameter2,
                (__int64)v33,
                (bool *)&v26,
                v12,
                v15,
                v25,
                0LL,
                1u,
                (__int64)v35);
        v17 = BugCheckParameter2;
        AccessStateFromSubjectContext = v16;
        if ( v16 < 0 )
          goto LABEL_18;
        if ( *(_DWORD *)(BugCheckParameter2 + 32) == -1 )
        {
          if ( *v11 == 1 || *(int *)(v34 + 32) < 0 )
            LODWORD(v35[3]) = 1;
          LODWORD(v35[0]) = 1;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v32);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v33);
          AccessStateFromSubjectContext = CmpCreateChild(
                                            (__int64)v32,
                                            (__int64)v33,
                                            (__int64)v36,
                                            (unsigned __int16 *)v12,
                                            (__int64)v35,
                                            512,
                                            3,
                                            0,
                                            0LL);
          CmpUnlockKcbStack((__int64)v33);
          CmpUnlockKcbStack((__int64)v32);
          if ( AccessStateFromSubjectContext < 0 )
          {
LABEL_18:
            if ( v17 )
              CmpDereferenceKeyControlBlock(v17);
            break;
          }
        }
        CmpUnlockHashEntryByKcb(v17);
        v7 = v29;
        *((_QWORD *)v11 - 2) = v17;
        *(v11 - 1) = *(_DWORD *)(v17 + 32);
        if ( (unsigned int)v10 >= v7 - 1 )
        {
          v5 = v30;
        }
        else
        {
          v18 = 6LL * (unsigned int)(v10 + 1);
          *(_QWORD *)(v30 + 8 * v18 + 16) = v17;
          v19 = *(_DWORD *)(v17 + 32);
          v5 = v30;
          *(_DWORD *)(v30 + 8 * v18 + 32) = v19;
        }
        BugCheckParameter2 = 0LL;
        CmpCleanupKcbStack((__int64)v33);
        CmpCleanupKcbStack((__int64)v32);
        v10 = (unsigned int)(v10 + 1);
        v11 += 12;
        if ( (unsigned int)v10 >= v7 )
          goto LABEL_16;
      }
      CmpCleanupKcbStack((__int64)v33);
      CmpCleanupKcbStack((__int64)v32);
    }
    else
    {
LABEL_16:
      v20 = *(_DWORD *)(v5 + 48LL * (v7 - 1) + 36);
      v21 = *(_QWORD *)(v5 + 48LL * (v7 - 1) + 24);
      HvMarkCellDirty(*(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32), 0LL);
      HvMarkCellDirty(a3, v20, 0LL);
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(a4 + 24) + 8LL))(
              *(_QWORD *)(a4 + 24),
              *(unsigned int *)(a4 + 32),
              &v27);
      if ( v22 )
      {
        v23 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(a3 + 8))(a3, v20, &v28);
        if ( v23 )
        {
          CmpLockTwoSecurityCachesExclusiveShared(a3, *(_QWORD *)(a4 + 24));
          AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 24), v22, a3, v23, v20);
          CmpUnlockTwoSecurityCaches(a3, *(_QWORD *)(a4 + 24));
          if ( AccessStateFromSubjectContext >= 0 )
          {
            CmpAssignSecurityToKcb(v21, *(unsigned int *)(v23 + 44), 0LL, 0, 0);
            *(_WORD *)(v21 + 178) |= 0x100u;
            *(_WORD *)(v23 + 2) |= 0x100u;
            *(_WORD *)(a4 + 178) |= 0x80u;
            *(_WORD *)(v22 + 2) |= 0x80u;
            AccessStateFromSubjectContext = 0;
          }
        }
        else
        {
          AccessStateFromSubjectContext = -1073741670;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a4 + 24) + 16LL))(*(_QWORD *)(a4 + 24), &v27);
        if ( v23 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v21 + 24) + 16LL))(*(_QWORD *)(v21 + 24), &v28);
      }
      else
      {
        AccessStateFromSubjectContext = -1073741670;
      }
    }
    SeDeleteAccessState(v36);
  }
  if ( (v35[20] & 1) != 0 )
  {
    CmpDetachFromRegistryProcess((__int64)&v35[21]);
    LODWORD(v35[20]) &= ~1u;
  }
  CmpCleanupParseContext((__int64)v35, 1);
  return (unsigned int)AccessStateFromSubjectContext;
}
