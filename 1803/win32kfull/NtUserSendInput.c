/*
 * XREFs of NtUserSendInput @ 0x1C005D460
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendInput @ 0x1C005D570 (xxxSendInput.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  void *v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v21; // [rsp+30h] [rbp-38h]
  _QWORD v22[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  if ( a3 == 40 && (_DWORD)v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8, v9);
    ProbeForRead(a2, 40 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = (void *)Win32AllocPoolWithQuota(40 * v5, 1769173845LL);
    v12 = v11;
    v21 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    memmove(v11, (const void *)a2, 40 * v5);
    PushW32ThreadLock(v12, v22, Win32FreePool);
    v13 = xxxSendInput((unsigned int)v5, v12);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
    Win32FreePool(v21);
  }
  else
  {
    v13 = 0;
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v13;
}
