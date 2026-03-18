/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x140687250
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x14012AA90 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCheckKeyOwnerForPca @ 0x1405B0664 (CmpCheckKeyOwnerForPca.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmListGetPrevElement @ 0x140631BC8 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpIsKeyStackDeleted @ 0x1406334C0 (CmpIsKeyStackDeleted.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406AD8A4 (CmpVEPerformOpenAccessCheck.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406D5424 (CmpSetAccessStateForBackupRestore.c)
 *     CmpSetKcbAtLayerHeight @ 0x140833818 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 AccessMode,
        char a6,
        struct _LOOKASIDE_LIST_EX *a7,
        bool *a8,
        _DWORD *a9)
{
  __int16 v9; // r10
  __int64 v10; // r11
  _WORD *i; // r15
  __int64 v14; // rcx
  __int16 v15; // ax
  struct _LOOKASIDE_LIST_EX *v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 PrevElement; // rbx
  char v20; // r14
  __int64 v21; // rsi
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v23; // rdx
  int started; // edi
  __int16 v25; // bx
  __int16 v26; // r15
  __int64 KcbAtLayerHeight; // rax
  __int64 v28; // r14
  unsigned __int8 v29; // dl
  struct _PRIVILEGE_SET *v30; // rbx
  int v31; // eax
  KPROCESSOR_MODE v32; // r15
  NTSTATUS v33; // edi
  BOOLEAN v34; // si
  __int64 v35; // rsi
  struct _PRIVILEGE_SET *v36; // r15
  __int16 v37; // di
  __int64 v38; // rdx
  SIZE_T v39; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v41; // r10
  __int64 v42; // r10
  __int64 j; // rdi
  __int64 v44; // rax
  __int16 v45; // cx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v47; // rdi
  struct _KTHREAD *v48; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v50; // al
  struct _PRIVILEGE_SET *v51; // r14
  ACCESS_MASK v52; // eax
  __int16 v53; // ax
  PERESOURCE *ClientToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+20h] [rbp-91h]
  bool v60; // [rsp+50h] [rbp-61h]
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5Dh] BYREF
  __int64 v62; // [rsp+58h] [rbp-59h] BYREF
  PPRIVILEGE_SET v63; // [rsp+60h] [rbp-51h] BYREF
  __int64 v64; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v65[2]; // [rsp+70h] [rbp-41h]
  struct _PRIVILEGE_SET *v66; // [rsp+80h] [rbp-31h]
  PPRIVILEGE_SET v67[3]; // [rsp+88h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+A0h] [rbp-11h]
  NTSTATUS AccessStatus; // [rsp+F8h] [rbp+47h] BYREF
  __int64 v71; // [rsp+100h] [rbp+4Fh]

  v71 = a3;
  v9 = *(_WORD *)(a2 + 2);
  v10 = 0LL;
  v60 = 0;
  for ( i = a1; v9 >= 0; --v9 )
  {
    if ( v9 < 2 )
      v14 = *(_QWORD *)(a2 + 8LL * v9 + 8);
    else
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v9 - 16);
    v15 = *(_WORD *)(v14 + 66);
    if ( v15 && *(_BYTE *)(v14 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v14 + 40) != -1 )
    {
      v10 = v14;
      if ( v15 )
      {
        if ( *(_BYTE *)(v14 + 65) )
          break;
      }
    }
  }
  v16 = a7;
  v17 = *(_QWORD *)(v10 + 88);
  if ( a7 )
  {
    v18 = v10 + 208;
    v62 = 0LL;
    PrevElement = CmListGetPrevElement(v10 + 208, &v62);
    if ( PrevElement )
    {
      while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), (__int64)v16) || *(_DWORD *)(PrevElement + 68) != 9 )
      {
        PrevElement = CmListGetPrevElement(v18, &v62);
        if ( !PrevElement )
          goto LABEL_18;
        v16 = a7;
      }
      v17 = *(_QWORD *)(PrevElement + 88);
    }
  }
LABEL_18:
  v20 = a6;
  if ( a6 )
  {
    LOBYTE(v16) = 1;
    if ( (int)CmpSetAccessStateForBackupRestore(a4, AccessMode, v17 + 32, v16) < 0 )
      goto LABEL_20;
  }
  v21 = *((_QWORD *)i + 1);
  OriginalDesiredAccess = a4->OriginalDesiredAccess;
  memset(v67, 0, sizeof(v67));
  v23 = *(_QWORD *)(v21 + 32);
  Privileges = 0LL;
  WORD1(v67[0]) = -1;
  if ( (*(_DWORD *)(v23 + 160) & 0x100000) != 0 )
  {
    if ( (OriginalDesiredAccess & 0xD0026) != 0 )
    {
      if ( (OriginalDesiredAccess & 0xD0002) != 0 )
      {
        started = -1073741790;
      }
      else if ( (*(_DWORD *)(v23 + 4152) & 0x2000) != 0 )
      {
        if ( *(_BYTE *)(v21 + 65) )
        {
          started = -1073741790;
        }
        else
        {
          started = CmpStartKcbStackForTopLayerKcb((__int64)v67, v21, a3, v16);
          if ( started >= 0 )
          {
            v25 = *(_WORD *)(v21 + 66) - 1;
            if ( v25 >= 0 )
            {
              while ( 1 )
              {
                v26 = v25;
                KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v67, v25);
                WORD1(v67[0]) = v25;
                v28 = KcbAtLayerHeight;
                if ( CmpIsKeyStackDeleted((__int64)v67, 0LL) )
                  break;
                if ( (*(_DWORD *)(*(_QWORD *)(v28 + 32) + 160LL) & 0x100000) == 0 )
                {
                  started = 0;
                  goto LABEL_41;
                }
                if ( (*(_DWORD *)(*(_QWORD *)(v21 + 32) + 4152LL) & 0x2000) == 0 || *(_BYTE *)(v21 + 65) )
                  break;
                --v25;
                if ( v26 <= 0 )
                  goto LABEL_41;
              }
              started = -1073741790;
LABEL_41:
              v20 = a6;
              i = a1;
            }
          }
        }
      }
      else
      {
        started = -1073741790;
      }
    }
    else
    {
      started = 0;
    }
  }
  else
  {
    started = 0;
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( started < 0 )
  {
LABEL_20:
    *a9 = -1073741790;
LABEL_94:
    v29 = 0;
    goto LABEL_95;
  }
  if ( v20 && !a4->RemainingDesiredAccess || !a4->OriginalDesiredAccess && (*(_DWORD *)v71 & 0x1000) != 0 )
    goto LABEL_47;
  v30 = 0LL;
  v64 = 4294901760LL;
  v31 = *((_DWORD *)i + 12);
  v65[0] = 0LL;
  v65[1] = 0LL;
  if ( (v31 & 9) != 0 )
  {
    v32 = AccessMode;
    v33 = -1073741444;
    v34 = 0;
    goto LABEL_84;
  }
  v35 = *((_QWORD *)i + 1);
  v36 = 0LL;
  v37 = *(_WORD *)(v35 + 66);
  v38 = (unsigned __int16)v37;
  if ( v37 < 2 || v37 == 1 )
    goto LABEL_57;
  v39 = 8LL * (unsigned int)(v37 - 1);
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v39, 0x35364D43u, v16);
  v36 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v39);
    v38 = *(unsigned __int16 *)(v35 + 66);
LABEL_57:
    LOWORD(v64) = v37;
    v66 = v36;
    WORD1(v64) = v38;
    if ( (_WORD)v38 )
    {
      v41 = *(_QWORD *)(v35 + 192);
      if ( v41 )
      {
        do
        {
          CmpSetKcbAtLayerHeight(&v64, v38, *(_QWORD *)(v41 + 16));
          v41 = *(_QWORD *)(v42 + 24);
          LOWORD(v38) = v38 - 1;
        }
        while ( v41 );
        v36 = v66;
        LOWORD(v38) = WORD1(v64);
      }
    }
    else
    {
      v65[0] = v35;
    }
    AccessStatus = 0;
    for ( j = 0LL; (v38 & 0x8000u) == 0LL; LOWORD(v38) = v38 - 1 )
    {
      if ( (__int16)v38 < 2 )
        v44 = v65[(__int16)v38];
      else
        v44 = *((_QWORD *)v36 + (__int16)v38 - 2);
      v45 = *(_WORD *)(v44 + 66);
      if ( v45 && *(_BYTE *)(v44 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v44 + 40) != -1 )
      {
        j = v44;
        if ( v45 )
        {
          if ( *(_BYTE *)(v44 + 65) )
            break;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v47 = *(_QWORD *)(j + 88);
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( a4->SubjectSecurityContext.ClientToken )
    {
      v48 = KeGetCurrentThread();
      --v48->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v32 = AccessMode;
    RemainingDesiredAccess = a4->RemainingDesiredAccess;
    GrantedAccess = 0;
    PreviouslyGrantedAccess = a4->PreviouslyGrantedAccess;
    v63 = 0LL;
    v50 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)(v47 + 32),
            &a4->SubjectSecurityContext,
            1u,
            RemainingDesiredAccess,
            PreviouslyGrantedAccess,
            &v63,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            AccessMode,
            &GrantedAccess,
            &AccessStatus);
    v51 = v63;
    v34 = v50;
    if ( v63 )
    {
      SeAppendPrivileges(a4, v63);
      CmSiFreeMemory(v51);
    }
    if ( v34 )
    {
      v52 = GrantedAccess;
      a4->PreviouslyGrantedAccess |= GrantedAccess;
      a4->RemainingDesiredAccess &= ~(v52 | 0x2000000);
    }
    a1[24] |= 2u;
    v53 = a1[24];
    if ( v32 )
    {
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        a1,
        0LL,
        (PSECURITY_DESCRIPTOR)(v47 + 32),
        a4,
        0,
        v34,
        v32,
        0LL,
        &a4->GenerateOnClose);
      v53 = a1[24];
    }
    a1[24] = v53 & 0xFFFD;
    ExReleaseResourceLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegion();
    ClientToken = (PERESOURCE *)a4->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegion();
    }
    v33 = AccessStatus;
    v30 = v66;
    goto LABEL_83;
  }
  v32 = AccessMode;
  v33 = -1073741670;
  v34 = 0;
LABEL_83:
  v20 = a6;
LABEL_84:
  if ( v30 )
    CmSiFreeMemory(v30);
  if ( !v34 )
  {
    if ( v20 )
    {
LABEL_93:
      *a9 = -1073741790;
      goto LABEL_94;
    }
    if ( (int)CmpVEPerformOpenAccessCheck(a1, (BOOLEAN)a7, a4, v32, v71, v33) < 0 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
        if ( (unsigned int)MmGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId
          && (a4->RemainingDesiredAccess & 0xD0026) != 0 )
        {
          v60 = CmpCheckKeyOwnerForPca(a2) != 0;
        }
      }
      goto LABEL_93;
    }
  }
LABEL_47:
  v29 = 1;
  *a9 = 0;
LABEL_95:
  *a8 = v60;
  return v29;
}
