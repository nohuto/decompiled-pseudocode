/*
 * XREFs of xxxQueryInformationThread @ 0x1C000C908
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C000C740 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C000CD44 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000D2E0 (xxxSetCsrssThreadDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C01664EC (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0166510 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     GetTaskName @ 0x1C01D6880 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r12
  struct _KTHREAD *v8; // r15
  __int64 ThreadWin32Thread; // rbp
  __int64 ProcessWin32Process; // rbx
  NTSTATUS v11; // r14d
  NTSTATUS result; // eax
  PEPROCESS ThreadProcess; // rax
  unsigned int v14; // ebp
  int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 i; // rbx
  HANDLE ThreadId; // rcx
  __int64 v19; // rax
  struct _KTHREAD *v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rax
  PEPROCESS v25; // rbx
  PEPROCESS v26; // rax
  struct _KPROCESS *v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *v29; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v31; // [rsp+40h] [rbp-58h] BYREF
  char v32[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v33[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a4;
  v29 = 0LL;
  v8 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 != 11 )
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v31, 0LL);
    v8 = (struct _KTHREAD *)v31;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess((PETHREAD)v31);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread(v8);
LABEL_8:
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( ThreadWin32Thread )
        {
          *a3 = *(_DWORD *)(ThreadWin32Thread + 480);
          goto LABEL_29;
        }
      }
      else
      {
        if ( a2 != 2 )
        {
          switch ( a2 )
          {
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
              v14 = 0;
              if ( (unsigned int)v5 >= 8 )
              {
                if ( ProcessWin32Process && (v15 = *(_DWORD *)(ProcessWin32Process + 384)) != 0 )
                {
                  v16 = 8LL * (unsigned int)(v15 + 1);
                  if ( v16 <= v5 )
                  {
                    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
                    {
                      ThreadId = PsGetThreadId(*(PETHREAD *)i);
                      v19 = v14++;
                      *(_QWORD *)&a3[2 * v19] = ThreadId;
                    }
                    *(_QWORD *)&a3[2 * v14] = 0LL;
                  }
                  else
                  {
                    *(_QWORD *)a3 = v16;
                    v11 = -1073741801;
                  }
                }
                else
                {
                  *(_QWORD *)a3 = 0LL;
                }
              }
              else
              {
                v11 = -1073741811;
              }
              v20 = v29;
              goto LABEL_30;
            default:
              v11 = -1073741821;
              break;
          }
LABEL_29:
          v20 = v8;
LABEL_30:
          ObfDereferenceObject(v20);
          return v11;
        }
        if ( ThreadWin32Thread )
        {
          GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
          goto LABEL_29;
        }
      }
      v11 = -1073741816;
      goto LABEL_29;
    }
    v21 = a3[3];
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    if ( ThreadWin32Thread )
    {
      v22 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v22 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 32LL) & 4) == 0 )
        {
          v23 = *(__int64 **)(*(_QWORD *)(v22 + 8) + 24LL);
          if ( v23 )
            v24 = *v23;
          else
            v24 = 0LL;
          *(_QWORD *)a3 = v24;
        }
      }
    }
    if ( PsGetThreadProcessId(v8) != (HANDLE)gpidLogon && PsGetThreadProcessId(v8) != (HANDLE)gpidLogonUI )
    {
      v25 = PsGetThreadProcess(v8);
      UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)v32);
      LOBYTE(v25) = UmfdHostLifeTimeManager::s_UmfdHostProcess == v25;
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v32);
      if ( !(_BYTE)v25 )
      {
        v26 = PsGetThreadProcess(v8);
        if ( !(unsigned int)IsProcessDwm(v26) )
        {
          v27 = PsGetThreadProcess(v8);
          if ( !(unsigned int)IsProcessUserService(v27) )
          {
            if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 448) )
            {
              a3[2] = 2;
LABEL_57:
              if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 892) )
                a3[3] |= 1u;
              if ( (a3[3] & 1) != 0 && !a3[2] )
              {
                memset(v33, 0, 24);
                if ( *(_QWORD *)(gptiCurrent + 448LL) != *(_QWORD *)(ThreadWin32Thread + 448) )
                {
                  LockW32Thread(ThreadWin32Thread, v33);
                  if ( *(_QWORD *)(gptiCurrent + 448LL) )
                    v11 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
                  if ( v11 >= 0 )
                    v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 448));
                  PopAndFreeW32ThreadLock(v33);
                }
              }
              goto LABEL_29;
            }
            v28 = *(_QWORD *)(ThreadWin32Thread + 416);
            if ( !v28 || (*(_DWORD *)(v28 + 812) & 0x80u) == 0 || (v21 & 0x800) != 0 )
              goto LABEL_57;
          }
        }
      }
    }
    a3[2] = 1;
    goto LABEL_57;
  }
  v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Object, 0LL);
  v29 = Object;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v29);
    goto LABEL_8;
  }
  return v11;
}
