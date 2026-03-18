/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00FDF30
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00FDE90 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // r12d
  KPROCESSOR_MODE v6; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rsi
  unsigned int v16; // ebx
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  void *ProcessWin32WindowStation; // rbx
  int v42; // edx
  int v43; // eax
  unsigned int v44; // edx
  int v45; // eax
  BOOLEAN v46; // al
  int v47; // ecx
  unsigned int v48; // ecx
  PVOID v49; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v53[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v54[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v55; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v6 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2, a3, a4);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v11 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v6, &Object, &HandleInformation);
  v15 = Object;
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = RtlNtStatusToDosError(v11);
    UserSetLastError(v17, v18, v19, v20);
    return v16;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v12, v13, v14);
    ObfDereferenceObject(v15);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v22 = *(_QWORD **)(ProcessWin32Process + 672);
    if ( v22 )
    {
      if ( v22 != Object )
      {
        v23 = v22 + 10;
        v24 = v22[10];
        if ( v24 && *(_QWORD *)(*(_QWORD *)(v24 + 16) + 424LL) == ProcessWin32Process )
        {
          if ( v5 )
          {
            HMAssignmentUnlock(v23);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v54, UserDereferenceObject);
            v25 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 672) + 80LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
            v53[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v53;
            v53[1] = v25;
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 672) + 80LL), v28);
            ThreadUnlock1(v30, v29);
            v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31);
            *(_QWORD *)(v32 + 16) = v54[0];
          }
        }
        v33 = *(_QWORD **)(ProcessWin32Process + 672);
        v34 = v33[8];
        if ( v34 && *(_QWORD *)(*(_QWORD *)(v34 + 16) + 424LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v33 + 8);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 672) + 48LL) = 0LL;
          v33 = *(_QWORD **)(ProcessWin32Process + 672);
        }
        v35 = v33[6];
        if ( v35 && *(_QWORD *)(v35 + 424) == ProcessWin32Process )
        {
          v33[6] = 0LL;
          v33 = *(_QWORD **)(ProcessWin32Process + 672);
        }
        v36 = v33[9];
        if ( v36 && *(_QWORD *)(*(_QWORD *)(v36 + 16) + 424LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v33 + 9);
          v33 = *(_QWORD **)(ProcessWin32Process + 672);
        }
        v37 = v33 + 15;
        while ( 1 )
        {
          v39 = *v37;
          if ( !*v37 )
            break;
          v38 = (__int64 *)(v39 + 224);
          if ( *(_QWORD *)(*(_QWORD *)(v39 + 16) + 424LL) == ProcessWin32Process )
          {
            v55 = *v37;
            *v37 = *v38;
            *v38 = 0LL;
            *(_DWORD *)(*(_QWORD *)(v55 + 40) + 232LL) &= ~1u;
            HMAssignmentUnlock(&v55);
          }
          else
          {
            v37 = (__int64 *)(v39 + 224);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 680) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v15);
      return 3221225495LL;
    }
    v40 = *(_QWORD *)(ProcessWin32Process + 680);
    if ( v40 )
      SetHandleFlag(v40, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 672, v15);
  ObfDereferenceObject(v15);
  *(_QWORD *)(ProcessWin32Process + 680) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v6, &v49, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v15 != v49 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v49);
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
  v42 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 688) = HandleInformation.GrantedAccess;
  v43 = v42;
  v44 = v42 & 0xFFFBFFFF;
  v45 = v43 | 0x40000;
  if ( (v15[8] & 4) == 0 )
    v44 = v45;
  *(_DWORD *)(ProcessWin32Process + 12) = v44;
  v46 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v47 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v46 )
    v48 = v47 | 0x10;
  else
    v48 = v47 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v48;
  return 0LL;
}
