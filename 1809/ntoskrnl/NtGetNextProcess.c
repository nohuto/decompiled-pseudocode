/*
 * XREFs of NtGetNextProcess @ 0x140718D70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x1400CB108 (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F2C0 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x140612230 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x1406470C0 (ObOpenObjectByPointer.c)
 *     PsGetPreviousProcess @ 0x14088ED0C (PsGetPreviousProcess.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, int a2, int a3, int a4, HANDLE *a5)
{
  char v5; // r15
  char AccessMode; // r12
  ULONG v8; // r14d
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // r15d
  unsigned __int64 PreviousProcess; // rax
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  int AccessState; // esi
  unsigned __int64 NextProcess; // rax
  bool v18; // zf
  bool v19; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1E0h] BYREF
  struct _KTHREAD *v24; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  char v26; // [rsp+130h] [rbp-118h] BYREF

  v5 = a4;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v8 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v9 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  *a5 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               0,
               (__int64)PsProcessType,
               AccessMode,
               0x6E457350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Object = 0LL;
  }
  v11 = v5 & 1;
  if ( v11 )
    PreviousProcess = PsGetPreviousProcess(Object);
  else
    PreviousProcess = PsGetNextProcess(Object);
  v13 = PreviousProcess;
  if ( !PreviousProcess )
    return 2147483674LL;
  v19 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v22 = CurrentServerSilo;
  do
  {
    if ( (*(_DWORD *)(v13 + 772) & 0x4000000) == 0 )
    {
      PspLockUnlockProcessExclusive(v13, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v13 + 772) & 0x4000000) == 0 )
        goto LABEL_27;
      CurrentServerSilo = v22;
    }
    if ( PsIsProcessInSilo((struct _KPROCESS *)v13, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)&v26, a2, (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_21;
      if ( v19 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      AccessState = ObOpenObjectByPointer(
                      (PVOID)v13,
                      v8,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsProcessType,
                      AccessMode,
                      &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( AccessState >= 0 )
      {
        *a5 = Handle;
        goto LABEL_21;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_21;
      CurrentThread = v24;
    }
LABEL_27:
    if ( v11 )
      NextProcess = PsGetPreviousProcess((PVOID)v13);
    else
      NextProcess = PsGetNextProcess((_QWORD *)v13);
    v13 = NextProcess;
    v18 = NextProcess == 0;
    CurrentServerSilo = v22;
  }
  while ( !v18 );
  AccessState = -2147483622;
LABEL_21:
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x6E457350u);
  return (unsigned int)AccessState;
}
