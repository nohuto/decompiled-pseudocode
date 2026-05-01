/*
 * XREFs of ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802F9FEC
 * Callers:
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x1802F767C (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 *     ?FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlAltTabViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x18030790C (-FirstFrameRendered@-QIXamlSwitcherWindowInteractionEvents@@XamlAltTabViewController@@UE$AAAXPE$.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802D262C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::Stop(XamlSwitcherTelemetry::ShowAltTab *this, unsigned __int8 a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r11
  const struct _TlgProvider_t *v16; // rdi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v20; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  int *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  DWORD *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+128h] [rbp+20h] BYREF
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+148h] [rbp+40h] BYREF
  int *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+168h] [rbp+60h] BYREF
  int *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+198h] [rbp+90h] BYREF
  DWORD *v56; // [rsp+1A8h] [rbp+A0h]
  __int64 v57; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v60; // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         v7,
         (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    if ( *(_DWORD *)v8[1] > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v9 = (const CHAR *)*((_QWORD *)v6 + 6);
      v36 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v37 = 8LL;
      v38 = &v25;
      v22 = v6[1];
      v40 = &v22;
      v25 = 0x1000000LL;
      v39 = 8LL;
      v41 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 15);
      v43 = v6 + 14;
      v44 = 4LL;
      TlgCreateSz(&v45, v10);
      v11 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v23 = *v6;
      v46 = &v23;
      v47 = 4LL;
      TlgCreateWsz(&v48, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 8);
      v24 = v6[6];
      v49 = &v24;
      v50 = 4LL;
      TlgCreateSz(&v51, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 10);
      v19 = v6[18];
      v52 = &v19;
      v53 = 4LL;
      TlgCreateSz(&v54, v13);
      TlgCreateWsz(&v55, *((LPCWSTR *)v6 + 11));
      v14 = (const CHAR *)*((_QWORD *)v6 + 13);
      v20 = v6[24];
      v56 = &v20;
      v57 = 4LL;
      TlgCreateSz(&v58, v14);
      TlgCreateWsz(&v59, *((LPCWSTR *)v6 + 14));
      v60 = &v21;
      v21 = a2;
      v61 = 4LL;
      TlgWrite(v15, &unk_1804FCDF7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v16 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v16 > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v28 = 8LL;
      v27 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v29 = &v21;
      v21 = v17;
      v30 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v32 = 4LL;
      v20 = CurrentThreadId;
      v34 = 4LL;
      v31 = &v20;
      v19 = a2;
      v33 = &v19;
      TlgWrite(v16, &unk_1804FCD9B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowAltTab *)((char *)this + 8));
}
