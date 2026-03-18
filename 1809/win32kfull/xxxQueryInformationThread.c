/*
 * XREFs of xxxQueryInformationThread @ 0x1C00BB038
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C00BAE80 (NtUserQueryInformationThread.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008CCC4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C00BB448 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     GetTaskName @ 0x1C01C3720 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r12
  struct _KTHREAD *v8; // r15
  __int64 ThreadWin32Thread; // rbp
  __int64 ProcessWin32Process; // rbx
  NTSTATUS result; // eax
  NTSTATUS v12; // r14d
  PEPROCESS ThreadProcess; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rax
  PEPROCESS v19; // rax
  struct _KPROCESS *v20; // rax
  __int64 v21; // rax
  PEPROCESS v22; // rbx
  bool v23; // bl
  struct _KTHREAD *v24; // rcx
  unsigned int v25; // ebp
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 i; // rbx
  __int64 v29; // rdx
  HANDLE ThreadId; // rcx
  __int64 v31; // rax
  struct _KTHREAD *v32; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PETHREAD Thread; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v36[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a4;
  v32 = 0LL;
  v8 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v12 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v32 = (struct _KTHREAD *)Object;
    if ( v12 < 0 )
      return v12;
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v32);
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, (PVOID *)&Thread, 0LL);
    v8 = Thread;
    v12 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess(Thread);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v8, v14);
  }
  switch ( a2 )
  {
    case 0:
      v15 = a3[3];
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      if ( ThreadWin32Thread )
      {
        v16 = *(_QWORD *)(ThreadWin32Thread + 456);
        if ( v16 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 32LL) & 4) == 0 )
          {
            v17 = *(__int64 **)(*(_QWORD *)(v16 + 8) + 24LL);
            if ( v17 )
              v18 = *v17;
            else
              v18 = 0LL;
            *(_QWORD *)a3 = v18;
          }
        }
      }
      if ( PsGetThreadProcessId(v8) != (HANDLE)gpidLogon && PsGetThreadProcessId(v8) != (HANDLE)gpidLogonUI )
      {
        v19 = PsGetThreadProcess(v8);
        if ( !(unsigned int)IsProcessDwm(v19) )
        {
          v20 = PsGetThreadProcess(v8);
          if ( !(unsigned int)IsProcessUserService(v20) )
          {
            if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 456) )
            {
              a3[2] = 2;
LABEL_23:
              if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 892) )
                a3[3] |= 1u;
              if ( (a3[3] & 1) != 0
                && !a3[2]
                && *(_QWORD *)(gptiCurrent + 456LL) != *(_QWORD *)(ThreadWin32Thread + 456) )
              {
                LockW32Thread(ThreadWin32Thread, v36);
                if ( *(_QWORD *)(gptiCurrent + 456LL) )
                  v12 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
                if ( v12 >= 0 )
                  v12 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 456));
                PopAndFreeW32ThreadLock((__int64)v36, v29);
              }
              break;
            }
            v21 = *(_QWORD *)(ThreadWin32Thread + 424);
            if ( v21 && (*(_DWORD *)(v21 + 820) & 0x80u) != 0 )
            {
              if ( (v15 & 0x800) != 0 )
                goto LABEL_23;
            }
            else
            {
              v22 = PsGetThreadProcess(v8);
              AutoSharedPushLock::AutoSharedPushLock(
                (AutoSharedPushLock *)&v35,
                (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
              v23 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v22;
              if ( v35 )
              {
                GreReleasePushLockShared(v35);
                KeLeaveCriticalRegion();
              }
              if ( !v23 )
                goto LABEL_23;
            }
          }
        }
      }
      a3[2] = 1;
      goto LABEL_23;
    case 1:
      if ( ThreadWin32Thread )
      {
        *a3 = *(_DWORD *)(ThreadWin32Thread + 488);
        break;
      }
      goto LABEL_68;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        break;
      }
LABEL_68:
      v12 = -1073741816;
      break;
    case 3:
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      break;
    case 4:
      if ( ThreadWin32Thread )
        v4 = IsThreadHung(ThreadWin32Thread, *a3);
      *a3 = v4;
      break;
    case 11:
      v25 = 0;
      if ( (unsigned int)v5 < 8 )
      {
        v12 = -1073741811;
      }
      else if ( ProcessWin32Process && (v26 = *(_DWORD *)(ProcessWin32Process + 392)) != 0 )
      {
        v27 = 8LL * (unsigned int)(v26 + 1);
        if ( v27 > v5 )
        {
          *(_QWORD *)a3 = v27;
          v12 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 328); i; i = *(_QWORD *)(i + 664) )
          {
            ThreadId = PsGetThreadId(*(PETHREAD *)i);
            v31 = v25++;
            *(_QWORD *)&a3[2 * v31] = ThreadId;
          }
          *(_QWORD *)&a3[2 * v25] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      v24 = v32;
      goto LABEL_28;
    default:
      v12 = -1073741821;
      break;
  }
  v24 = v8;
LABEL_28:
  ObfDereferenceObject(v24);
  return v12;
}
