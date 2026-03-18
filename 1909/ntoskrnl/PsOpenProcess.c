/*
 * XREFs of PsOpenProcess @ 0x1405D0200
 * Callers:
 *     NtOpenProcess @ 0x1405D0AA0 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x14065A520 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SePrivilegeCheck @ 0x1405CF200 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF8DC (SePrivilegedServiceAuditAlarm.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     PsLookupProcessThreadByCid @ 0x140678520 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(HANDLE *a1, ACCESS_MASK a2, __int64 a3, _OWORD *a4, char a5, KPROCESSOR_MODE a6)
{
  __int64 v9; // rcx
  bool v10; // al
  ULONG v11; // r14d
  char v12; // cl
  KPROCESSOR_MODE AccessMode; // r13
  int v14; // r14d
  GENERIC_MAPPING *v15; // rsi
  struct _KPROCESS *v16; // rbx
  int v17; // ebx
  int v18; // esi
  KPROCESSOR_MODE v19; // di
  LUID v20; // rbx
  BOOLEAN v21; // al
  BOOLEAN v22; // bl
  PEPROCESS v23; // rdi
  int v25; // r14d
  char v27; // [rsp+46h] [rbp-342h] BYREF
  KPROCESSOR_MODE v28; // [rsp+47h] [rbp-341h] BYREF
  ULONG HandleAttributes; // [rsp+48h] [rbp-340h]
  int v30; // [rsp+4Ch] [rbp-33Ch]
  ACCESS_MASK v31; // [rsp+50h] [rbp-338h]
  int Flink; // [rsp+58h] [rbp-330h]
  unsigned int v33; // [rsp+5Ch] [rbp-32Ch] BYREF
  ACCESS_MASK v34; // [rsp+60h] [rbp-328h] BYREF
  ULONG v35; // [rsp+64h] [rbp-324h] BYREF
  int v36; // [rsp+68h] [rbp-320h] BYREF
  ACCESS_MASK v37; // [rsp+70h] [rbp-318h] BYREF
  int v38; // [rsp+78h] [rbp-310h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-308h] BYREF
  HANDLE ProcessId[2]; // [rsp+88h] [rbp-300h] BYREF
  PVOID Object; // [rsp+98h] [rbp-2F0h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-2E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B0h] [rbp-2D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-2B8h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+F0h] [rbp-298h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp-278h] BYREF
  _QWORD v48[28]; // [rsp+1B0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp-F8h] BYREF
  ACCESS_MASK *v50; // [rsp+2A0h] [rbp-E8h]
  __int64 v51; // [rsp+2A8h] [rbp-E0h]
  int *v52; // [rsp+2B0h] [rbp-D8h]
  __int64 v53; // [rsp+2B8h] [rbp-D0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp-C8h] BYREF
  unsigned int *v55; // [rsp+2E0h] [rbp-A8h]
  __int64 v56; // [rsp+2E8h] [rbp-A0h]
  ACCESS_MASK *v57; // [rsp+2F0h] [rbp-98h]
  __int64 v58; // [rsp+2F8h] [rbp-90h]
  ULONG *v59; // [rsp+300h] [rbp-88h]
  __int64 v60; // [rsp+308h] [rbp-80h]
  char *v61; // [rsp+310h] [rbp-78h]
  __int64 v62; // [rsp+318h] [rbp-70h]
  KPROCESSOR_MODE *v63; // [rsp+320h] [rbp-68h]
  __int64 v64; // [rsp+328h] [rbp-60h]
  __int64 *v65; // [rsp+330h] [rbp-58h]
  __int64 v66; // [rsp+338h] [rbp-50h]

  v31 = a2;
  ProcessId[0] = 0LL;
  ProcessId[1] = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v48, 0, sizeof(v48));
  v30 = 0;
  Flink = -1;
  if ( a5 )
  {
    v9 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_QWORD *)(a3 + 16) != 0LL;
    v11 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v12 = 1;
      LOWORD(v11) = HandleAttributes;
    }
    else
    {
      v12 = 0;
    }
    AccessMode = a6;
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16) != 0LL;
    v25 = 73714;
    AccessMode = a6;
    if ( a6 )
      v25 = 7666;
    v11 = *(_DWORD *)(a3 + 24) & v25;
    HandleAttributes = v11;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v10 || !v12 )
  {
    v17 = -1073741776;
  }
  else
  {
    v14 = v11 & 0x400;
    while ( 1 )
    {
      v15 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
      v16 = KeGetCurrentThread()->ApcState.Process;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(KeGetCurrentThread(), v16, &SubjectContext);
      v17 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v48, a2, v15);
      if ( v17 < 0 )
        break;
      v18 = v30;
      if ( !v14 || (v19 = 1, v30) )
        v19 = AccessMode;
      v20 = SeDebugPrivilege;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectSecurityContext);
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Luid = v20;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      v21 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v19);
      v22 = v21;
      if ( v19 )
        SePrivilegedServiceAuditAlarm(0, (__int64 *)&SubjectSecurityContext, (__int64)&RequiredPrivileges, v21);
      SeReleaseSubjectContext(&SubjectSecurityContext);
      if ( v22 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      if ( ProcessId[1] )
      {
        v17 = PsLookupProcessThreadByCid(ProcessId, &Process, &Object);
        if ( v17 < 0 )
        {
LABEL_35:
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          break;
        }
        ObfDereferenceObject(Object);
      }
      else
      {
        v17 = PsLookupProcessByProcessId(ProcessId[0], &Process);
        if ( v17 < 0 )
          goto LABEL_35;
      }
      v23 = Process;
      v17 = ObOpenObjectByPointer(
              Process,
              HandleAttributes,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              AccessMode,
              &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      Flink = (int)v23[1].Header.WaitListHead.Flink;
      ObfDereferenceObjectWithTag(v23, 0x746C6644u);
      if ( v17 >= 0 )
      {
        *a1 = Handle;
        if ( v18 && stru_140425558.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425558, 0x400000000000uLL) )
        {
          v33 = (unsigned int)PsGetProcessId(v23);
          v34 = a2;
          v35 = HandleAttributes;
          v27 = a5;
          v28 = AccessMode;
          v43 = 0x1000000LL;
          v55 = &v33;
          v56 = 4LL;
          v57 = &v34;
          v58 = 4LL;
          v59 = &v35;
          v60 = 4LL;
          v61 = &v27;
          v62 = 1LL;
          v63 = &v28;
          v64 = 1LL;
          v65 = &v43;
          v66 = 8LL;
          TlgWrite(&stru_140425558, &unk_14039360B, 0LL, 0LL, 8u, &pData);
        }
        break;
      }
      if ( !v14 || v17 != -1073741790 || v30 )
        break;
      v30 = 1;
    }
  }
  v38 = v17;
  v37 = a2;
  v36 = Flink;
  UserData.Ptr = (ULONGLONG)&v36;
  *(_QWORD *)&UserData.Size = 4LL;
  v50 = &v37;
  v51 = 4LL;
  v52 = &v38;
  v53 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v17;
}
