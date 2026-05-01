/*
 * XREFs of _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x18030C128
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac___::Invoke @ 0x18030C9E0 (CAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18030C8C8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18030CDA4 (-TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemGroupingState@3456@XZ @ 0x18030EAF0 (-get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AW4SwitchIt.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18042E470 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_95ea086e3b8fa056e55a3a293b600f83_::operator()(_QWORD *a1)
{
  const char *v2; // r9
  __int64 result; // rax
  __int64 v4; // rcx
  int AppViewFromSwitchItem; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)a1, 3u);
    if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::GroupingState::get(*a1) == 1
      && (unsigned __int8)XamlBaseViewController::TryCloseTabGroupItem(a1[1], *a1) )
    {
      result = 0LL;
    }
    else
    {
      v7 = 0LL;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v7);
      AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v4, *a1, &v7);
      if ( AppViewFromSwitchItem < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          104LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
          (const char *)(unsigned int)AppViewFromSwitchItem);
      ApplicationViewHelpers::CloseView(v7, *(_QWORD *)(a1[1] + 64LL), 7LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v7);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x71,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
                           v2);
  }
  return result;
}
