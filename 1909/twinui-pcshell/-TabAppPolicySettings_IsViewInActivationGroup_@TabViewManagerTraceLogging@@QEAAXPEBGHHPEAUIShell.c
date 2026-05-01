/*
 * XREFs of ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180264FE4
 * Callers:
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x18026424C (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18014E140 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup_(
        TabViewManagerTraceLogging *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a5,
        bool a6)
{
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v7; // rsi
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rdi
  WCHAR *v10; // rbx
  int v11; // r10d
  LPCWSTR pwsz[2]; // [rsp+38h] [rbp-79h] BYREF
  struct _GUID v13; // [rsp+48h] [rbp-69h] BYREF
  __int128 v14; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-29h] BYREF
  int *v17; // [rsp+98h] [rbp-19h]
  int v18; // [rsp+A0h] [rbp-11h]
  int v19; // [rsp+A4h] [rbp-Dh]
  int *v20; // [rsp+A8h] [rbp-9h]
  int v21; // [rsp+B0h] [rbp-1h]
  int v22; // [rsp+B4h] [rbp+3h]
  __int128 *v23; // [rsp+B8h] [rbp+7h]
  int v24; // [rsp+C0h] [rbp+Fh]
  int v25; // [rsp+C4h] [rbp+13h]
  bool *v26; // [rsp+C8h] [rbp+17h]
  int v27; // [rsp+D0h] [rbp+1Fh]
  int v28; // [rsp+D4h] [rbp+23h]
  int v29; // [rsp+118h] [rbp+67h] BYREF
  int v30; // [rsp+120h] [rbp+6Fh] BYREF

  v30 = a4;
  v29 = a3;
  pwsz[1] = (LPCWSTR)-2LL;
  v7 = a5;
  pwsz[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)pwsz,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)pwsz);
  v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        v8,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  v10 = (WCHAR *)pwsz[0];
  if ( *(_DWORD *)v9 > 4u )
  {
    TlgCreateWsz(&pDesc, pwsz[0]);
    v17 = &v30;
    v18 = v11;
    v19 = 0;
    v20 = &v29;
    v21 = v11;
    v22 = 0;
    v14 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v13, v7);
    v23 = &v14;
    v24 = 16;
    v25 = 0;
    v26 = &a6;
    v27 = 1;
    v28 = 0;
    TlgWrite(v9, &unk_1804F5206, 0LL, 0LL, 7u, &pData);
  }
  if ( v10 )
    CoTaskMemFree(v10);
}
