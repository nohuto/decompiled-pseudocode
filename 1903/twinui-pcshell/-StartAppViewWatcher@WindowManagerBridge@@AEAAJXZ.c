/*
 * XREFs of ?StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1802A17DC
 * Callers:
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1802A2400 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f1c4c43acd743819b127ca15ba3e0b1___ @ 0x18029DEEC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3f1c4c43acd743819b127ca15ba3e0b1.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802A1DC4 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::StartAppViewWatcher(WindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f1c4c43acd743819b127ca15ba3e0b1___(
         v2,
         CurrentThreadId,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
