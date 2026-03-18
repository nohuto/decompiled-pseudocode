/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C0129090
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  HANDLE ThreadProcessId; // rax
  void *v19; // rbx
  __int64 v21; // rcx
  PEPROCESS Process; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v7, v8);
    v13 = *(_QWORD *)(v6 + 16);
    v14 = ThreadWin32Thread;
    v15 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( *(_QWORD *)(v13 + 448) == v15 )
    {
      v16 = Enforced(v15);
      v10 = *(_QWORD *)(v13 + 416);
      v17 = *(_QWORD *)(v14 + 416);
      if ( v16 )
      {
        if ( !(unsigned __int8)CheckAccess(v17 + 872, v10 + 872) && *(int *)(*(_QWORD *)(v14 + 416) + 12LL) >= 0 )
          goto LABEL_11;
      }
      else if ( *(_DWORD *)(v10 + 772) != *(_DWORD *)(v17 + 772) || *(_DWORD *)(v10 + 776) != *(_DWORD *)(v17 + 776) )
      {
        goto LABEL_11;
      }
      if ( (*(_DWORD *)(v13 + 480) & 0xC) == 0 )
      {
        Process = 0LL;
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v13);
        if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
        {
          ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, 0, &Handle);
          ObfDereferenceObject(Process);
          goto LABEL_8;
        }
        v21 = 87LL;
LABEL_12:
        UserSetLastError(v21, v10, v11, v12);
        goto LABEL_8;
      }
    }
LABEL_11:
    v21 = 5LL;
    goto LABEL_12;
  }
LABEL_8:
  v19 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v19;
}
