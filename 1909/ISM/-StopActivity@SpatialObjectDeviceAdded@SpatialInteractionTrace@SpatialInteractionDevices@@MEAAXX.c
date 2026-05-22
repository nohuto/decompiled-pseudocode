/*
 * XREFs of ?StopActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800EEF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FCB4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A04E4 (-zInternalStop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceAdded::StopActivity(
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceAdded *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  DWORD v13; // ecx
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
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  double *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  DWORD *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  double *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+140h] [rbp+40h] BYREF
  int *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+160h] [rbp+60h] BYREF
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+190h] [rbp+90h] BYREF
  int *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1C0h] [rbp+C0h] BYREF
  DWORD *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  int *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1F0h] [rbp+F0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         v5,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    if ( *(_DWORD *)v6[1] > 4u )
    {
      v7 = (const CHAR *)*((_QWORD *)v4 + 6);
      v35 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v36 = 8LL;
      v37 = &v26;
      v21 = v4[1];
      v39 = &v21;
      v26 = 0x1000000LL;
      v38 = 8LL;
      v40 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 15);
      v42 = v4 + 14;
      v43 = 4LL;
      TlgCreateSz(&v44, v8);
      v9 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v22 = *v4;
      v45 = &v22;
      v46 = 4LL;
      TlgCreateWsz(&v47, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 8);
      v23 = v4[6];
      v48 = &v23;
      v49 = 4LL;
      TlgCreateSz(&v50, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 10);
      v24 = v4[18];
      v51 = &v24;
      v52 = 4LL;
      TlgCreateSz(&v53, v11);
      TlgCreateWsz(&v54, *((LPCWSTR *)v4 + 11));
      v12 = (const CHAR *)*((_QWORD *)v4 + 13);
      v25 = v4[24];
      v55 = &v25;
      v56 = 4LL;
      TlgCreateSz(&v57, v12);
      TlgCreateWsz(&v58, *((LPCWSTR *)v4 + 14));
      v13 = v4[2];
      v14 = (const CHAR *)*((_QWORD *)v4 + 5);
      v59 = &v19;
      v20 = v4[15];
      v19 = v13;
      v61 = &v20;
      v60 = 4LL;
      v62 = 4LL;
      TlgCreateSz(&v63, v14);
      TlgWrite(v15, &unk_18019F1F4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v16 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v16 > 4u )
    {
      v29 = 8LL;
      v28 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = &v20;
      v20 = v17;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v19 = CurrentThreadId;
      v32 = &v19;
      TlgWrite(v16, &unk_18019F445, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceAdded *)((char *)this + 8));
}
