/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18009F73C
 * Callers:
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x18009BC50 (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18009C70C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FCB4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A04E4 (-zInternalStop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  int *v3; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  const struct _TlgProvider_t *v16; // rsi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  double *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  double *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+130h] [rbp+30h] BYREF
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+150h] [rbp+50h] BYREF
  int *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+170h] [rbp+70h] BYREF
  DWORD *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  int *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  int v65; // [rsp+248h] [rbp+148h] BYREF
  int v66; // [rsp+250h] [rbp+150h] BYREF

  v66 = a3;
  v65 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v8 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         v7,
         (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    if ( *(_DWORD *)v8[1] > 4u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v9 = (const CHAR *)*((_QWORD *)v6 + 6);
      v37 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v38 = 8LL;
      v39 = &v24;
      v21 = v6[1];
      v41 = &v21;
      v24 = 0x1000000LL;
      v40 = 8LL;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 15);
      v44 = v6 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, v10);
      v11 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v22 = *v6;
      v47 = &v22;
      v48 = 4LL;
      TlgCreateWsz(&v49, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 8);
      v23 = v6[6];
      v50 = &v23;
      v51 = 4LL;
      TlgCreateSz(&v52, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 10);
      v19 = v6[18];
      v53 = &v19;
      v54 = 4LL;
      TlgCreateSz(&v55, v13);
      TlgCreateWsz(&v56, *((LPCWSTR *)v6 + 11));
      v14 = (const CHAR *)*((_QWORD *)v6 + 13);
      v20 = v6[24];
      v57 = &v20;
      v58 = 4LL;
      TlgCreateSz(&v59, v14);
      TlgCreateWsz(&v60, *((LPCWSTR *)v6 + 14));
      v62 = 4LL;
      v63 = &v66;
      v61 = &v65;
      v64 = 4LL;
      TlgWrite(v15, &unk_18019CC87, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    v16 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v16 > 4u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
    {
      v27 = 8LL;
      v26 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v20;
      v20 = v17;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v19 = CurrentThreadId;
      v33 = 4LL;
      v30 = &v19;
      v32 = &v65;
      v34 = &v66;
      v35 = 4LL;
      TlgWrite(v16, &unk_18019CC25, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((RawInputProvidersTracing::DeviceAttached *)((char *)this + 8));
}
