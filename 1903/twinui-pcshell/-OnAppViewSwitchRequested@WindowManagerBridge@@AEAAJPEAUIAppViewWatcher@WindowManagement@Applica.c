/*
 * XREFs of ?OnAppViewSwitchRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@3456@@Z @ 0x1802A0670
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f99cbaa2b5f17de54df3a2cb1eee97c6___ @ 0x18029E60C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f99cbaa2b5f17de54df3a2cb1eee97c6.c)
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
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f99cbaa2b5f17de54df3a2cb1eee97c6___(
           v4,
           CurrentThreadId,
           &v6);
}
