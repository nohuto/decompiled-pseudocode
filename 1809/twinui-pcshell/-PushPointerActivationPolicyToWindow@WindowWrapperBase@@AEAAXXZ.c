/*
 * XREFs of ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x18001F758
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180252320 (-put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerIntero.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0a83762bf65122e5a3deb32c84344239___ @ 0x18001F7B8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0a83762bf65122e5a3deb32c84344239.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushPointerActivationPolicyToWindow(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WindowWrapperBase *v6; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35));
  if ( *((_DWORD *)this + 74) )
  {
    v6 = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0a83762bf65122e5a3deb32c84344239___(
           v3,
           CurrentThreadId,
           &v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xACC,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        -2);
  }
}
