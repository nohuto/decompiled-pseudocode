/*
 * XREFs of ?OnWindowRemoved@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x18007A180
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1e755e6c55cfd49b49c43b0a0e26624e___ @ 0x18007A1B4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1e755e6c55cfd49b49c43b0a0e26624e.c)
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
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1e755e6c55cfd49b49c43b0a0e26624e___(
           v4,
           CurrentThreadId,
           v6);
}
