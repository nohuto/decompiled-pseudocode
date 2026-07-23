/*
 * XREFs of PsOpenProcess @ 0x1406477E0
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x140614400 (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x140647C10 (NtOpenProcess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     PsLookupProcessThreadByCid @ 0x1406B4230 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE a6)
{
  _QWORD *v7; // r14
  char v8; // al
  bool v9; // cl
  KPROCESSOR_MODE v10; // di
  GENERIC_MAPPING *v11; // rbx
  int v12; // ebx
  LUID v13; // rbx
  BOOLEAN v14; // al
  BOOLEAN v15; // bl
  PEPROCESS v16; // rdi
  int v18; // edx
  KPROCESSOR_MODE AccessMode; // [rsp+28h] [rbp-2B0h]
  int HandleAttributes; // [rsp+44h] [rbp-294h]
  int Flink; // [rsp+50h] [rbp-288h]
  int v22; // [rsp+58h] [rbp-280h] BYREF
  ACCESS_MASK v23; // [rsp+60h] [rbp-278h] BYREF
  int v24; // [rsp+68h] [rbp-270h] BYREF
  HANDLE ProcessId[2]; // [rsp+70h] [rbp-268h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-258h] BYREF
  PVOID Object; // [rsp+88h] [rbp-250h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-248h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-240h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-220h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+D8h] [rbp-200h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v33[28]; // [rsp+190h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp-68h] BYREF
  ACCESS_MASK *v35; // [rsp+280h] [rbp-58h]
  __int64 v36; // [rsp+288h] [rbp-50h]
  int *v37; // [rsp+290h] [rbp-48h]
  __int64 v38; // [rsp+298h] [rbp-40h]

  v7 = (_QWORD *)a1;
  v8 = 0;
  ProcessId[0] = 0LL;
  ProcessId[1] = 0LL;
  Flink = -1;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    v10 = a6;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 16) != 0LL;
    v18 = 73714;
    v10 = a6;
    if ( a6 )
      v18 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v18;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v8 = 1;
    }
  }
  if ( v9 || !v8 )
  {
    v12 = -1073741776;
    goto LABEL_25;
  }
  v11 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  v12 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v33, a2, v11);
  if ( v12 >= 0 )
  {
    v13 = SeDebugPrivilege;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectSecurityContext);
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = v13;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v14 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v10);
    v15 = v14;
    if ( v10 )
      SePrivilegedServiceAuditAlarm(0LL, (__int64 *)&SubjectSecurityContext, (int *)&RequiredPrivileges, v14);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( v15 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ProcessId[1] )
    {
      v12 = PsLookupProcessThreadByCid(ProcessId, &Process, &Object);
      if ( v12 >= 0 )
      {
        ObfDereferenceObject(Object);
LABEL_23:
        AccessMode = v10;
        v16 = Process;
        v12 = ObOpenObjectByPointer(
                Process,
                HandleAttributes,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        Flink = (int)v16[1].Header.WaitListHead.Flink;
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
        if ( v12 >= 0 )
          *v7 = Handle;
        goto LABEL_25;
      }
    }
    else
    {
      v12 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v12 >= 0 )
        goto LABEL_23;
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_25:
  v24 = v12;
  v23 = a2;
  v22 = Flink;
  UserData.Ptr = (ULONGLONG)&v22;
  *(_QWORD *)&UserData.Size = 4LL;
  v35 = &v23;
  v36 = 4LL;
  v37 = &v24;
  v38 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v12;
}
