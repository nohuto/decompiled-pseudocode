/*
 * XREFs of ??$?0UIApplicationView@@@?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18026538C
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800B7790 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     _lambda_8c677c44027c68cbd42f9970f610ae83_::operator() @ 0x180266D74 (_lambda_8c677c44027c68cbd42f9970f610ae83_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64))
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**a2)(a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
