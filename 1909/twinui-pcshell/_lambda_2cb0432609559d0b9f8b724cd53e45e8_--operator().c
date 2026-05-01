/*
 * XREFs of _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x180262EA4
 * Callers:
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180263318 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18014BD00 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     _lambda_d751ed88a330b424065b2529e18a6817_::operator() @ 0x18026301C (_lambda_d751ed88a330b424065b2529e18a6817_--operator().c)
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802633D8 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180263C48 (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x180263DC8 (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 */

__int64 __fastcall lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator()(
        struct IApplicationViewCollection ***a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, _QWORD *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  struct IApplicationViewCollection **v11; // rbx
  __int64 v12; // rax
  struct IApplicationViewCollection *v13; // rsi
  void (__fastcall *v14)(struct IApplicationViewCollection *, struct IApplicationViewCollection **); // rdi
  int ViewGroupingPreference; // eax
  struct IApplicationViewCollection **v16; // rcx
  HWND TabGroupTargetWindow; // rbp
  struct IApplicationViewCollection *v18; // rsi
  void (__fastcall *v19)(struct IApplicationViewCollection *, HWND, __int64 *); // rdi
  __int64 *v20; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationViewCollection **v22; // [rsp+60h] [rbp+8h] BYREF

  v4 = (__int64 *)*a1;
  v5 = v4 + 2;
  if ( !v4[2] )
  {
    v6 = v4[1];
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, _QWORD *))(*(_QWORD *)v6 + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v4 + 2);
    v8 = v7(v6, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v5);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    v4 = (__int64 *)*a1;
  }
  if ( *v4
    && (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v4,
              (HSTRING)v4[12],
              a3,
              v4 + 5) >= 0 )
  {
    v11 = *a1;
    v12 = (__int64)(*a1)[5] - 0x4B4911C56E81C7D0LL;
    if ( (*a1)[5] == (struct IApplicationViewCollection *)0x4B4911C56E81C7D0LL )
      v12 = (__int64)v11[6] + 0x1F10BF2D8BF9B671LL;
    if ( !v12 )
    {
      v13 = v11[2];
      v14 = *(void (__fastcall **)(struct IApplicationViewCollection *, struct IApplicationViewCollection **))(*(_QWORD *)v13 + 80LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v11 + 4);
      v14(v13, v11 + 4);
    }
  }
  else
  {
    ViewGroupingPreference = TabGroupingPolicy::TabGroupPolicyEvaluator::GetViewGroupingPreference(*a1);
    if ( ViewGroupingPreference != 2 )
    {
      v16 = *a1;
      if ( ((ViewGroupingPreference - 1) & 0xFFFFFFFD) != 0 )
      {
        TabGroupingPolicy::TabGroupPolicyEvaluator::ChooseTargetViewUsingHeuristic(
          (TabGroupingPolicy::TabGroupPolicyEvaluator *)v16,
          v16[2]);
      }
      else
      {
        TabGroupTargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow((TabGroupingPolicy::TabGroupPolicyEvaluator *)v16);
        if ( TabGroupTargetWindow )
        {
          v18 = (*a1)[2];
          v19 = *(void (__fastcall **)(struct IApplicationViewCollection *, HWND, __int64 *))(*(_QWORD *)v18 + 48LL);
          v20 = (__int64 *)(*a1 + 4);
          wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v20);
          v19(v18, TabGroupTargetWindow, v20);
        }
      }
    }
  }
  v22 = *a1;
  lambda_d751ed88a330b424065b2529e18a6817_::operator()(&v22);
  return 0LL;
}
