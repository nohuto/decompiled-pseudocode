/*
 * XREFs of _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x18029409C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac___::Invoke @ 0x180294B10 (CAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1802949F8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180294ED4 (-TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemGroupingState@3456@XZ @ 0x180297850 (-get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AW4SwitchIt.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1803ACBA0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_95ea086e3b8fa056e55a3a293b600f83_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  const char *v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  int AppViewFromSwitchItem; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)a1, 3u, a3);
    if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::GroupingState::get(*a1) == 1
      && (unsigned __int8)XamlBaseViewController::TryCloseTabGroupItem(a1[1], *a1) )
    {
      result = 0LL;
    }
    else
    {
      v9 = 0LL;
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v9);
      AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v6, *a1, &v9);
      if ( AppViewFromSwitchItem < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          104LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
          (const char *)(unsigned int)AppViewFromSwitchItem);
      ApplicationViewHelpers::CloseView(v9, *(_QWORD *)(a1[1] + 64LL), 7LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x71,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
                           v4);
  }
  return result;
}
