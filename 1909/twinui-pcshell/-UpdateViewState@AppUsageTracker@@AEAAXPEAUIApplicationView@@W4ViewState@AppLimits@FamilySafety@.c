/*
 * XREFs of ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B5404
 * Callers:
 *     ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x1800B4CC0 (-EnumerateExistingViews@AppUsageTracker@@UEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800B50E0 (-OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18008187C (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z @ 0x1800B4208 (--$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180248204 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall AppUsageTracker::UpdateViewState(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  bool v8; // r14
  __int64 v9[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF
  int v11; // [rsp+80h] [rbp+40h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v10 = a2;
  v9[1] = -2LL;
  if ( !a3 )
  {
    v11 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v11);
    if ( !v11 )
      return AppUsageTelemetry::DebugInfo<unsigned short const (&)[42]>(v6);
  }
  v8 = *(_DWORD *)(a1 + 104) == 1;
  wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(v9, &v10);
  if ( v9[0] )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 80) + 24LL))(
      *(_QWORD *)(a1 + 80),
      a2,
      a3,
      *(_QWORD *)(a1 + 96),
      v8);
  }
  else
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>((__int64)&v12, &v10);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 88) + 24LL))(
        *(_QWORD *)(a1 + 88),
        a2,
        a3,
        *(_QWORD *)(a1 + 96),
        v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
  }
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9);
}
