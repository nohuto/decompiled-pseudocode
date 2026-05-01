/*
 * XREFs of ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1800BD58C
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B7680 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x18008F05C (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     ??$CoCreateInstance@VImmersiveShell@@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@K@Z @ 0x1800BD418 (--$CoCreateInstance@VImmersiveShell@@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18042E470 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall CloseWinRTApplicationView(struct IWinRTApplicationView *a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IWinRTApplicationView *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v9 = a1;
  wil::com_query<IApplicationView,IWinRTApplicationView * &>((__int64)&v12, &v9);
  wil::CoCreateInstance<ImmersiveShell,IServiceProvider,wil::err_exception_policy>((LPVOID *)&v11);
  v10 = 0LL;
  v1 = *v11;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, __int64 *))(v1 + 24))(
         v11,
         &unk_1804A65E8,
         &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
         &v10);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      12LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    v3 = ApplicationViewHelpers::CloseView(v12, v10, 10LL);
    v4 = retaddr;
    if ( v3 >= 0 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
      return;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v4,
    16LL,
    (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
    (const char *)(unsigned int)v3);
  __debugbreak();
  CloseWinRTApplicationView_::_1_::dtor_0(v6, v5, v7);
}
