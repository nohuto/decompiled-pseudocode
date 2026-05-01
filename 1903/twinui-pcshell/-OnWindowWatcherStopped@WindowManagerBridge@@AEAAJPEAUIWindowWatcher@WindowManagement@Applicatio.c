/*
 * XREFs of ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802A07E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0bc544d1bffbcaec7b0002f5f3fe8b00___ @ 0x18029DE08 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0bc544d1bffbcaec7b0002f5f3fe8b00.c)
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802A2070 (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped();
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0bc544d1bffbcaec7b0002f5f3fe8b00___(
         v6,
         CurrentThreadId,
         &v9);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return v7;
}
