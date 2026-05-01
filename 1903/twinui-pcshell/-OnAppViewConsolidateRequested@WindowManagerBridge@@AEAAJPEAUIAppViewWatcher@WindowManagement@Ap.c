/*
 * XREFs of ?OnAppViewConsolidateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewRequestEventArgs@3456@@Z @ 0x1802A0570
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a1d59a420bf911ed7dd7b4e62d32ecfe___ @ 0x18029E27C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a1d59a420bf911ed7dd7b4e62d32ecfe.c)
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
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a1d59a420bf911ed7dd7b4e62d32ecfe___(
           v4,
           CurrentThreadId,
           &v6);
}
