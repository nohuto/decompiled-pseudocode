/*
 * XREFs of ?TabAppPolicySettings_IsActivatingIntoExistingGroup_@TabViewManagerTraceLogging@@QEAAXPEBGH_N@Z @ 0x18024590C
 * Callers:
 *     ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x180244BA0 (--$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18012EBF0 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup_(
        TabViewManagerTraceLogging *this,
        const unsigned __int16 *a2,
        int a3,
        char a4)
{
  __int64 v5; // rcx
  _DWORD **v6; // rax
  WCHAR *v7; // rbx
  TraceLoggingHProvider v8; // r10
  LPCWSTR pwsz[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+17h] BYREF
  int *v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  char *v15; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]
  int v18; // [rsp+C8h] [rbp+77h] BYREF
  char v19; // [rsp+D0h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  pwsz[1] = (LPCWSTR)-2LL;
  pwsz[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)pwsz,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)pwsz);
  v6 = (_DWORD **)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                    v5,
                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v7 = (WCHAR *)pwsz[0];
  if ( *v6[1] > 4u )
  {
    TlgCreateWsz(&pDesc, pwsz[0]);
    v12 = &v18;
    v13 = 4;
    v14 = 0;
    v15 = &v19;
    v16 = 1;
    v17 = 0;
    TlgWrite(v8, &unk_1804CEC66, 0LL, 0LL, 5u, &pData);
  }
  if ( v7 )
    CoTaskMemFree(v7);
}
