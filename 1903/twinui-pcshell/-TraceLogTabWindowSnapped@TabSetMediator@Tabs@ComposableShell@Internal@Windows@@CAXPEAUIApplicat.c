/*
 * XREFs of ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x180265484
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x180265770 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x180262BA0 (--$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEA.c)
 *     ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x180265E64 (-get@-$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z.c)
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
  __int64 (__fastcall *v12)(__int64, HSTRING *); // r14
  int v13; // eax
  HSTRING string; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+28h] [rbp-60h] BYREF
  int WindowForView; // [rsp+2Ch] [rbp-5Ch] BYREF
  const WCHAR *v17[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17[1] = (const WCHAR *)-2LL;
  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TabCompanionLogger>::get(
                                      a1,
                                      lambda_7ddd513c8c70d581733925d1e8d989fc_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v6, 0);
  try
  {
    if ( result )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a1, v8);
      v18[0] = 0LL;
      v18[1] = 0LL;
      v10 = 0LL;
      string = 0LL;
      if ( a2 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v18);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            44LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
            (const char *)(unsigned int)v11);
        v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
        string = 0LL;
        v13 = v12(a2, &string);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            45LL,
            (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediatorimpl.h",
            (const char *)(unsigned int)v13);
        v10 = string;
      }
      v15 = a3;
      v17[0] = WindowsGetStringRawBuffer(v10, 0LL);
      result = TabCompanionTelemetry::TabWindowSnapped<unsigned int &,_GUID &,unsigned short const *,unsigned int>(
                 (__int64)&WindowForView,
                 (__int64)v18,
                 v17,
                 (__int64)&v15);
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
