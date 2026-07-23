/*
 * XREFs of NtGetNextThread @ 0x1406E1870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1408C6578 (PsSynchronizeWithThreadInsertion.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  PVOID v13; // r14
  _QWORD *v14; // rax
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v17; // r14
  void *v18; // rcx
  bool v19; // [rsp+40h] [rbp-218h]
  PVOID Object; // [rsp+48h] [rbp-210h] BYREF
  ACCESS_MASK v21; // [rsp+50h] [rbp-208h]
  PVOID v22; // [rsp+58h] [rbp-200h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-1F8h]
  HANDLE Handle; // [rsp+68h] [rbp-1F0h] BYREF
  PHANDLE v25; // [rsp+70h] [rbp-1E8h]
  struct _KTHREAD *v26; // [rsp+80h] [rbp-1D8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v28[28]; // [rsp+130h] [rbp-128h] BYREF

  v21 = DesiredAccess;
  v25 = NewThreadHandle;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v28, 0, sizeof(v28));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)NewThreadHandle;
    if ( (unsigned __int64)NewThreadHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             0x400u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x6E457350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      v12 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0,
              (POBJECT_TYPE)PsThreadType,
              PreviousMode,
              0x6E457350u,
              &v22,
              0LL);
      v13 = Object;
      if ( v12 < 0 )
        goto LABEL_27;
      v14 = v22;
      if ( *((PVOID *)v22 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v22, 0x6E457350u);
        v12 = -1073741811;
        goto LABEL_27;
      }
    }
    else
    {
      v14 = 0LL;
      v22 = 0LL;
      v13 = Object;
    }
    NextProcessThread = PsGetNextProcessThread((__int64)v13, v14);
    v23 = NextProcessThread;
    if ( NextProcessThread )
    {
      v19 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v26 = CurrentThread;
      v17 = Object;
      do
      {
        if ( (NextProcessThread[440] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[440] & 2) != 0) )
        {
          v12 = SeCreateAccessState(&PassedAccessState, v28, v21, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
          if ( v12 < 0 )
            goto LABEL_20;
          if ( v19 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v12 = ObOpenObjectByPointer(
                  NextProcessThread,
                  HandleAttributes & (PreviousMode != 0 ? 7666 : 73714),
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  PreviousMode,
                  &Handle);
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
          if ( v12 >= 0 )
          {
            *v25 = Handle;
            goto LABEL_20;
          }
          if ( v12 != -1073741790 )
            goto LABEL_20;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v17, NextProcessThread);
        v23 = NextProcessThread;
        CurrentThread = v26;
      }
      while ( NextProcessThread );
      v12 = -2147483622;
LABEL_20:
      ObfDereferenceObjectWithTag(v17, 0x6E457350u);
      if ( !NextProcessThread )
        return v12;
      v18 = NextProcessThread;
LABEL_22:
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      return v12;
    }
    v12 = -2147483622;
LABEL_27:
    v18 = v13;
    goto LABEL_22;
  }
  return result;
}
