/*
 * XREFs of ?OnWindowRemoved@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x180073910
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3bee3a55bfcded28be4fa66d21ae1436___ @ 0x180073944 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3bee3a55bfcded28be4fa66d21ae1436.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowRemoved(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = this;
  v6[0] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3bee3a55bfcded28be4fa66d21ae1436___(
           v4,
           CurrentThreadId,
           v6);
}
