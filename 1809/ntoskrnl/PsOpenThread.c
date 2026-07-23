/*
 * XREFs of PsOpenThread @ 0x140612DF0
 * Callers:
 *     NtOpenThread @ 0x140612DC0 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1406B8720 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1406B4230 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  _QWORD *v7; // r12
  bool v8; // cl
  ULONG v9; // esi
  char v10; // al
  KPROCESSOR_MODE AccessMode; // r14
  NTSTATUS v12; // edi
  PETHREAD Thread; // [rsp+48h] [rbp-240h] BYREF
  HANDLE ThreadId[2]; // [rsp+50h] [rbp-238h] BYREF
  ULONG HandleAttributes; // [rsp+60h] [rbp-228h]
  int v17; // [rsp+68h] [rbp-220h] BYREF
  int v18; // [rsp+70h] [rbp-218h] BYREF
  unsigned int v19; // [rsp+78h] [rbp-210h] BYREF
  NTSTATUS v20; // [rsp+80h] [rbp-208h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-200h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1F8h] BYREF
  char v23[224]; // [rsp+130h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp-78h] BYREF
  int *v25; // [rsp+220h] [rbp-68h]
  int v26; // [rsp+228h] [rbp-60h]
  int v27; // [rsp+22Ch] [rbp-5Ch]
  int *v28; // [rsp+230h] [rbp-58h]
  int v29; // [rsp+238h] [rbp-50h]
  int v30; // [rsp+23Ch] [rbp-4Ch]
  NTSTATUS *v31; // [rsp+240h] [rbp-48h]
  int v32; // [rsp+248h] [rbp-40h]
  int v33; // [rsp+24Ch] [rbp-3Ch]

  v7 = (_QWORD *)a1;
  ThreadId[0] = 0LL;
  ThreadId[1] = 0LL;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
      v9 = HandleAttributes;
    }
    else
    {
      v10 = 0;
    }
    AccessMode = PreviousMode;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = PreviousMode;
    v9 = *(_DWORD *)(a3 + 24) & (PreviousMode != 0 ? 7666 : 73714);
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v8 || !v10 )
  {
    v12 = -1073741776;
    goto LABEL_24;
  }
  v12 = SeCreateAccessState(&PassedAccessState, v23, a2, (char *)PsThreadType + 76);
  if ( v12 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ThreadId[0] )
    {
      v12 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
      if ( v12 >= 0 )
      {
LABEL_22:
        v12 = ObOpenObjectByPointer(Thread, v9, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        ObfDereferenceObject(Thread);
        if ( v12 >= 0 )
          *v7 = Handle;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
      if ( v12 >= 0 )
      {
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
        goto LABEL_22;
      }
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_24:
  v20 = v12;
  v19 = a2;
  v18 = (int)ThreadId[1];
  v17 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v17;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v25 = &v18;
  v26 = 4;
  v27 = 0;
  v28 = (int *)&v19;
  v29 = 4;
  v30 = 0;
  v31 = &v20;
  v32 = 4;
  v33 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v12;
}
