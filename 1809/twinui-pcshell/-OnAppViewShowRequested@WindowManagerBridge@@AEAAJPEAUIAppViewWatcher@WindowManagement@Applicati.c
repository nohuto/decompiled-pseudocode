/*
 * XREFs of ?OnAppViewShowRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewShowRequestedEventArgs@3456@@Z @ 0x18024A160
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0062bd17e23f2a934a74150eadf2dfeb___ @ 0x180247AB0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0062bd17e23f2a934a74150eadf2dfeb.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewShowRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0062bd17e23f2a934a74150eadf2dfeb___(
           v4,
           CurrentThreadId,
           &v6);
}
