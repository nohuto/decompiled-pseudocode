/*
 * XREFs of ?IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIApplicationView@@@Z @ 0x180075BE4
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1800A5478 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::IsWinRTApplicationView(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener **))
{
  int (__fastcall **v2)(struct IApplicationView *, GUID *, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener **); // rax
  bool v3; // bl
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  v2 = *a2;
  v5 = 0LL;
  v3 = (*v2)((struct IApplicationView *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v5) >= 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v5);
  return v3;
}
