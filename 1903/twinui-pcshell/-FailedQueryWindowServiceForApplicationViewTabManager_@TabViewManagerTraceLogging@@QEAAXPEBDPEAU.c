/*
 * XREFs of ?FailedQueryWindowServiceForApplicationViewTabManager_@TabViewManagerTraceLogging@@QEAAXPEBDPEAUHWND__@@J@Z @ 0x18022F0E4
 * Callers:
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x180224EA4 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManage.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager_(
        TabViewManagerTraceLogging *this,
        const char *a2,
        HWND a3,
        int a4)
{
  TraceLoggingHProvider v6; // r10
  HWND v7; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+17h] BYREF
  HWND *v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  int *v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+94h] [rbp+43h]
  int v16; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = a4;
  if ( **((_DWORD **)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                       (__int64)this,
                       (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
        + 1) > 2u )
  {
    TlgCreateSz(&pDesc, a2);
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v13 = &v16;
    v7 = a3;
    v11 = 8;
    v14 = 4;
    TlgWrite(v6, &unk_1804CE91A, 0LL, 0LL, 5u, &pData);
  }
}
