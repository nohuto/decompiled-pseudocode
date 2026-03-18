/*
 * XREFs of NtUserInjectTouchInput @ 0x1C0218BE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01BB32C (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v6; // rax
  struct tagPOINTER_TOUCH_INFO *v7; // rbx
  int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  struct tagPOINTER_TOUCH_INFO *v21; // [rsp+30h] [rbp-38h]
  _QWORD v22[4]; // [rsp+40h] [rbp-28h] BYREF
  LPCWSTR *v23; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v23, L"InjectTouchInput", 0LL);
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3);
    v8 = 0;
    UserSetLastError(87LL, v16, v17, v18);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForRead(Src, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    v6 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v3, 1953067861LL);
    v7 = v6;
    v21 = v6;
    if ( !v6 )
      ExRaiseStatus(-1073741801);
    memmove(v6, Src, 144 * v3);
    PushW32ThreadLock((__int64)v7, v22, (__int64)Win32FreePool);
    v8 = xxxInjectTouchInput(v3, v7);
    if ( v8 )
    {
      v9 = 1;
    }
    else
    {
      v9 = 0;
      LODWORD(v3) = -2;
    }
    TraceLoggingTouchInjection(1, v9, v3);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
    *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
    if ( v21 )
      Win32FreePool(v21);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v23,
    v19);
  return v8;
}
