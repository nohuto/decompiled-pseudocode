/*
 * XREFs of ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x180262BA0
 * Callers:
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x180265484 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x180265E64 (-get@-$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z.c)
 */

int __fastcall TabCompanionTelemetry::TabWindowSnapped<unsigned int &,_GUID &,unsigned short const *,unsigned int>(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3,
        __int64 a4)
{
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  TraceLoggingHProvider v10; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+68h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+88h] [rbp-20h]

  v8 = wil::details::static_lazy<TabCompanionLogger>::get(
         a1,
         lambda_7ddd513c8c70d581733925d1e8d989fc_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 5u )
  {
    v9 = *a3;
    v13 = a1;
    v14 = 4LL;
    v15 = a2;
    v16 = 16LL;
    TlgCreateWsz(&pDesc, v9);
    v18 = a4;
    v19 = 4LL;
    LODWORD(v8) = TlgWrite(v10, &unk_1804CFE45, 0LL, 0LL, 6u, &pData);
  }
  return v8;
}
