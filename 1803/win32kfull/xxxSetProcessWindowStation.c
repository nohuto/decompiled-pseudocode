/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00E3DA0
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00E3D60 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rsi
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  void *ProcessWin32WindowStation; // rbx
  int v37; // ecx
  unsigned int v38; // ecx
  BOOLEAN v39; // al
  int v40; // ecx
  unsigned int v41; // ecx
  PVOID v42; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v46[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v47[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v48; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleInformation);
  v12 = Object;
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = RtlNtStatusToDosError(v10);
    UserSetLastError(v14, v15);
    return v13;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v11);
    ObfDereferenceObject(v12);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v17 = *(_QWORD **)(ProcessWin32Process + 664);
    if ( v17 )
    {
      if ( v17 != Object )
      {
        v18 = v17 + 10;
        v19 = v17[10];
        if ( v19 && *(_QWORD *)(*(_QWORD *)(v19 + 16) + 416LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v18);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v47, UserDereferenceObject);
            v20 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
            v46[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v46;
            v46[1] = v20;
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL));
            ThreadUnlock1(v24, v23, v25);
            v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
            *(_QWORD *)(v27 + 16) = v47[0];
          }
        }
        v28 = *(_QWORD **)(ProcessWin32Process + 664);
        v29 = v28[8];
        if ( v29 && *(_QWORD *)(*(_QWORD *)(v29 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v28 + 8);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 48LL) = 0LL;
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v30 = v28[6];
        if ( v30 && *(_QWORD *)(v30 + 416) == ProcessWin32Process )
        {
          v28[6] = 0LL;
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v31 = v28[9];
        if ( v31 && *(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v28 + 9);
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v32 = v28 + 15;
        while ( 1 )
        {
          v34 = *v32;
          if ( !*v32 )
            break;
          v33 = (__int64 *)(v34 + 224);
          if ( *(_QWORD *)(*(_QWORD *)(v34 + 16) + 416LL) == ProcessWin32Process )
          {
            v48 = *v32;
            *v32 = *v33;
            *v33 = 0LL;
            *(_DWORD *)(*(_QWORD *)(v48 + 40) + 232LL) &= ~1u;
            HMAssignmentUnlock(&v48);
          }
          else
          {
            v32 = (__int64 *)(v34 + 224);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 672) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v12);
      return 3221225495LL;
    }
    v35 = *(_QWORD *)(ProcessWin32Process + 672);
    if ( v35 )
      SetHandleFlag(v35, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 664, v12);
  ObfDereferenceObject(v12);
  *(_QWORD *)(ProcessWin32Process + 672) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v42, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v12 != v42 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v42);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  v37 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 680) = HandleInformation.GrantedAccess;
  if ( (v12[8] & 4) != 0 )
    v38 = v37 & 0xFFFBFFFF;
  else
    v38 = v37 | 0x40000;
  *(_DWORD *)(ProcessWin32Process + 12) = v38;
  v39 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v40 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v39 )
    v41 = v40 | 0x10;
  else
    v41 = v40 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v41;
  return 0LL;
}
