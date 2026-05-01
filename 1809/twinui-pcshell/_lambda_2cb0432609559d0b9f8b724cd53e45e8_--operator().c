/*
 * XREFs of _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1801F2484
 * Callers:
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1801F28F0 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180106B20 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     _lambda_d751ed88a330b424065b2529e18a6817_::operator() @ 0x1801F26AC (_lambda_d751ed88a330b424065b2529e18a6817_--operator().c)
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801F29B0 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 *     ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1801F325C (-GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1801F33DC (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 */

__int64 __fastcall lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator()(
        struct IApplicationViewCollection ***a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationViewCollection **v10; // rbx
  __int64 v11; // rax
  struct IApplicationViewCollection *v12; // rdi
  int ViewGroupingPreference; // eax
  struct IApplicationViewCollection **v14; // rcx
  HWND TabGroupTargetWindow; // rbp
  struct IApplicationViewCollection *v16; // rdi
  __int64 *v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationViewCollection **v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)*a1;
  v5 = v4 + 2;
  if ( !v4[2] )
  {
    v6 = v4[1];
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v4 + 2);
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, _QWORD *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v7);
      return v8;
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
    v10 = *a1;
    v11 = (__int64)(*a1)[5] - 0x4B4911C56E81C7D0LL;
    if ( (*a1)[5] == (struct IApplicationViewCollection *)0x4B4911C56E81C7D0LL )
      v11 = (__int64)v10[6] + 0x1F10BF2D8BF9B671LL;
    if ( !v11 )
    {
      v12 = v10[2];
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)v10 + 4);
      (*(void (__fastcall **)(struct IApplicationViewCollection *, struct IApplicationViewCollection **))(*(_QWORD *)v12 + 80LL))(
        v12,
        v10 + 4);
    }
  }
  else
  {
    ViewGroupingPreference = TabGroupingPolicy::TabGroupPolicyEvaluator::GetViewGroupingPreference(*a1);
    if ( ViewGroupingPreference != 2 )
    {
      v14 = *a1;
      if ( ((ViewGroupingPreference - 1) & 0xFFFFFFFD) != 0 )
      {
        TabGroupingPolicy::TabGroupPolicyEvaluator::ChooseTargetViewUsingHeuristic(
          (TabGroupingPolicy::TabGroupPolicyEvaluator *)v14,
          v14[2]);
      }
      else
      {
        TabGroupTargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow((TabGroupingPolicy::TabGroupPolicyEvaluator *)v14);
        if ( TabGroupTargetWindow )
        {
          v16 = (*a1)[2];
          v17 = (__int64 *)(*a1 + 4);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v17);
          (*(void (__fastcall **)(struct IApplicationViewCollection *, HWND, __int64 *))(*(_QWORD *)v16 + 48LL))(
            v16,
            TabGroupTargetWindow,
            v17);
        }
      }
    }
  }
  v19 = *a1;
  lambda_d751ed88a330b424065b2529e18a6817_::operator()(&v19);
  return 0LL;
}
