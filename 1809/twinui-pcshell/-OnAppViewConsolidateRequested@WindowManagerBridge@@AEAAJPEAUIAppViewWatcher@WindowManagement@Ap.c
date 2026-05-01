/*
 * XREFs of ?OnAppViewConsolidateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewRequestEventArgs@3456@@Z @ 0x18024A0A0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_182d5747b21d48ae354266de315dbe33___ @ 0x180247C74 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_182d5747b21d48ae354266de315dbe33.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewConsolidateRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_182d5747b21d48ae354266de315dbe33___(
           v4,
           CurrentThreadId,
           &v6);
}
