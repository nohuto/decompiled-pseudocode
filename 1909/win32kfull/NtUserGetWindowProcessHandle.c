/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C0104140
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0021208 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rbx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v7);
    v12 = *(_QWORD *)(v6 + 16);
    v13 = ThreadWin32Thread;
    v14 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( *(_QWORD *)(v12 + 448) != v14
      || a2 != 120 && (!(unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 416)) || a2 != 4096) )
    {
      goto LABEL_9;
    }
    v15 = Enforced(v14);
    v9 = *(_QWORD *)(v12 + 416);
    v16 = *(_QWORD *)(v13 + 416);
    if ( v15 )
    {
      if ( !(unsigned __int8)CheckAccess(v16 + 872, v9 + 872) && *(int *)(*(_QWORD *)(v13 + 416) + 12LL) >= 0 )
        goto LABEL_9;
    }
    else if ( *(_DWORD *)(v9 + 772) != *(_DWORD *)(v16 + 772) || *(_DWORD *)(v9 + 776) != *(_DWORD *)(v16 + 776) )
    {
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(v12 + 480) & 0xC) == 0 )
    {
      Process = 0LL;
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v12);
      if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
      {
        ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, 0, &Handle);
        ObfDereferenceObject(Process);
        goto LABEL_11;
      }
      v17 = 87LL;
      goto LABEL_10;
    }
LABEL_9:
    v17 = 5LL;
LABEL_10:
    UserSetLastError(v17, v9, v10, v11);
  }
LABEL_11:
  v18 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v18;
}
