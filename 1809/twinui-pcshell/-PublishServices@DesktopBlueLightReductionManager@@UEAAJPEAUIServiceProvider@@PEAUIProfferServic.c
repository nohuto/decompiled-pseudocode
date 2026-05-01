/*
 * XREFs of ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180136C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::PublishServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v6 = *((_QWORD *)this + 16);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          109LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v7);
      wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
        (__int64 *)this + 17,
        (__int64)a2);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x72,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
