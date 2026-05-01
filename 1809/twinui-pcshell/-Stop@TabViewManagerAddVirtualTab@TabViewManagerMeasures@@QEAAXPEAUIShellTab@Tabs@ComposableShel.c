/*
 * XREFs of ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E69F4
 * Callers:
 *     _lambda_37f9ef9030aa536b557a78acc06105da_::operator() @ 0x1801D65A4 (_lambda_37f9ef9030aa536b557a78acc06105da_--operator().c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1801D8210 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x1801DC804 (LoggingUtil--GetGroupIdFromTab.c)
 *     LoggingUtil::GetGroupSizeFromTab @ 0x1801DC860 (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::Stop(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // r14
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  GUID v16; // xmm0
  GUID v17; // xmm0
  const struct _TlgProvider_t *v18; // rsi
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  GUID v21; // xmm0
  GUID v22; // xmm0
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v24; // [rsp+34h] [rbp-CCh] BYREF
  int GroupSizeFromTab; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  struct _GUID v29; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v30; // [rsp+58h] [rbp-A8h] BYREF
  GUID v31; // [rsp+68h] [rbp-98h] BYREF
  GUID v32; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-70h] BYREF
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  DWORD *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  GUID *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  GUID *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  int *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+150h] [rbp+50h] BYREF
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+170h] [rbp+70h] BYREF
  int *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+190h] [rbp+90h] BYREF
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1F0h] [rbp+F0h] BYREF
  GUID *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  GUID *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  int *p_GroupSizeFromTab; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v7,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    v9 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v9 > 4u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v6 + 6);
      v26 = v6[1];
      v45 = &v26;
      v46 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 15);
      v48 = v6 + 14;
      v49 = 4LL;
      TlgCreateSz(&v50, v11);
      v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v27 = *v6;
      v51 = &v27;
      v52 = 4LL;
      TlgCreateWsz(&v53, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 8);
      v28 = v6[6];
      v54 = &v28;
      v55 = 4LL;
      TlgCreateSz(&v56, v13);
      v14 = (const CHAR *)*((_QWORD *)v6 + 10);
      v23 = v6[18];
      v57 = &v23;
      v58 = 4LL;
      TlgCreateSz(&v59, v14);
      TlgCreateWsz(&v60, *((LPCWSTR *)v6 + 11));
      v15 = (const CHAR *)*((_QWORD *)v6 + 13);
      v24 = v6[24];
      v61 = &v24;
      v62 = 4LL;
      TlgCreateSz(&v63, v15);
      TlgCreateWsz(&v64, *((LPCWSTR *)v6 + 14));
      v16 = *TabShellTelemetryBase::GetShellTabGroupId(&v29, a2);
      v66 = 16LL;
      v65 = &v31;
      v31 = v16;
      v17 = *LoggingUtil::GetGroupIdFromTab(&v30, (__int64)a2);
      v68 = 16LL;
      v67 = &v32;
      v32 = v17;
      GroupSizeFromTab = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      v70 = 4LL;
      p_GroupSizeFromTab = &GroupSizeFromTab;
      TlgWrite(v9, &unk_180456C38, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v18 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v18 > 4u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v34 = &GroupSizeFromTab;
      GroupSizeFromTab = v19;
      v35 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v37 = 4LL;
      v24 = CurrentThreadId;
      v36 = &v24;
      v21 = *TabShellTelemetryBase::GetShellTabGroupId(&v30, a2);
      v39 = 16LL;
      v38 = &v32;
      v32 = v21;
      v22 = *LoggingUtil::GetGroupIdFromTab(&v29, (__int64)a2);
      v41 = 16LL;
      v40 = &v31;
      v31 = v22;
      v23 = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      v43 = 4LL;
      v42 = &v23;
      TlgWrite(v18, &unk_180456BD1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v33);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}
