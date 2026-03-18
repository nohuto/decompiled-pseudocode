/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01F17E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C019A134 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v9; // rax
  struct tagPOINTER_TOUCH_INFO *v10; // rbx
  int v11; // ebx
  int v12; // edx
  __int64 v13; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  struct tagPOINTER_TOUCH_INFO *v21; // [rsp+30h] [rbp-38h]
  _QWORD v22[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3);
    v11 = 0;
    UserSetLastError(87LL, v19);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
    ProbeForRead(Src, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v3, 1953067861LL);
    v10 = v9;
    v21 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    memmove(v9, Src, 144 * v3);
    PushW32ThreadLock((__int64)v10, v22, (__int64)Win32FreePool);
    v11 = xxxInjectTouchInput(v3, v10);
    if ( v11 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      LODWORD(v3) = -2;
    }
    TraceLoggingTouchInjection(1, v12, v3);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
    if ( v21 )
      Win32FreePool(v21);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v11;
}
