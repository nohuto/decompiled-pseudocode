/*
 * XREFs of ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x18039DE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18039C7A8 (-GetAppTypeFromView@KioskPositioner@@AEAA-AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplic.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18039D448 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18039D720 (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::OnShowWindowPolicy(
        KioskPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *lprc)
{
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64); // rbx
  __int64 v10; // rcx
  KioskPositioner *v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v15; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v15 = 0LL;
  v8 = *((_QWORD *)this + 8);
  v9 = *(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v15);
  try
  {
    if ( v9(v8) >= 0
      && KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), v15)
      && KioskPositioner::GetAppTypeFromView(v10, (void (__fastcall ***)(_QWORD, GUID *, __int64 *))v15)
      && !KioskPositioner::IsOwnedAppWindow(v11, a2) )
    {
      *a4 = 2;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x394,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v12);
  }
  return result;
}
