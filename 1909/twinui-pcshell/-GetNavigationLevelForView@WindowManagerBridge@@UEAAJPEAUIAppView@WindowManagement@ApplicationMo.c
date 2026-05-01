/*
 * XREFs of ?GetNavigationLevelForView@WindowManagerBridge@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4NavigationLevel@ViewManagerInterop@Shell@56@@Z @ 0x1802BF9C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___ @ 0x1802BD688 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9e2bde6c4eb29ed8c5e15053395d27fd.c)
 */

__int64 __fastcall WindowManagerBridge::GetNavigationLevelForView(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v7; // [rsp+48h] [rbp+10h] BYREF
  enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  *(_DWORD *)a3 = 0;
  *(_QWORD *)&v6 = &v7;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___(
           v4,
           CurrentThreadId,
           &v6);
}
