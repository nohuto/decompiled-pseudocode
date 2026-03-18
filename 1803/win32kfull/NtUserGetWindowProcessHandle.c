/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C0100060
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  HANDLE ThreadProcessId; // rax
  void *v19; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  void *Handle; // [rsp+60h] [rbp+20h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp+28h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( !v6 )
  {
    Handle = 0LL;
    goto LABEL_10;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v10 = *(_QWORD *)(v6 + 16);
  v11 = ThreadWin32Thread;
  if ( *(_QWORD *)(v10 + 448) != *(_QWORD *)(ThreadWin32Thread + 448) )
    goto LABEL_16;
  v12 = *(_QWORD *)(v10 + 416);
  if ( gbEnforceUIPI )
  {
    v13 = *(_QWORD *)(v12 + 872);
    v14 = *(_QWORD *)(v11 + 416);
    v15 = *(_QWORD *)(v14 + 872);
    if ( (unsigned int)v15 <= (unsigned int)v13 )
    {
      if ( (_DWORD)v15 != (_DWORD)v13
        || (v16 = HIDWORD(v13), v17 = HIDWORD(v15), (_DWORD)v17 != (_DWORD)v16)
        && (_DWORD)v16 != -1
        && (_DWORD)v17 != -1 )
      {
        if ( *(int *)(v14 + 12) >= 0 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    v21 = *(_QWORD *)(ThreadWin32Thread + 416);
    if ( *(_DWORD *)(v12 + 772) != *(_DWORD *)(v21 + 772) || *(_DWORD *)(v12 + 776) != *(_DWORD *)(v21 + 776) )
      goto LABEL_16;
  }
  if ( (*(_DWORD *)(v10 + 480) & 0xC) != 0 )
  {
LABEL_16:
    v22 = 5LL;
LABEL_21:
    Handle = 0LL;
    UserSetLastError(v22, v10);
    goto LABEL_10;
  }
  Process = 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10);
  if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) < 0 )
  {
    v22 = 87LL;
    goto LABEL_21;
  }
  ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  ObfDereferenceObject(Process);
LABEL_10:
  v19 = Handle;
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v19;
}
