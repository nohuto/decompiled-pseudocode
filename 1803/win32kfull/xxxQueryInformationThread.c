/*
 * XREFs of xxxQueryInformationThread @ 0x1C000B7BC
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C000B630 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C000BB68 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007F030 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GetTaskName @ 0x1C01A1E78 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  struct _KTHREAD *v7; // r12
  __int64 ThreadWin32Thread; // rbp
  __int64 ProcessWin32Process; // rbx
  NTSTATUS result; // eax
  NTSTATUS v11; // r14d
  PEPROCESS ThreadProcess; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rax
  PEPROCESS v17; // rax
  struct _KPROCESS *v18; // rax
  __int64 v19; // rax
  struct _KPROCESS *v20; // rbx
  bool v21; // bl
  struct _KTHREAD *v22; // rcx
  unsigned int v23; // ebp
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 i; // rbx
  HANDLE ThreadId; // rcx
  __int64 v28; // rax
  struct _KTHREAD *v29; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PETHREAD Thread; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v33[32]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a4;
  v29 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v29 = (struct _KTHREAD *)Object;
    if ( v11 < 0 )
      return v11;
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v29);
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, (PVOID *)&Thread, 0LL);
    v7 = Thread;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess(Thread);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread(v7);
  }
  switch ( a2 )
  {
    case 0:
      v13 = a3[3];
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      if ( ThreadWin32Thread )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 448);
        if ( v14 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 32LL) & 4) == 0 )
          {
            v15 = *(__int64 **)(*(_QWORD *)(v14 + 8) + 24LL);
            if ( v15 )
              v16 = *v15;
            else
              v16 = 0LL;
            *(_QWORD *)a3 = v16;
          }
        }
      }
      if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
      {
        v17 = PsGetThreadProcess(v7);
        if ( !(unsigned int)IsProcessDwm(v17) )
        {
          v18 = PsGetThreadProcess(v7);
          if ( !(unsigned int)IsProcessUserService(v18) )
          {
            if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 448) )
            {
              a3[2] = 2;
LABEL_23:
              if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 884) )
                a3[3] |= 1u;
              if ( (a3[3] & 1) == 0 || a3[2] || *(_QWORD *)(gptiCurrent + 448LL) == *(_QWORD *)(ThreadWin32Thread + 448) )
                goto LABEL_27;
              LockW32Thread(ThreadWin32Thread, v33);
              if ( *(_QWORD *)(gptiCurrent + 448LL) )
                v11 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
              if ( v11 >= 0 )
                v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 448));
              PopAndFreeW32ThreadLock(v33);
              goto LABEL_51;
            }
            v19 = *(_QWORD *)(ThreadWin32Thread + 416);
            if ( v19 && (*(_DWORD *)(v19 + 812) & 0x80u) != 0 )
            {
              if ( (v13 & 0x800) != 0 )
                goto LABEL_23;
            }
            else
            {
              v20 = PsGetThreadProcess(v7);
              AutoSharedPushLock::AutoSharedPushLock(
                (AutoSharedPushLock *)&v32,
                (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
              v21 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v20;
              if ( v32 )
              {
                GreReleasePushLockShared();
                KeLeaveCriticalRegion();
              }
              if ( !v21 )
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
        *a3 = *(_DWORD *)(ThreadWin32Thread + 480);
        goto LABEL_27;
      }
      goto LABEL_70;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        goto LABEL_27;
      }
LABEL_70:
      v11 = -1073741816;
      goto LABEL_27;
    case 3:
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      goto LABEL_27;
    case 4:
      if ( ThreadWin32Thread )
        v4 = IsThreadHung(ThreadWin32Thread, *a3);
      *a3 = v4;
      goto LABEL_27;
    case 11:
      v23 = 0;
      if ( (unsigned int)v5 < 8 )
      {
        v11 = -1073741811;
      }
      else if ( ProcessWin32Process && (v24 = *(_DWORD *)(ProcessWin32Process + 384)) != 0 )
      {
        v25 = 8LL * (unsigned int)(v24 + 1);
        if ( v25 > v5 )
        {
          *(_QWORD *)a3 = v25;
          v11 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
          {
            ThreadId = PsGetThreadId(*(PETHREAD *)i);
            v28 = v23++;
            *(_QWORD *)&a3[2 * v28] = ThreadId;
          }
          *(_QWORD *)&a3[2 * v23] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      goto LABEL_56;
  }
  v11 = -1073741821;
LABEL_51:
  if ( a2 == 11 )
  {
LABEL_56:
    v22 = v29;
    goto LABEL_28;
  }
LABEL_27:
  v22 = v7;
LABEL_28:
  ObfDereferenceObject(v22);
  return v11;
}
