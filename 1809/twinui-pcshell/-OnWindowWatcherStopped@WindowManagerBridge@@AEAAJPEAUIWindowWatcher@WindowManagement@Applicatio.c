/*
 * XREFs of ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18024A2E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_10e387a4656916af968f4f052f4976f3___ @ 0x180247B94 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_10e387a4656916af968f4f052f4976f3.c)
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18024BA0C (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
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

  v3 = this + 32;
  AcquireSRWLockExclusive(this + 32);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped();
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_10e387a4656916af968f4f052f4976f3___(
         v6,
         CurrentThreadId,
         &v9);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return v7;
}
