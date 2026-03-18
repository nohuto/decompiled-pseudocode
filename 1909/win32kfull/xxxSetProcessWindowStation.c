/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00E12B0
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00E1210 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
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
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rbx
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  void *ProcessWin32WindowStation; // rbx
  int v45; // edx
  int v46; // eax
  unsigned int v47; // edx
  int v48; // eax
  BOOLEAN v49; // al
  int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // [rsp+48h] [rbp-19h] BYREF
  PVOID v53; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  __int64 v56; // [rsp+68h] [rbp+7h] BYREF
  __int64 v57; // [rsp+70h] [rbp+Fh]
  __int64 v58; // [rsp+78h] [rbp+17h]
  _QWORD v59[3]; // [rsp+80h] [rbp+1Fh] BYREF
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
            memset(v59, 0, sizeof(v59));
            v56 = 0LL;
            v57 = 0LL;
            v58 = 0LL;
            PushW32ThreadLock((__int64)Object, v59, UserDereferenceObject);
            v26 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28);
            v56 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v56;
            v57 = v26;
            HMLockObject(v26);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL));
            ThreadUnlock1(v31, v30, v32);
            v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34);
            *(_QWORD *)(v35 + 16) = v59[0];
          }
        }
        v36 = *(_QWORD **)(ProcessWin32Process + 664);
        v37 = v36[8];
        if ( v37 && *(_QWORD *)(*(_QWORD *)(v37 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v36 + 8);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 48LL) = 0LL;
          v36 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v38 = v36[6];
        if ( v38 && *(_QWORD *)(v38 + 416) == ProcessWin32Process )
        {
          v36[6] = 0LL;
          v36 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v39 = v36[9];
        if ( v39 && *(_QWORD *)(*(_QWORD *)(v39 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v36 + 9);
          v36 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v40 = v36 + 15;
        while ( 1 )
        {
          v42 = *v40;
          if ( !*v40 )
            break;
          v41 = (__int64 *)(v42 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v42 + 16) + 416LL) == ProcessWin32Process )
          {
            v52 = *v40;
            *v40 = *v41;
            *v41 = 0LL;
            *(_DWORD *)(*(_QWORD *)(v52 + 40) + 232LL) &= ~1u;
            HMAssignmentUnlock(&v52);
          }
          else
          {
            v40 = (__int64 *)(v42 + 240);
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
    v43 = *(_QWORD *)(ProcessWin32Process + 672);
    if ( v43 )
      SetHandleFlag(v43, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 664, v16);
  ObfDereferenceObject(v16);
  *(_QWORD *)(ProcessWin32Process + 672) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(v9);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v6, &v53, 0LL) < 0 )
    {
      PsSetProcessWindowStation(v9, 0LL);
    }
    else
    {
      if ( v16 != v53 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(v9, 0LL);
      }
      ObfDereferenceObject(v53);
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
  v45 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 680) = HandleInformation.GrantedAccess;
  v46 = v45;
  v47 = v45 & 0xFFFBFFFF;
  v48 = v46 | 0x40000;
  if ( (v16[8] & 4) == 0 )
    v47 = v48;
  *(_DWORD *)(ProcessWin32Process + 12) = v47;
  v49 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v50 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v49 )
    v51 = v50 | 0x10;
  else
    v51 = v50 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v51;
  return 0LL;
}
