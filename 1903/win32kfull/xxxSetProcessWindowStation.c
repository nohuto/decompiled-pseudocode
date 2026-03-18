/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C0106EB0
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C0106E10 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // r12d
  KPROCESSOR_MODE v6; // r13
  __int64 CurrentProcess; // rax
  __int64 v9; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rsi
  unsigned int v17; // ebx
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rbx
  __int64 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  void *ProcessWin32WindowStation; // rbx
  int v47; // edx
  int v48; // eax
  unsigned int v49; // edx
  int v50; // eax
  BOOLEAN v51; // al
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // [rsp+48h] [rbp-19h] BYREF
  PVOID v55; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  __int64 v58; // [rsp+68h] [rbp+7h] BYREF
  __int64 v59; // [rsp+70h] [rbp+Fh]
  __int64 v60; // [rsp+78h] [rbp+17h]
  _QWORD v61[3]; // [rsp+80h] [rbp+1Fh] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v6 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2, a3, a4);
  HandleInformation = 0LL;
  v9 = CurrentProcess;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v12 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v6, &Object, &HandleInformation);
  v16 = Object;
  v17 = v12;
  if ( v12 < 0 )
  {
    v18 = RtlNtStatusToDosError(v12);
    UserSetLastError(v18, v19, v20, v21);
    return v17;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v13, v14, v15);
    ObfDereferenceObject(v16);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v23 = *(_QWORD **)(ProcessWin32Process + 664);
    if ( v23 )
    {
      if ( v23 != Object )
      {
        v24 = v23 + 10;
        v25 = v23[10];
        if ( v25 && *(_QWORD *)(*(_QWORD *)(v25 + 16) + 416LL) == ProcessWin32Process )
        {
          if ( v5 )
          {
            HMAssignmentUnlock(v24);
          }
          else
          {
            memset(v61, 0, sizeof(v61));
            v58 = 0LL;
            v59 = 0LL;
            v60 = 0LL;
            PushW32ThreadLock((__int64)Object, v61, UserDereferenceObject, v15);
            v26 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
            v58 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v58;
            v59 = v26;
            HMLockObject(v26);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL));
            ThreadUnlock1(v32, v31, v33);
            v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
            *(_QWORD *)(v37 + 16) = v61[0];
          }
        }
        v38 = *(_QWORD **)(ProcessWin32Process + 664);
        v39 = v38[8];
        if ( v39 && *(_QWORD *)(*(_QWORD *)(v39 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v38 + 8);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 48LL) = 0LL;
          v38 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v40 = v38[6];
        if ( v40 && *(_QWORD *)(v40 + 416) == ProcessWin32Process )
        {
          v38[6] = 0LL;
          v38 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v41 = v38[9];
        if ( v41 && *(_QWORD *)(*(_QWORD *)(v41 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v38 + 9);
          v38 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v42 = v38 + 15;
        while ( 1 )
        {
          v44 = *v42;
          if ( !*v42 )
            break;
          v43 = (__int64 *)(v44 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v44 + 16) + 416LL) == ProcessWin32Process )
          {
            v54 = *v42;
            *v42 = *v43;
            *v43 = 0LL;
            *(_DWORD *)(*(_QWORD *)(v54 + 40) + 232LL) &= ~1u;
            HMAssignmentUnlock(&v54);
          }
          else
          {
            v42 = (__int64 *)(v44 + 240);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 672) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v16);
      return 3221225495LL;
    }
    v45 = *(_QWORD *)(ProcessWin32Process + 672);
    if ( v45 )
      SetHandleFlag(v45, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 664, v16);
  ObfDereferenceObject(v16);
  *(_QWORD *)(ProcessWin32Process + 672) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(v9);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v6, &v55, 0LL) < 0 )
    {
      PsSetProcessWindowStation(v9, 0LL);
    }
    else
    {
      if ( v16 != v55 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(v9, 0LL);
      }
      ObfDereferenceObject(v55);
    }
  }
  if ( !PsGetProcessWin32WindowStation(v9)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(v9, TargetHandle);
  }
  v47 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 680) = HandleInformation.GrantedAccess;
  v48 = v47;
  v49 = v47 & 0xFFFBFFFF;
  v50 = v48 | 0x40000;
  if ( (v16[8] & 4) == 0 )
    v49 = v50;
  *(_DWORD *)(ProcessWin32Process + 12) = v49;
  v51 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v52 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v51 )
    v53 = v52 | 0x10;
  else
    v53 = v52 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v53;
  return 0LL;
}
