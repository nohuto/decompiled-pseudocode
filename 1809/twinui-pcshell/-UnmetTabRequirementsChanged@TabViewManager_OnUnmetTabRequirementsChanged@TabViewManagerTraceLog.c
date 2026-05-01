/*
 * XREFs of ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1801EE83C
 * Callers:
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1801E22B0 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 */

char __fastcall TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::UnmetTabRequirementsChanged(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  const WCHAR *v10; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  int *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+F0h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v8) = TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL);
    if ( (_BYTE)v8 )
    {
      v12 = a2;
      v17 = &v12;
      v18 = 4LL;
      v19 = &v13;
      v13 = a3;
      v21 = a4 + 16;
      v23 = a4 + 20;
      v14 = *(_DWORD *)(a4 + 32);
      v25 = &v14;
      v15 = *(_DWORD *)(a4 + 24);
      v27 = &v15;
      v31 = a4 + 8;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v29 = a4;
      v30 = 8LL;
      v32 = 8LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 36));
      v10 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(*(LPCWSTR *)(a4 + 552));
      TlgCreateWsz(&v34, v10);
      LOBYTE(v8) = TlgWrite(v9, &unk_180457A97, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0xCu, &pData);
    }
  }
  return (char)v8;
}
