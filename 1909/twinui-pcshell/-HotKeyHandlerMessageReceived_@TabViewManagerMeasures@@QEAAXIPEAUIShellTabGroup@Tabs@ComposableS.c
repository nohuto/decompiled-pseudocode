/*
 * XREFs of ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x180279F94
 * Callers:
 *     ??$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@AEAU_GUID@@@TabViewManagerMeasures@@SAX$$QEAI$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@AEAU_GUID@@@Z @ 0x180279C48 (--$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUI.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024FC5C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::HotKeyHandlerMessageReceived_(
        TabViewManagerMeasures *this,
        int a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a4,
        const struct _GUID *a5)
{
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  struct _GUID v11; // [rsp+30h] [rbp-71h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-61h] BYREF
  __int128 v13; // [rsp+50h] [rbp-51h] BYREF
  __int128 v14; // [rsp+60h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-31h] BYREF
  int *v16; // [rsp+90h] [rbp-11h]
  int v17; // [rsp+98h] [rbp-9h]
  int v18; // [rsp+9Ch] [rbp-5h]
  __int128 *v19; // [rsp+A0h] [rbp-1h]
  int v20; // [rsp+A8h] [rbp+7h]
  int v21; // [rsp+ACh] [rbp+Bh]
  __int128 *v22; // [rsp+B0h] [rbp+Fh]
  int v23; // [rsp+B8h] [rbp+17h]
  int v24; // [rsp+BCh] [rbp+1Bh]
  const struct _GUID *v25; // [rsp+C0h] [rbp+1Fh]
  int v26; // [rsp+C8h] [rbp+27h]
  int v27; // [rsp+CCh] [rbp+2Bh]
  int v28; // [rsp+108h] [rbp+67h] BYREF

  v28 = a2;
  v7 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
    {
      v18 = 0;
      v16 = &v28;
      v17 = 4;
      v9 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v11, a3);
      v21 = 0;
      v19 = &v13;
      v13 = v9;
      v20 = 16;
      v10 = (__int128)*TabShellTelemetryBase::GetShellTabGroupId(&v12, a4);
      v24 = 0;
      v27 = 0;
      v22 = &v14;
      v25 = a5;
      v14 = v10;
      v23 = 16;
      v26 = 16;
      TlgWrite(v8, &unk_1804F5B3B, 0LL, 0LL, 6u, &pData);
    }
  }
}
