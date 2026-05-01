/*
 * XREFs of ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x18024B1E8
 * Callers:
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x18024AD44 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3c155e4ac450cd421934cdbd238facd8___ @ 0x180247D58 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3c155e4ac450cd421934cdbd238facd8.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18024BCB8 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 32;
  AcquireSRWLockExclusive(this + 32);
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3c155e4ac450cd421934cdbd238facd8___(
         v4,
         CurrentThreadId,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    return v6;
  }
}
