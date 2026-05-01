/*
 * XREFs of ?OnAppViewClearPersistedStateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewClearPersistedStateRequestedEventArgs@3456@@Z @ 0x1802BFA20
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8fa848b95dc4e9f652db4e075728c269___ @ 0x1802BD5A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8fa848b95dc4e9f652db4e075728c269.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewClearPersistedStateRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8fa848b95dc4e9f652db4e075728c269___(
           v4,
           CurrentThreadId,
           &v6);
}
