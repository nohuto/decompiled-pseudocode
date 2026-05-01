/*
 * XREFs of ?StopActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@MEAAXXZ @ 0x18023A060
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013A4BC (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::StopActivity(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rcx
  LPVOID v6; // rax
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  TraceLoggingHProvider v13; // r10
  const struct _TlgProvider_t *v14; // rsi
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  DWORD *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  DWORD *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+180h] [rbp+80h] BYREF
  int *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1B0h] [rbp+B0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v5,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    if ( **((_DWORD **)v6 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v6 + 1), 0x400000000000uLL) )
    {
      v7 = (const CHAR *)*((_QWORD *)v4 + 6);
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v32 = 8LL;
      v33 = &v22;
      v19 = v4[1];
      v35 = &v19;
      v22 = 0x1000000LL;
      v34 = 8LL;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 15);
      v38 = v4 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v8);
      v9 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v20 = *v4;
      v41 = &v20;
      v42 = 4LL;
      TlgCreateWsz(&v43, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 8);
      v21 = v4[6];
      v44 = &v21;
      v45 = 4LL;
      TlgCreateSz(&v46, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 10);
      v17 = v4[18];
      v47 = &v17;
      v48 = 4LL;
      TlgCreateSz(&v49, v11);
      TlgCreateWsz(&v50, *((LPCWSTR *)v4 + 11));
      v12 = (const CHAR *)*((_QWORD *)v4 + 13);
      v18 = v4[24];
      v51 = &v18;
      v52 = 4LL;
      TlgCreateSz(&v53, v12);
      TlgCreateWsz(&v54, *((LPCWSTR *)v4 + 14));
      TlgWrite(v13, &unk_1804CB95F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    v14 = (const struct _TlgProvider_t *)*((_QWORD *)v6 + 1);
    if ( *(_DWORD *)v14 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v6 + 1), 0x400000000000uLL) )
    {
      v25 = 8LL;
      v24 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v26 = &v18;
      v18 = v15;
      v27 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v29 = 4LL;
      v17 = CurrentThreadId;
      v28 = &v17;
      TlgWrite(v14, &unk_1804CBA92, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v23);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}
