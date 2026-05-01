/*
 * XREFs of ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18020DA24
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18020DD00 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007209C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x18020A5E0 (--$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEA.c)
 *     ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x18020E4A4 (-get@-$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2,
        int a3)
{
  wil::TraceLoggingProvider *v6; // rax
  char result; // al
  struct IApplicationView *v8; // rdx
  const char *v9; // r9
  HSTRING v10; // rcx
  int v11; // eax
  int v12; // eax
  HSTRING string; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h] BYREF
  int WindowForView; // [rsp+2Ch] [rbp-4Ch] BYREF
  const WCHAR *v16[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16[1] = (const WCHAR *)-2LL;
  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TabCompanionLogger>::get(
                                      a1,
                                      lambda_7ddd513c8c70d581733925d1e8d989fc_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v6, 0);
  try
  {
    if ( result )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a1, v8);
      v17[0] = 0LL;
      v17[1] = 0LL;
      v10 = 0LL;
      string = 0LL;
      if ( a2 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v17);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            44LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
            (const char *)(unsigned int)v11);
        string = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL))(a2, &string);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            45LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
            (const char *)(unsigned int)v12);
        v10 = string;
      }
      v14 = a3;
      v16[0] = WindowsGetStringRawBuffer(v10, 0LL);
      result = TabCompanionTelemetry::TabWindowSnapped<unsigned int &,_GUID &,unsigned short const *,unsigned int>(
                 (__int64)&WindowForView,
                 (__int64)v17,
                 v16,
                 (__int64)&v14);
      if ( string )
        result = WindowsDeleteString(string);
    }
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x32,
             (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
             v9);
  }
  return result;
}
