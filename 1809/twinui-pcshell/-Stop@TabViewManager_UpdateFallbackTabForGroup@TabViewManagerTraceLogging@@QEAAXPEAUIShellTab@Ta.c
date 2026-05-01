/*
 * XREFs of ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E72BC
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1801EEEC4 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
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

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::Stop(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // r14
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  DWORD v16; // ecx
  const CHAR *v17; // rdx
  struct _GUID *ShellTabGroupId; // rax
  const void *v19; // rdx
  const struct _TlgProvider_t *v20; // rcx
  struct _GUID v21; // xmm0
  const struct _TlgProvider_t *v22; // rdi
  int v23; // ecx
  DWORD CurrentThreadId; // eax
  struct _GUID *v25; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  DWORD v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v35; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v36; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+70h] [rbp-90h] BYREF
  int *v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  DWORD *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  struct _GUID *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char v44; // [rsp+C0h] [rbp-40h] BYREF
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  int *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+130h] [rbp+30h] BYREF
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+150h] [rbp+50h] BYREF
  int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+180h] [rbp+80h] BYREF
  int *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1B0h] [rbp+B0h] BYREF
  DWORD *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  int *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _GUID *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]

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
    if ( *(_DWORD *)v9 <= 5u )
      goto LABEL_11;
    v10 = (const CHAR *)*((_QWORD *)v6 + 6);
    v30 = v6[1];
    v45 = &v30;
    v46 = 4LL;
    TlgCreateSz(&pDesc, v10);
    v11 = (const CHAR *)*((_QWORD *)v6 + 15);
    v48 = v6 + 14;
    v49 = 4LL;
    TlgCreateSz(&v50, v11);
    v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v31 = *v6;
    v51 = &v31;
    v52 = 4LL;
    TlgCreateWsz(&v53, v12);
    v13 = (const CHAR *)*((_QWORD *)v6 + 8);
    v32 = v6[6];
    v54 = &v32;
    v55 = 4LL;
    TlgCreateSz(&v56, v13);
    v14 = (const CHAR *)*((_QWORD *)v6 + 10);
    v33 = v6[18];
    v57 = &v33;
    v58 = 4LL;
    TlgCreateSz(&v59, v14);
    TlgCreateWsz(&v60, *((LPCWSTR *)v6 + 11));
    v15 = (const CHAR *)*((_QWORD *)v6 + 13);
    v34 = v6[24];
    v61 = &v34;
    v62 = 4LL;
    TlgCreateSz(&v63, v15);
    TlgCreateWsz(&v64, *((LPCWSTR *)v6 + 14));
    v16 = v6[2];
    v17 = (const CHAR *)*((_QWORD *)v6 + 5);
    v65 = &v28;
    v29 = v6[15];
    v28 = v16;
    v67 = &v29;
    v66 = 4LL;
    v68 = 4LL;
    TlgCreateSz(&v69, v17);
    ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v35, a2);
    v19 = &unk_180457DE6;
    v20 = v9;
    v21 = *ShellTabGroupId;
    v71 = 16LL;
    v70 = &v36;
    pData = (EVENT_DATA_DESCRIPTOR *)&v44;
    cData = 20;
  }
  else
  {
    v22 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v22 <= 5u )
      goto LABEL_11;
    v23 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v38 = &v29;
    v29 = v23;
    v39 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v41 = 4LL;
    v28 = CurrentThreadId;
    v40 = &v28;
    v25 = TabShellTelemetryBase::GetShellTabGroupId(&v35, a2);
    v19 = &unk_180457D7E;
    v20 = v22;
    v21 = *v25;
    v43 = 16LL;
    v42 = &v36;
    pData = &v37;
    cData = 5;
  }
  v36 = v21;
  TlgWrite(v20, v19, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, pData);
LABEL_11:
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}
