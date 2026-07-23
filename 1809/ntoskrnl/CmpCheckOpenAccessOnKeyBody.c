/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x140597210
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCheckKeyOwnerForPca @ 0x140581A4C (CmpCheckKeyOwnerForPca.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x140581AA0 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140597A64 (CmpVEPerformOpenAccessCheck.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmRmIsKCBVisible @ 0x14069AAF0 (CmRmIsKCBVisible.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 *     CmpSetAccessStateForBackupRestore @ 0x140706890 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 AccessMode,
        char a6,
        __int64 a7,
        _BYTE *a8,
        _DWORD *a9)
{
  _DWORD *v9; // rbx
  _WORD *v10; // r15
  __int64 SecurityDescriptorForKcbStack; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  unsigned __int8 v16; // dl
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  int started; // edi
  __int16 v21; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v23; // r14
  PPRIVILEGE_SET v24; // rsi
  int v25; // eax
  __int64 NextElement; // rax
  int v27; // ecx
  __int64 v28; // r14
  struct _PRIVILEGE_SET *v29; // r15
  __int16 v30; // di
  __int16 v31; // bx
  SIZE_T v32; // rbx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  NTSTATUS v34; // ebx
  __int64 v35; // r10
  __int64 v36; // r10
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 PrevElement; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v43; // r14
  struct _KTHREAD *v44; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v46; // al
  struct _PRIVILEGE_SET *v47; // rsi
  BOOLEAN v48; // di
  ACCESS_MASK v49; // eax
  PERESOURCE *ClientToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  BOOLEAN v54; // al
  int v55; // ecx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-71h] BYREF
  int v58; // [rsp+54h] [rbp-6Dh]
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-69h] BYREF
  __int64 v60; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v61[2]; // [rsp+68h] [rbp-59h]
  PPRIVILEGE_SET v62; // [rsp+78h] [rbp-49h]
  __int64 v63; // [rsp+80h] [rbp-41h] BYREF
  __int64 v64; // [rsp+88h] [rbp-39h] BYREF
  PPRIVILEGE_SET v65; // [rsp+90h] [rbp-31h] BYREF
  PPRIVILEGE_SET v66[3]; // [rsp+98h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+B0h] [rbp-11h]

  v9 = (_DWORD *)a3;
  LOBYTE(v58) = 0;
  v10 = a1;
  SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStackEx(a2, a7, (__int64)(a1 + 2));
  v15 = a6;
  if ( !a6
    || (LOBYTE(v14) = 1, (int)CmpSetAccessStateForBackupRestore(a4, AccessMode, SecurityDescriptorForKcbStack, v14) >= 0) )
  {
    OriginalDesiredAccess = a4->OriginalDesiredAccess;
    v18 = *((_QWORD *)v10 + 1);
    memset(v66, 0, sizeof(v66));
    v19 = *(_QWORD *)(v18 + 24);
    Privileges = 0LL;
    WORD1(v66[0]) = -1;
    if ( (*(_DWORD *)(v19 + 160) & 0x100000) != 0 )
    {
      if ( (OriginalDesiredAccess & 0xD0026) != 0 )
      {
        if ( (OriginalDesiredAccess & 0xD0002) != 0 )
        {
          started = -1073741790;
        }
        else if ( (*(_DWORD *)(v19 + 4152) & 0x2000) != 0 )
        {
          if ( *(_BYTE *)(v18 + 57) )
          {
            started = -1073741790;
          }
          else
          {
            started = CmpStartKcbStackForTopLayerKcb(v66, v18);
            if ( started >= 0 )
            {
              v21 = *(_WORD *)(v18 + 58) - 1;
              if ( v21 >= 0 )
              {
                while ( 1 )
                {
                  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v66);
                  WORD1(v66[0]) = v21;
                  v23 = KcbAtLayerHeight;
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(v66, 0LL) )
                    break;
                  if ( (*(_DWORD *)(*(_QWORD *)(v23 + 24) + 160LL) & 0x100000) == 0 )
                  {
                    started = 0;
                    goto LABEL_24;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 24) + 4152LL) & 0x2000) == 0 || *(_BYTE *)(v18 + 57) )
                    break;
                  if ( --v21 < 0 )
                    goto LABEL_24;
                }
                started = -1073741790;
LABEL_24:
                v15 = a6;
              }
              v9 = (_DWORD *)a3;
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
      *a9 = -1073741790;
LABEL_98:
      v16 = 0;
      goto LABEL_99;
    }
    if ( v15 && !a4->RemainingDesiredAccess || !a4->OriginalDesiredAccess && (*v9 & 0x1000) != 0 )
    {
LABEL_90:
      v16 = 1;
      *a9 = 0;
      goto LABEL_99;
    }
    v24 = 0LL;
    v60 = 4294901760LL;
    v25 = *((_DWORD *)v10 + 12);
    v61[0] = 0LL;
    v61[1] = 0LL;
    v63 = 0LL;
    if ( (v25 & 9) == 0 )
    {
      if ( !a7 )
        goto LABEL_42;
      NextElement = CmListGetNextElement(*((_QWORD *)v10 + 1) + 200LL, &v63, 32LL);
      if ( !NextElement )
        goto LABEL_42;
      while ( 1 )
      {
        v27 = *(_DWORD *)(NextElement + 68);
        if ( v27 == 2 || v27 == 11 )
          break;
        NextElement = CmListGetNextElement(v14 + 200, &v63, 32LL);
        if ( !NextElement )
          goto LABEL_42;
      }
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
      {
LABEL_42:
        v28 = *((_QWORD *)v10 + 1);
        v29 = 0LL;
        v30 = *(_WORD *)(v28 + 58);
        v31 = v30;
        if ( v30 >= 2 && v30 != 1 )
        {
          v32 = 8LL * (unsigned int)(v30 - 1);
          TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v32, 0x35364D43u);
          v29 = TransientPoolWithTag;
          if ( !TransientPoolWithTag )
          {
            v10 = a1;
            v34 = -1073741670;
            v15 = a6;
LABEL_84:
            v48 = 0;
            goto LABEL_85;
          }
          memset(TransientPoolWithTag, 0, v32);
          v31 = *(_WORD *)(v28 + 58);
        }
        LOWORD(v60) = v30;
        v62 = v29;
        WORD1(v60) = v31;
        if ( v31 )
        {
          v35 = *(_QWORD *)(v28 + 184);
          if ( v35 )
          {
            do
            {
              CmpSetKcbAtLayerHeight(&v60, (unsigned __int16)v31, *(_QWORD *)(v35 + 16));
              v35 = *(_QWORD *)(v36 + 24);
              --v31;
            }
            while ( v35 );
            v29 = v62;
            v31 = WORD1(v60);
          }
        }
        else
        {
          v61[0] = v28;
        }
        for ( AccessStatus = 0; v31 >= 0; --v31 )
        {
          if ( v31 < 2 )
            v37 = v61[v31];
          else
            v37 = *((_QWORD *)v29 + v31 - 2);
          if ( *(_WORD *)(v37 + 58) && *(_BYTE *)(v37 + 57) == 1 )
            break;
          if ( *(_DWORD *)(v37 + 32) != -1 )
          {
            if ( (unsigned __int8)CmRmIsKCBVisible(v37, a7) )
            {
              v24 = (PPRIVILEGE_SET)v37;
              if ( *(_WORD *)(v37 + 58) )
              {
                if ( *(_BYTE *)(v37 + 57) )
                  break;
              }
            }
          }
        }
        v38 = *(_QWORD *)&v24[4].PrivilegeCount;
        if ( a7 )
        {
          v64 = 0LL;
          PrevElement = CmListGetPrevElement(&v24[10], &v64, v13, v14);
          if ( PrevElement )
          {
            while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a7)
                 || *(_DWORD *)(PrevElement + 68) != 9 )
            {
              PrevElement = CmListGetPrevElement(&v24[10], &v64, v40, v41);
              if ( !PrevElement )
                goto LABEL_70;
            }
            v38 = *(_QWORD *)(PrevElement + 88);
          }
        }
LABEL_70:
        CurrentThread = KeGetCurrentThread();
        v43 = (void *)(v38 + 32);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6), 1u);
        if ( a4->SubjectSecurityContext.ClientToken )
        {
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.ClientToken + 6), 1u);
        }
        RemainingDesiredAccess = a4->RemainingDesiredAccess;
        GrantedAccess = 0;
        v65 = 0LL;
        v46 = SeAccessCheck(
                v43,
                &a4->SubjectSecurityContext,
                1u,
                RemainingDesiredAccess,
                a4->PreviouslyGrantedAccess,
                &v65,
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                AccessMode,
                &GrantedAccess,
                &AccessStatus);
        v47 = v65;
        v48 = v46;
        if ( v65 )
        {
          SeAppendPrivileges(a4, v65);
          CmSiFreeMemory(v47);
        }
        if ( v48 )
        {
          v49 = GrantedAccess;
          a4->PreviouslyGrantedAccess |= GrantedAccess;
          a4->RemainingDesiredAccess &= ~(v49 | 0x2000000);
        }
        v10 = a1;
        a1[24] |= 2u;
        if ( a7 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            a1,
            0LL,
            v43,
            a4,
            0,
            v48,
            AccessMode,
            (GUID *)(a7 + 88),
            &a4->GenerateOnClose);
        }
        else if ( AccessMode )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            a1,
            0LL,
            v43,
            a4,
            0,
            v48,
            AccessMode,
            0LL,
            &a4->GenerateOnClose);
        }
        a1[24] &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ClientToken = (PERESOURCE *)a4->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          ExReleaseResourceLite(ClientToken[6]);
          KeLeaveCriticalRegion();
        }
        v24 = v62;
        v34 = AccessStatus;
        v15 = a6;
LABEL_85:
        if ( v24 )
          CmSiFreeMemory(v24);
        if ( v48 )
          goto LABEL_90;
        if ( !v15 )
        {
          if ( (int)CmpVEPerformOpenAccessCheck(v10, a3, v34) >= 0 )
            goto LABEL_90;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
            ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
            if ( (unsigned int)MmGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId
              && (a4->RemainingDesiredAccess & 0xD0026) != 0 )
            {
              v54 = CmpCheckKeyOwnerForPca(a2, a7);
              v55 = (unsigned __int8)v58;
              if ( v54 )
                v55 = 1;
              v58 = v55;
            }
          }
        }
        *a9 = -1073741790;
        goto LABEL_98;
      }
    }
    v34 = -1073741444;
    goto LABEL_84;
  }
  v16 = 0;
  *a9 = -1073741790;
LABEL_99:
  *a8 = v58;
  return v16;
}
