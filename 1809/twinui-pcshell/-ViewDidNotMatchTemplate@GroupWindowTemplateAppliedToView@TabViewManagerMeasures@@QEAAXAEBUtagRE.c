/*
 * XREFs of ?ViewDidNotMatchTemplate@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXAEBUtagRECT@@0NPEAUIApplicationView@@@Z @ 0x180208C98
 * Callers:
 *     ?IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplateAppliedToView@TabViewManagerMeasures@@@Z @ 0x18020704C (-IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplat.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 */

void __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::ViewDidNotMatchTemplate(
        TabViewManagerMeasures::GroupWindowTemplateAppliedToView *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        double a4,
        struct IApplicationView *a5)
{
  struct IApplicationView *v5; // r15
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-A0h] BYREF
  const struct tagRECT *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  LONG *p_top; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  LONG *p_right; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  LONG *p_bottom; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  const struct tagRECT *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  LONG *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  LONG *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  LONG *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  double *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  double v42; // [rsp+158h] [rbp+58h] BYREF

  v42 = a4;
  v5 = a5;
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 3u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(pv, (__int64)v5);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    p_top = &a2->top;
    p_right = &a2->right;
    p_bottom = &a2->bottom;
    v30 = &a3->top;
    v33 = &a3->right;
    v36 = &a3->bottom;
    v39 = &v42;
    v15 = a2;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v27 = a3;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 8;
    TlgWrite(v10, &unk_18045A6C1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0xCu, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
