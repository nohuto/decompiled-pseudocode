/*
 * XREFs of PspSetQuotaLimits @ 0x1406D8200
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x140307660 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140307914 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF3DC (SePrivilegedServiceAuditAlarm.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     PspAssignProcessQuotaBlock @ 0x140667248 (PspAssignProcessQuotaBlock.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PspSinglePrivCheck @ 0x1406D85FC (PspSinglePrivCheck.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  NTSTATUS result; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r12d
  char v13; // r15
  _QWORD *v14; // r14
  char v15; // r13
  __int64 v16; // r14
  bool v17; // zf
  int v18; // r14d
  signed __int64 *v19; // rdi
  PACCESS_TOKEN v20; // rbx
  char v21; // [rsp+40h] [rbp-118h]
  char v22; // [rsp+41h] [rbp-117h]
  char v23; // [rsp+42h] [rbp-116h]
  char v24; // [rsp+43h] [rbp-115h] BYREF
  int v25; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v28; // [rsp+58h] [rbp-100h]
  _OWORD v29[6]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE SubjectContext[56]; // [rsp+C0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  memset(v29, 0, 0x58uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  memset(SubjectContext, 0, sizeof(SubjectContext));
  if ( a3 == 48 )
  {
    v29[0] = *(_OWORD *)a2;
    v29[1] = *(_OWORD *)(a2 + 16);
    v29[2] = *(_OWORD *)(a2 + 32);
    memset(&v29[3], 0, 0x28uLL);
    v21 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v21 = 0;
    v29[0] = *(_OWORD *)a2;
    v29[1] = *(_OWORD *)(a2 + 16);
    v29[2] = *(_OWORD *)(a2 + 32);
    v29[3] = *(_OWORD *)(a2 + 48);
    v29[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v29[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v29[5] & 0xFFFFFFE0) != 0 || (v29[5] & 3) == 3 || (v29[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v29[5] & 1) != 0 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 0;
    if ( (v29[5] & 2) != 0 )
      v9 = 8;
  }
  if ( (v29[5] & 4) != 0 )
  {
    v9 |= 1u;
  }
  else if ( (v29[5] & 8) != 0 )
  {
    v9 |= 2u;
  }
  if ( *((_QWORD *)&v29[3] + 1) | *(_QWORD *)&v29[4] | *((_QWORD *)&v29[4] + 1) | DWORD1(v29[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
    {
      if ( *(_QWORD *)&v29[1] && *((_QWORD *)&v29[1] + 1) )
      {
        if ( v29[1] == __PAIR128__(-1LL, -1LL) )
        {
          v22 = 1;
          LOBYTE(v25) = 0;
          v23 = 0;
        }
        else
        {
          v22 = 0;
          LOBYTE(v11) = a4;
          v25 = PspSinglePrivCheck(&PspSystemQuotaBlock, v10, v11, SubjectContext);
          v23 = 1;
        }
        v13 = 0;
        v14 = Object;
        v28 = Object;
        do
        {
          v15 = 0;
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          --CurrentThread->SpecialApcDisable;
          v16 = v14[119];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 848) & 1) != 0 )
            {
              v9 = 1;
              LOBYTE(v25) = 1;
              v15 = 1;
              if ( !v22 )
                v29[1] = *(_OWORD *)(v16 + 792);
            }
            PspLockWorkingSetChangeExclusiveUnsafe();
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          }
          v12 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v29[1],
                  *((unsigned __int64 *)&v29[1] + 1),
                  0,
                  v25,
                  v9,
                  &v24);
          if ( v12 < 0 && v15 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v9);
          if ( v16 )
            PspUnlockWorkingSetChangeExclusiveUnsafe();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeUnstackDetachProcess(&ApcState);
          if ( v24 == 1 && !v15 )
            v13 = 1;
          v17 = v28[119] == v16;
          v14 = v28;
        }
        while ( !v17 );
        if ( v23 == 1 && SubjectContext[52] )
        {
          if ( v13 == 1 )
            SePrivilegedServiceAuditAlarm(
              (int)L"$&",
              (__int64 *)SubjectContext,
              (__int64)&SubjectContext[32],
              SubjectContext[53]);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
        }
      }
    }
    else
    {
      if ( v21 == 1 )
      {
        memset(v29, 0, 0x58uLL);
        LODWORD(v29[5]) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v18 = -1073741727;
LABEL_53:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v18;
      }
      v19 = (signed __int64 *)Object;
      v20 = PsReferencePrimaryToken((PEPROCESS)Object);
      v18 = PspAssignProcessQuotaBlock((__int64)v29, (__int64)v19, (__int64)v20);
      ObFastDereferenceObject(v19 + 108, (unsigned __int64)v20);
      if ( v18 < 0 )
        goto LABEL_53;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v12;
  }
  return result;
}
