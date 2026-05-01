/*
 * XREFs of ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801E6FD8
 * Callers:
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1801DD270 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DD0F0 (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::Stop(
        TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        char a3)
{
  int *v3; // rsi
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // r14
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  DWORD v17; // ecx
  const CHAR *v18; // rdx
  struct _GUID *ShellTabGroupId; // rax
  const void *v20; // rdx
  const struct _TlgProvider_t *v21; // rcx
  struct _GUID v22; // xmm0
  const struct _TlgProvider_t *v23; // rsi
  int v24; // ecx
  DWORD CurrentThreadId; // eax
  struct _GUID *v26; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  DWORD v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v36; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v37; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+70h] [rbp-90h] BYREF
  int *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  DWORD *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  struct _GUID *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  char *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  char v47; // [rsp+D0h] [rbp-30h] BYREF
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+120h] [rbp+20h] BYREF
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+140h] [rbp+40h] BYREF
  int *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+160h] [rbp+60h] BYREF
  int *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+190h] [rbp+90h] BYREF
  int *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v68; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]
  int *v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _GUID *v73; // [rsp+200h] [rbp+100h]
  __int64 v74; // [rsp+208h] [rbp+108h]
  char *v75; // [rsp+210h] [rbp+110h]
  __int64 v76; // [rsp+218h] [rbp+118h]
  char v77; // [rsp+280h] [rbp+180h] BYREF

  v77 = a3;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v7 )
  {
    v10 = (const struct _TlgProvider_t *)v9[1];
    if ( *(_DWORD *)v10 <= 4u )
      goto LABEL_11;
    v11 = (const CHAR *)*((_QWORD *)v7 + 6);
    v31 = v7[1];
    v48 = &v31;
    v49 = 4LL;
    TlgCreateSz(&pDesc, v11);
    v12 = (const CHAR *)*((_QWORD *)v7 + 15);
    v51 = v7 + 14;
    v52 = 4LL;
    TlgCreateSz(&v53, v12);
    v13 = (const WCHAR *)*((_QWORD *)v7 + 2);
    v32 = *v7;
    v54 = &v32;
    v55 = 4LL;
    TlgCreateWsz(&v56, v13);
    v14 = (const CHAR *)*((_QWORD *)v7 + 8);
    v33 = v7[6];
    v57 = &v33;
    v58 = 4LL;
    TlgCreateSz(&v59, v14);
    v15 = (const CHAR *)*((_QWORD *)v7 + 10);
    v34 = v7[18];
    v60 = &v34;
    v61 = 4LL;
    TlgCreateSz(&v62, v15);
    TlgCreateWsz(&v63, *((LPCWSTR *)v7 + 11));
    v16 = (const CHAR *)*((_QWORD *)v7 + 13);
    v35 = v7[24];
    v64 = &v35;
    v65 = 4LL;
    TlgCreateSz(&v66, v16);
    TlgCreateWsz(&v67, *((LPCWSTR *)v7 + 14));
    v17 = v7[2];
    v18 = (const CHAR *)*((_QWORD *)v7 + 5);
    v68 = &v29;
    v30 = v7[15];
    v29 = v17;
    v70 = &v30;
    v69 = 4LL;
    v71 = 4LL;
    TlgCreateSz(&v72, v18);
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v36, a2);
    v20 = &unk_180458513;
    v21 = v10;
    v22 = *ShellTabGroupId;
    v74 = 16LL;
    v73 = &v37;
    v75 = &v77;
    pData = (EVENT_DATA_DESCRIPTOR *)&v47;
    cData = 21;
    v76 = 1LL;
  }
  else
  {
    v23 = (const struct _TlgProvider_t *)v9[1];
    if ( *(_DWORD *)v23 <= 4u )
      goto LABEL_11;
    v24 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v39 = &v30;
    v30 = v24;
    v40 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v42 = 4LL;
    v29 = CurrentThreadId;
    v41 = &v29;
    v26 = TabShellTelemetryBase::GetShellTabGroupId(&v36, a2);
    v20 = &unk_18045866A;
    v21 = v23;
    v22 = *v26;
    v44 = 16LL;
    v43 = &v37;
    v45 = &v77;
    pData = &v38;
    cData = 6;
    v46 = 1LL;
  }
  v37 = v22;
  TlgWrite(v21, v20, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, pData);
LABEL_11:
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)((char *)this + 8));
}
