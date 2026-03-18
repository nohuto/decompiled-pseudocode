/*
 * XREFs of NtGetNextThread @ 0x14088E9B0
 * Callers:
 *     <none>
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x140612230 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x1406470E0 (ObOpenObjectByPointer.c)
 *     PsGetNextProcessThread @ 0x140675900 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140888638 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall NtGetNextThread(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, int a4, int a5, HANDLE *a6)
{
  int v6; // esi
  char AccessMode; // r13
  ULONG v10; // r12d
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rax
  PVOID v14; // r14
  int AccessState; // esi
  _DWORD *NextProcessThread; // rdi
  void *v17; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v19; // r14
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID v22; // [rsp+48h] [rbp-200h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1F8h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-1F0h]
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  HANDLE *v26; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  char v29; // [rsp+130h] [rbp-118h] BYREF

  v6 = a3;
  v26 = a6;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v10 = a4 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v11 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  *a6 = 0LL;
  if ( a5 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             AccessMode,
             0x6E457350u,
             &v22,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      AccessState = ObpReferenceObjectByHandleWithTag(
                      a2,
                      0,
                      (__int64)PsThreadType,
                      AccessMode,
                      0x6E457350u,
                      &Object,
                      0LL,
                      0LL);
      v14 = v22;
      if ( AccessState < 0 )
        goto LABEL_16;
      v13 = Object;
      if ( *((PVOID *)Object + 68) != v22 )
      {
        ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        AccessState = -1073741811;
        goto LABEL_16;
      }
      v6 = a3;
    }
    else
    {
      v13 = 0LL;
      Object = 0LL;
      v14 = v22;
    }
    NextProcessThread = PsGetNextProcessThread((__int64)v14, v13);
    v24 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v27 = CurrentThread;
      v19 = v22;
      do
      {
        if ( (NextProcessThread[436] & 2) != 0
          || (PsSynchronizeWithThreadInsertion((__int64)NextProcessThread, (__int64)CurrentThread),
              (NextProcessThread[436] & 2) != 0) )
        {
          AccessState = SeCreateAccessState((int)&PassedAccessState, (int)&v29, v6, (__int64)PsProcessType + 76);
          if ( AccessState < 0 )
            goto LABEL_33;
          if ( v20 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          AccessState = ObOpenObjectByPointer(
                          NextProcessThread,
                          v10,
                          &PassedAccessState,
                          0,
                          (POBJECT_TYPE)PsThreadType,
                          AccessMode,
                          &Handle);
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          if ( AccessState >= 0 )
          {
            *v26 = Handle;
            goto LABEL_33;
          }
          if ( AccessState != -1073741790 )
            goto LABEL_33;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v19, NextProcessThread);
        v24 = NextProcessThread;
        CurrentThread = v27;
        v6 = a3;
      }
      while ( NextProcessThread );
      AccessState = -2147483622;
LABEL_33:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      if ( !NextProcessThread )
        return (unsigned int)AccessState;
      v17 = NextProcessThread;
LABEL_17:
      ObfDereferenceObjectWithTag(v17, 0x6E457350u);
      return (unsigned int)AccessState;
    }
    AccessState = -2147483622;
LABEL_16:
    v17 = v14;
    goto LABEL_17;
  }
  return result;
}
