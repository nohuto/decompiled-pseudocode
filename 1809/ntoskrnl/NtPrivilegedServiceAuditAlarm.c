/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x1406C5A60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepProbeAndCaptureString_U @ 0x1405BC684 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x1405BCB28 (SeCheckAuditPrivilege.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // bl
  NTSTATUS v10; // ebx
  PVOID v11; // rsi
  ULONG PrivilegeCount; // ebx
  SIZE_T v13; // rdx
  char *v14; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v16; // rdi
  PVOID v17; // rbx
  PVOID v18; // r14
  __int64 v20; // rcx
  NTSTATUS v21; // [rsp+40h] [rbp-58h]
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  ULONG *v23; // [rsp+50h] [rbp-48h]
  PVOID v24; // [rsp+58h] [rbp-40h] BYREF
  PVOID P; // [rsp+60h] [rbp-38h] BYREF
  ULONG v26; // [rsp+68h] [rbp-30h]
  int v27; // [rsp+6Ch] [rbp-2Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-28h] BYREF

  v23 = 0LL;
  P = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v10 = -1073741727;
LABEL_35:
    SeReleaseSubjectContext(&SubjectContext);
    return v10;
  }
  v10 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v21 = v10;
  if ( v10 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v10 == -1073741816 )
      return v10;
    v20 = (unsigned int)v10;
LABEL_33:
    SepAuditFailed(v20);
    return v10;
  }
  v11 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v10 = -1073741659;
    goto LABEL_35;
  }
  if ( SubsystemName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P), v21 = v10, v10 < 0)
    || ServiceName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)ServiceName, (__int64)&v24), v21 = v10, v10 < 0) )
  {
    v16 = v23;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v26 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v10 = -1073741811;
      v16 = v23;
    }
    else
    {
      v13 = 12 * PrivilegeCount + 8;
      v27 = 12 * PrivilegeCount + 8;
      if ( 12 * PrivilegeCount != -8 )
      {
        v14 = (char *)Privileges + (unsigned int)v13;
        if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v13, 0x72506553u);
      v16 = PoolWithTag;
      v23 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
        *v16 = PrivilegeCount;
        v10 = v21;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    v11 = Object;
  }
  if ( v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v11);
    if ( v10 != -1073741670 )
      return v10;
    v20 = 3221225626LL;
    goto LABEL_33;
  }
  v17 = v24;
  v18 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (int)&SubjectContext,
    (const int *)P,
    (unsigned __int16 *)v24,
    (__int64)v11,
    (__int64)SubjectContext.PrimaryToken,
    (int *)v16,
    AccessGranted);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  ObfDereferenceObject(v11);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
