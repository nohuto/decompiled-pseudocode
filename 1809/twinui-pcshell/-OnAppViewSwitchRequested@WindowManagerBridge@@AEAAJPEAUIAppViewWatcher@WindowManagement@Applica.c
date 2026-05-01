/*
 * XREFs of ?OnAppViewSwitchRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@3456@@Z @ 0x18024A1A0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64c3660530bf44783d246a09b3b4fdab___ @ 0x180247F18 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_64c3660530bf44783d246a09b3b4fdab.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewSwitchRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64c3660530bf44783d246a09b3b4fdab___(
           v4,
           CurrentThreadId,
           &v6);
}
