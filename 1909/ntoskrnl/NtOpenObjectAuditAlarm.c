/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140714AA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x1406231B0 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406232DC (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062340C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x1406236B8 (SeCheckAuditPrivilege.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  PUNICODE_STRING v12; // r14
  char PreviousMode; // r12
  NTSTATUS v15; // edi
  PVOID v16; // rdi
  NTSTATUS v17; // esi
  __int64 v18; // rdi
  ULONG PrivilegeCount; // r14d
  unsigned int v20; // ecx
  char *v21; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v23; // r12
  UNICODE_STRING *v25; // r14
  char v26; // al
  PVOID v27; // rdi
  BOOLEAN v28; // r13
  NTSTATUS v29; // ebx
  __int64 v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rdx
  ACL *v33; // rdx
  __int64 v34; // rax
  ACL *v35; // rcx
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A2h] [rbp-B6h] BYREF
  char v38; // [rsp+A3h] [rbp-B5h]
  char v39; // [rsp+A4h] [rbp-B4h]
  int v40; // [rsp+A8h] [rbp-B0h]
  PVOID v41; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int16 v42; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID Token; // [rsp+C0h] [rbp-98h] BYREF
  int v44[2]; // [rsp+C8h] [rbp-90h] BYREF
  int v45[2]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-80h] BYREF
  PVOID P; // [rsp+E0h] [rbp-78h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-68h] BYREF
  ULONG v50; // [rsp+110h] [rbp-48h]
  unsigned int v51; // [rsp+114h] [rbp-44h]
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = ObjectTypeName;
  *(_QWORD *)v45 = 0LL;
  *(_QWORD *)v44 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v48 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  v39 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v29 = -1073741727;
LABEL_55:
    SeReleaseSubjectContext(&SubjectContext);
    return v29;
  }
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v15 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 != -1073741816 )
    {
      v30 = (unsigned int)v15;
LABEL_51:
      SepAuditFailed(v30);
    }
    return v15;
  }
  v16 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v29 = -1073741659;
    goto LABEL_55;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v29 = -1073741703;
    goto LABEL_55;
  }
  v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 0, &v41);
  v40 = v17;
  if ( v17 >= 0 && v41 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v50 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v15 = -1073741811;
        v40 = -1073741811;
        goto LABEL_31;
      }
      v20 = 12 * PrivilegeCount + 8;
      v51 = v20;
      if ( 12 * PrivilegeCount != -8 )
      {
        v21 = (char *)Privileges + v20;
        if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v20;
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v20, 0x72506553u);
      v23 = PoolWithTag;
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        SeReleaseSecurityDescriptor(v41, v38, 0);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v40 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(PoolWithTag, Privileges, Size);
      *v23 = PrivilegeCount;
      PreviousMode = v38;
      v12 = ObjectTypeName;
    }
    else
    {
      v18 = 0x7FFFFFFF0000LL;
    }
    if ( HandleId )
    {
      if ( ((unsigned __int8)HandleId & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v48 = *(_QWORD *)HandleId;
    }
    if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
      v18 = (__int64)GenerateOnClose;
    *(_BYTE *)v18 = *(_BYTE *)v18;
    v15 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)v45);
    v40 = v15;
    if ( v15 >= 0 )
    {
      v15 = SepProbeAndCaptureString_U((unsigned __int64)v12, (__int64)v44);
      v40 = v15;
      if ( v15 >= 0 )
      {
        v15 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v46);
        v40 = v15;
      }
    }
LABEL_31:
    if ( v15 >= 0 )
    {
      v25 = *(UNICODE_STRING **)v44;
      v26 = SepAdtAuditObjectAccessWithContext(
              0LL,
              *(const UNICODE_STRING **)v44,
              AccessGranted,
              AccessGranted == 0,
              (__int64)&SubjectContext,
              0,
              &v42);
      v27 = v41;
      if ( !v26 )
        goto LABEL_33;
      v31 = *((_WORD *)v41 + 1);
      if ( (v31 & 0x10) == 0 )
        goto LABEL_70;
      if ( v31 >= 0 )
      {
        v33 = (ACL *)*((_QWORD *)v41 + 3);
        goto LABEL_72;
      }
      v32 = *((unsigned int *)v41 + 3);
      if ( (_DWORD)v32 )
        v33 = (ACL *)((char *)v41 + v32);
      else
LABEL_70:
        v33 = 0LL;
LABEL_72:
      if ( (v31 & 0x10) == 0 )
        goto LABEL_76;
      if ( v31 >= 0 )
      {
        v35 = (ACL *)*((_QWORD *)v41 + 3);
        goto LABEL_78;
      }
      v34 = *((unsigned int *)v41 + 3);
      if ( (_DWORD)v34 )
        v35 = (ACL *)((char *)v41 + v34);
      else
LABEL_76:
        v35 = 0LL;
LABEL_78:
      SeExamineSacl(v35, v33, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, &GenerateAlarm);
      if ( GenerateAudit || GenerateAlarm )
      {
        v27 = v41;
        v25 = *(UNICODE_STRING **)v44;
        v28 = SepAdtOpenObjectAuditAlarm(
                v42,
                v45[0],
                (unsigned __int64)&v48 & -(__int64)(HandleId != 0LL),
                v44[0],
                v46,
                v41,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                DesiredAccess,
                GrantedAccess,
                (__int64)P,
                AccessGranted,
                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                2,
                0LL,
                0,
                0LL,
                0LL,
                0LL);
LABEL_34:
        if ( !GenerateAudit && !GenerateAlarm && Privileges && AccessGranted )
        {
          v25 = *(UNICODE_STRING **)v44;
          SepAdtPrivilegeObjectAuditAlarm(
            *(const int **)v45,
            *(unsigned __int16 **)v44,
            (unsigned __int16 *)v46,
            v48,
            (__int64)Token,
            (__int64)SubjectContext.PrimaryToken,
            (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
            DesiredAccess,
            (int *)P,
            AccessGranted);
          v28 = 0;
          v27 = v41;
        }
        SeReleaseSecurityDescriptor(v27, PreviousMode, 0);
        if ( *(_QWORD *)v45 )
          RtlpSysVolFree(*(void **)v45);
        if ( v25 )
          RtlpSysVolFree(v25);
        if ( v46 )
          RtlpSysVolFree((void *)v46);
        if ( P )
          ExFreePoolWithTag(P, 0);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        *GenerateOnClose = v28;
        return 0;
      }
LABEL_33:
      v28 = 0;
      goto LABEL_34;
    }
    if ( *(_QWORD *)v45 )
      RtlpSysVolFree(*(void **)v45);
    if ( *(_QWORD *)v44 )
      RtlpSysVolFree(*(void **)v44);
    if ( v46 )
      RtlpSysVolFree((void *)v46);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSecurityDescriptor(v41, PreviousMode, 0);
    ObfDereferenceObject(Token);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 == -1073741670 )
    {
      v30 = 3221225626LL;
      goto LABEL_51;
    }
    return v15;
  }
  ObfDereferenceObject(v16);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v17 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v17;
}
