/*
 * XREFs of ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180281630
 * Callers:
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::operator() @ 0x18027E88C (_lambda_33af26c9d846f3b9c507d9b825ceee74_--operator().c)
 *     ?FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlAltTabViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x18028ED3C (-FirstFrameRendered@-QIXamlSwitcherWindowInteractionEvents@@XamlAltTabViewController@@UE$AAAXPE$.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18027C31C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::Stop(XamlSwitcherTelemetry::ShowAltTab *this, unsigned __int8 a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const WCHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  DWORD v18; // ecx
  const CHAR *v19; // rdx
  TraceLoggingHProvider v20; // r10
  const struct _TlgProvider_t *v21; // rdi
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+50h] [rbp-B0h] BYREF
  int *v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  DWORD *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  int *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+F0h] [rbp-10h] BYREF
  int *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+110h] [rbp+10h] BYREF
  int *v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF
  int *v57; // [rsp+140h] [rbp+40h]
  int v58; // [rsp+148h] [rbp+48h]
  int v59; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+160h] [rbp+60h] BYREF
  DWORD *v62; // [rsp+170h] [rbp+70h]
  int v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+190h] [rbp+90h] BYREF
  int *v67; // [rsp+1A0h] [rbp+A0h]
  int v68; // [rsp+1A8h] [rbp+A8h]
  int v69; // [rsp+1ACh] [rbp+ACh]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         v7,
         (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    if ( *(_DWORD *)v8[1] > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v9 = v6[1];
      v10 = (const CHAR *)*((_QWORD *)v6 + 6);
      v43 = 0;
      v27 = v9;
      v41 = &v27;
      v42 = 4;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 15);
      v47 = 0;
      v45 = v6 + 14;
      v46 = 4;
      TlgCreateSz(&v48, v11);
      v12 = *v6;
      v13 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v51 = 0;
      v28 = v12;
      v49 = &v28;
      v50 = 4;
      TlgCreateWsz(&v52, v13);
      v14 = v6[6];
      v15 = (const CHAR *)*((_QWORD *)v6 + 8);
      v55 = 0;
      v29 = v14;
      v53 = &v29;
      v54 = 4;
      TlgCreateSz(&v56, v15);
      v16 = v6[18];
      v17 = (const CHAR *)*((_QWORD *)v6 + 10);
      v59 = 0;
      v24 = v16;
      v57 = &v24;
      v58 = 4;
      TlgCreateSz(&v60, v17);
      TlgCreateWsz(&v61, *((LPCWSTR *)v6 + 11));
      v18 = v6[24];
      v19 = (const CHAR *)*((_QWORD *)v6 + 13);
      v64 = 0;
      v25 = v18;
      v62 = &v25;
      v63 = 4;
      TlgCreateSz(&v65, v19);
      TlgCreateWsz(&v66, *((LPCWSTR *)v6 + 14));
      v69 = 0;
      v67 = &v26;
      v26 = a2;
      v68 = 4;
      TlgWrite(v20, &unk_1804608B7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    v21 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v21 > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v33 = 0;
      v31 = &v26;
      v26 = v22;
      v32 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v36 = 0;
      v39 = 0;
      v25 = CurrentThreadId;
      v34 = &v25;
      v24 = a2;
      v37 = &v24;
      v35 = 4;
      v38 = 4;
      TlgWrite(v21, &unk_18046086B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowAltTab *)((char *)this + 8));
}
