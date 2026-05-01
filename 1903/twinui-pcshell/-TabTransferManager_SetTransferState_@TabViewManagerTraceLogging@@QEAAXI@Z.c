/*
 * XREFs of ?TabTransferManager_SetTransferState_@TabViewManagerTraceLogging@@QEAAXI@Z @ 0x18025A1AC
 * Callers:
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x180255A78 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::TabTransferManager_SetTransferState_(
        TabViewManagerTraceLogging *this,
        int a2)
{
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    (__int64)this,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 4;
    TlgWrite(v2, &unk_1804CECDD, 0LL, 0LL, 3u, &pData);
  }
}
