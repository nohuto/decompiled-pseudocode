/*
 * XREFs of ?TabViewManager_MaximizedWindowInfo_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@111@Z @ 0x1801EC5B0
 * Callers:
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x1801D1238 (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo_(
        TabViewManagerTraceLogging *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  const struct _TlgProvider_t *v9; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-A0h] BYREF
  const struct tagRECT *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  LONG *p_top; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  LONG *p_right; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  LONG *p_bottom; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  const struct tagRECT *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  LONG *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  LONG *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  LONG *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  const struct tagRECT *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  LONG *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  LONG *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  LONG *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  const struct tagRECT *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  LONG *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  LONG *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  LONG *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]

  v9 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 4u )
  {
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    p_top = &a3->top;
    p_right = &a3->right;
    p_bottom = &a3->bottom;
    v24 = &a4->top;
    v26 = &a4->right;
    v28 = &a4->bottom;
    v32 = &a5->top;
    v34 = &a5->right;
    v36 = &a5->bottom;
    v40 = &a6->top;
    v42 = &a6->right;
    v44 = &a6->bottom;
    v14 = a3;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v22 = a4;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    v30 = a5;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v38 = a6;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    TlgWrite(v9, &unk_180458C72, 0LL, 0LL, 0x13u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
