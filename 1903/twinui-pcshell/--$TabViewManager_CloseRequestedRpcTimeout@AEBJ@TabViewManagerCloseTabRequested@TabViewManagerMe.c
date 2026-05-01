/*
 * XREFs of ??$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXAEBJ@Z @ 0x180226F4C
 * Callers:
 *     _lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator() @ 0x18022B6D8 (_lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

int __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::TabViewManager_CloseRequestedRpcTimeout<long const &>(
        __int64 a1,
        __int64 a2)
{
  LPVOID v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)v4 + 1);
  if ( *(_DWORD *)v5 > 3u )
  {
    v10 = 0;
    v8 = a2;
    v9 = 4;
    LODWORD(v4) = TlgWrite(v5, &unk_1804CB5B5, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
