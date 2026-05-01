/*
 * XREFs of ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180097D28 (-GetAppTypeFromView@KioskPositioner@@AEAA-AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplic.c)
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1800983A0 (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800988C8 (-IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18009A008 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 */

__int64 __fastcall KioskPositioner::InitializePosition(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  KioskPositioner *v6; // rcx
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  struct IApplicationView *v10; // rdx
  KioskPositioner *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (KioskPositioner *)((char *)this - 112);
  try
  {
    if ( KioskPositioner::ShouldHandleView(v6, a2) )
    {
      if ( KioskPositioner::GetAppTypeFromView(v7, (__int64)a2) )
      {
        result = 0LL;
      }
      else
      {
        if ( !KioskPositioner::IsBackgroundActivation(v11, v10, a3) )
        {
          KioskPositioner::HandleApplicationView((KioskPositioner *)((char *)this - 112), a2);
          wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((char *)this + 128, a2);
        }
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)0x8000FFFFLL);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C8,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v8);
  }
  return result;
}
