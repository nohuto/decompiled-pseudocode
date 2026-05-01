/*
 * XREFs of ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180244658
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1802438B4 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x180243DE8 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003C6A0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x180244794 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 */

HWND __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this)
{
  HWND *v2; // rbx
  HWND TargetWindow; // rax
  HRESULT WindowAttribute; // eax
  HWND result; // rax
  HWND v6; // rcx
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v15; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v14 = -2LL;
  v13 = 0;
  v2 = (HWND *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
    if ( TargetWindow )
    {
      WindowAttribute = DwmGetWindowAttribute(TargetWindow, 0x11u, v2, 8u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)WindowAttribute);
    }
  }
  result = *v2;
  if ( *(_QWORD *)this )
  {
    v6 = *v2;
    if ( !result )
    {
      v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)off_180467BA8);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
        (__int64)v7[1].Reserved.Reserved1,
        v8,
        &v13);
      result = (HWND)v13;
      *v2 = (HWND)v13;
      v6 = result;
    }
    if ( !v6 )
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)off_180467BB8);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
        (__int64)v9[1].Reserved.Reserved1,
        v10,
        &v13);
      result = (HWND)v13;
      *v2 = (HWND)v13;
      if ( !result )
      {
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)off_180467BA0);
        Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
          (__int64)v11[1].Reserved.Reserved1,
          v12,
          &v13);
        result = (HWND)v13;
        *v2 = (HWND)v13;
      }
    }
  }
  return result;
}
