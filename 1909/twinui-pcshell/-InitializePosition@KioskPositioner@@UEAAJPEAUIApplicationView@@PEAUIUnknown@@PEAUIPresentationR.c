/*
 * XREFs of ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803BC9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800AD364 (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180140724 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1803BC5CC (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1803BCB38 (-IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803BDF28 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::InitializePosition(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IApplicationView *a5)
{
  KioskPositioner *v8; // rcx
  KioskPositioner *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  struct IApplicationView *v12; // rdx
  KioskPositioner *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (KioskPositioner *)((char *)this - 112);
  try
  {
    if ( KioskPositioner::ShouldHandleView(v8, a2) )
    {
      if ( KioskPositioner::IsWin32ApplicationView(v9, a2) )
      {
        result = 0LL;
      }
      else
      {
        if ( !KioskPositioner::IsBackgroundActivation(v13, v12, a3) )
        {
          KioskPositioner::HandleApplicationView((KioskPositioner *)((char *)this - 112), a2);
          wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
            (__int64 *)this + 16,
            (__int64)a2);
        }
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)0x8000FFFFLL);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2BC,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v10);
  }
  return result;
}
