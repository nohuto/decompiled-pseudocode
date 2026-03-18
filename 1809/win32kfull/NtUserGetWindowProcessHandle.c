/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C01210A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
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
  KPROCESSOR_MODE AccessMode; // bl
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  HANDLE ThreadProcessId; // rax
  void *Handle; // [rsp+60h] [rbp+18h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = ThreadWin32Thread;
    AccessMode = 0;
    if ( *(_QWORD *)(v11 + 456) != *(_QWORD *)(ThreadWin32Thread + 456)
      || a2 != 120 && (!(unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 424)) || a2 != 4096) )
    {
      goto LABEL_10;
    }
    v14 = *(_QWORD *)(v11 + 424);
    v10 = *(_QWORD *)(v12 + 424);
    if ( gbEnforceUIPI )
    {
      v18 = *(_QWORD *)(v14 + 880);
      v19 = *(_QWORD *)(v10 + 880);
      if ( (unsigned int)v19 <= (unsigned int)v18 )
      {
        if ( (_DWORD)v19 != (_DWORD)v18
          || (v20 = HIDWORD(v18), v21 = HIDWORD(v19), (_DWORD)v21 != (_DWORD)v20)
          && (v12 = 0xFFFFFFFFLL, (_DWORD)v21 != -1)
          && (_DWORD)v20 != -1 )
        {
          if ( *(int *)(v10 + 12) >= 0 )
            goto LABEL_10;
          AccessMode = 1;
        }
      }
    }
    else if ( *(_DWORD *)(v14 + 780) != *(_DWORD *)(v10 + 780) || *(_DWORD *)(v14 + 784) != *(_DWORD *)(v10 + 784) )
    {
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v11 + 488) & 0xC) == 0 && (*(_DWORD *)(v11 + 1208) & 4) == 0 )
    {
      Process = 0LL;
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v11);
      if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
      {
        ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
        ObfDereferenceObject(Process);
        goto LABEL_12;
      }
      v15 = 87LL;
      goto LABEL_11;
    }
LABEL_10:
    v15 = 5LL;
LABEL_11:
    Handle = 0LL;
    UserSetLastError(v15, v10, v11, v12);
    goto LABEL_12;
  }
  Handle = 0LL;
LABEL_12:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v16;
}
