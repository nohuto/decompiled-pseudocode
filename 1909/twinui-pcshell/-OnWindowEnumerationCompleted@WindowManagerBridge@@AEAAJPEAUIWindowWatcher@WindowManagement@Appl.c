/*
 * XREFs of ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802BFC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1802C18F0 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowEnumerationCompleted(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  LOBYTE(this[25].Ptr) = 1;
  v5 = WindowManagerBridge::WindowManagerWatcherConnected((WindowManagerBridge *)this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return v6;
  }
}
