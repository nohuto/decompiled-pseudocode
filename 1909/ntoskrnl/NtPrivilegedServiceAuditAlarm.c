/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x140621BE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x1406231B0 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140623360 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x1406236B8 (SeCheckAuditPrivilege.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rdx
  int v11; // ebx
  PVOID v12; // rsi
  ULONG PrivilegeCount; // ebx
  SIZE_T v14; // rdx
  char *v15; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-58h]
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  ULONG *v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-30h] BYREF
  ULONG v28; // [rsp+88h] [rbp-10h]
  int v29; // [rsp+8Ch] [rbp-Ch]

  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v26 = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v10) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v10) )
  {
    v11 = -1073741727;
LABEL_35:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v22 = v11;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v21 = (unsigned int)v11;
LABEL_33:
    SepAuditFailed(v21);
    return v11;
  }
  v12 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_35;
  }
  if ( SubsystemName && (v11 = SepProbeAndCaptureString_U(SubsystemName, &v26), v22 = v11, v11 < 0)
    || ServiceName && (v11 = SepProbeAndCaptureString_U(ServiceName, &v25), v22 = v11, v11 < 0) )
  {
    v17 = v24;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v28 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v11 = -1073741811;
      v17 = v24;
    }
    else
    {
      v14 = 12 * PrivilegeCount + 8;
      v29 = 12 * PrivilegeCount + 8;
      if ( 12 * PrivilegeCount != -8 )
      {
        v15 = (char *)Privileges + (unsigned int)v14;
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
      v17 = PoolWithTag;
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
        *v17 = PrivilegeCount;
        v11 = v22;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    v12 = Object;
  }
  if ( v11 < 0 )
  {
    if ( v26 )
      RtlpSysVolFree(v26);
    if ( v25 )
      RtlpSysVolFree(v25);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v21 = 3221225626LL;
    goto LABEL_33;
  }
  v18 = v25;
  v19 = v26;
  SepAdtPrivilegedServiceAuditAlarm(
    (unsigned int)&SubjectContext,
    v26,
    v25,
    (_DWORD)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v17,
    AccessGranted);
  if ( v19 )
    RtlpSysVolFree(v19);
  if ( v18 )
    RtlpSysVolFree(v18);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ObfDereferenceObject(v12);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
