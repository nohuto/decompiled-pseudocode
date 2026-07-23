/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x1406DA630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x1405BC684 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405BC7A8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x1405BCB28 (SeCheckAuditPrivilege.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  PVOID v25; // r14
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
  PVOID v44; // [rsp+C8h] [rbp-90h] BYREF
  PVOID P; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v46; // [rsp+D8h] [rbp-80h] BYREF
  PVOID v47; // [rsp+E0h] [rbp-78h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-68h] BYREF
  ULONG v50; // [rsp+110h] [rbp-48h]
  unsigned int v51; // [rsp+114h] [rbp-44h]
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = ObjectTypeName;
  P = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v47 = 0LL;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v48 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  v39 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
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
      v47 = PoolWithTag;
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
    v15 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    v40 = v15;
    if ( v15 >= 0 )
    {
      v15 = SepProbeAndCaptureString_U((unsigned __int64)v12, (__int64)&v44);
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
      v25 = v44;
      v26 = SepAdtAuditObjectAccessWithContext(
              0LL,
              (const UNICODE_STRING *)v44,
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
        v25 = v44;
        v28 = SepAdtOpenObjectAuditAlarm(
                v42,
                (int)P,
                (unsigned __int64)&v48 & -(__int64)(HandleId != 0LL),
                (int)v44,
                (__int64)v46,
                v41,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                DesiredAccess,
                GrantedAccess,
                (__int64)v47,
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
          v25 = v44;
          SepAdtPrivilegeObjectAuditAlarm(
            (const int *)P,
            (unsigned __int16 *)v44,
            (unsigned __int16 *)v46,
            v48,
            (__int64)Token,
            (__int64)SubjectContext.PrimaryToken,
            (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
            DesiredAccess,
            (int *)v47,
            AccessGranted);
          v28 = 0;
          v27 = v41;
        }
        SeReleaseSecurityDescriptor(v27, PreviousMode, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v25 )
          ExFreePoolWithTag(v25, 0);
        if ( v46 )
          ExFreePoolWithTag(v46, 0);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        *GenerateOnClose = v28;
        return 0;
      }
LABEL_33:
      v28 = 0;
      goto LABEL_34;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
    if ( v46 )
      ExFreePoolWithTag(v46, 0);
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
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
