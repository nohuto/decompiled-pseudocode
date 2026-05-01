/*
 * XREFs of ?GetTabGroupTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1801F325C
 * Callers:
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1801F2484 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801F29B0 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ @ 0x1801F3398 (-GetTargetWindow@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAPEAUHWND__@@XZ.c)
 */

HWND __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetTabGroupTargetWindow(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this)
{
  char *v2; // rbx
  HWND TargetWindow; // rax
  HRESULT WindowAttribute; // eax
  HSTRING_HEADER *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // r8
  __int64 v7; // rax
  HSTRING_HEADER *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r8
  __int64 v10; // rax
  HSTRING_HEADER *v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r8
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15 = -2LL;
  v14 = 0;
  v2 = (char *)this + 56;
  if ( !*((_QWORD *)this + 7) )
  {
    TargetWindow = TabGroupingPolicy::TabGroupPolicyEvaluator::GetTargetWindow(this);
    if ( TargetWindow )
    {
      WindowAttribute = DwmGetWindowAttribute(TargetWindow, 0x11u, v2, 8u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          58LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)WindowAttribute);
    }
  }
  if ( *(_QWORD *)this )
  {
    if ( !*(_QWORD *)v2 )
    {
      v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)off_180400290);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
        (__int64)v5[1].Reserved.Reserved1,
        v6,
        &v14);
      v7 = v14;
      *(_QWORD *)v2 = v14;
      if ( !v7 )
      {
        v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)off_1804002A0);
        Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
          (__int64)v8[1].Reserved.Reserved1,
          v9,
          &v14);
        v10 = v14;
        *(_QWORD *)v2 = v14;
        if ( !v10 )
        {
          v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)off_180400280);
          Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
            (__int64)v11[1].Reserved.Reserved1,
            v12,
            &v14);
          *(_QWORD *)v2 = v14;
        }
      }
    }
  }
  return *(HWND *)v2;
}
