/*
 * XREFs of NtGetNextProcess @ 0x140741EC0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsProcessInSilo @ 0x140006498 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140109B18 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsGetPreviousProcess @ 0x1408CD098 (PsGetPreviousProcess.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v9; // esi
  __int64 v10; // rcx
  NTSTATUS result; // eax
  ULONG v12; // r14d
  unsigned __int64 PreviousProcess; // rax
  __int64 v14; // rbx
  bool v15; // r13
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  NTSTATUS v18; // edi
  unsigned __int64 NextProcess; // rax
  bool v20; // zf
  PVOID Object; // [rsp+58h] [rbp-200h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-1F8h]
  HANDLE Handle; // [rsp+68h] [rbp-1F0h] BYREF
  struct _KTHREAD *v25; // [rsp+78h] [rbp-1E0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v27[28]; // [rsp+130h] [rbp-128h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v27, 0, sizeof(v27));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = HandleAttributes & (PreviousMode != 0 ? 7666 : 73714);
  if ( PreviousMode )
  {
    v10 = (__int64)NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewProcessHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( ProcessHandle )
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6E457350u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    Object = 0LL;
  }
  v12 = Flags & 1;
  if ( v12 )
    PreviousProcess = PsGetPreviousProcess(Object);
  else
    PreviousProcess = PsGetNextProcess(Object);
  v14 = PreviousProcess;
  if ( !PreviousProcess )
    return -2147483622;
  v15 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v23 = CurrentServerSilo;
  do
  {
    if ( (*(_DWORD *)(v14 + 780) & 0x4000000) == 0 )
    {
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v14 + 780) & 0x4000000) == 0 )
        goto LABEL_27;
      CurrentServerSilo = v23;
    }
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      v18 = SeCreateAccessState(&PassedAccessState, v27, DesiredAccess, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v18 < 0 )
        goto LABEL_21;
      if ( v15 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v18 = ObOpenObjectByPointer(
              (PVOID)v14,
              v9,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( v18 >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_21;
      }
      if ( v18 != -1073741790 )
        goto LABEL_21;
      CurrentThread = v25;
    }
LABEL_27:
    if ( v12 )
      NextProcess = PsGetPreviousProcess((PVOID)v14);
    else
      NextProcess = PsGetNextProcess((_QWORD *)v14);
    v14 = NextProcess;
    v20 = NextProcess == 0;
    CurrentServerSilo = v23;
  }
  while ( !v20 );
  v18 = -2147483622;
LABEL_21:
  if ( v14 )
    ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
  return v18;
}
