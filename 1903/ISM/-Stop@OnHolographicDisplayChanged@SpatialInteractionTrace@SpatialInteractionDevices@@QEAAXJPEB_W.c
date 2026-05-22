/*
 * XREFs of ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800E52B4
 * Callers:
 *     _lambda_94bf11a16993f060fe03c20fc4fc2394_::operator() @ 0x1800E0F54 (_lambda_94bf11a16993f060fe03c20fc4fc2394_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FE74 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A06A4 (-zInternalStop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *this,
        int a2,
        const wchar_t *a3,
        bool a4,
        bool a5)
{
  int *v5; // rsi
  int v9; // eax
  int *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  DWORD v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  const struct _TlgProvider_t *v22; // rsi
  int v23; // ecx
  DWORD CurrentThreadId; // eax
  bool v25; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v26[3]; // [rsp+31h] [rbp-CFh] BYREF
  DWORD v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  double *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 *v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  DWORD *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D0h] [rbp-30h] BYREF
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+F0h] [rbp-10h] BYREF
  int *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp+10h] BYREF
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+140h] [rbp+40h] BYREF
  int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+170h] [rbp+70h] BYREF
  DWORD *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  int *v62; // [rsp+190h] [rbp+90h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1B0h] [rbp+B0h] BYREF
  bool *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v68; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]
  int *v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  int v72; // [rsp+248h] [rbp+148h] BYREF

  v72 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v9 = v5[19];
  if ( v9 < 0 && v9 == v5[21] )
    v10 = v5 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v12 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v11,
          (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( v10 )
  {
    if ( *(_DWORD *)v12[1] > 4u )
    {
      v13 = (const CHAR *)*((_QWORD *)v10 + 6);
      v36 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v37 = 8LL;
      v38 = &v34;
      v29 = v10[1];
      v40 = (DWORD *)&v29;
      v34 = 0x1000000LL;
      v39 = 8LL;
      v41 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v10 + 15);
      v43 = v10 + 14;
      v44 = 4LL;
      TlgCreateSz(&v45, v14);
      v15 = (const WCHAR *)*((_QWORD *)v10 + 2);
      v30 = *v10;
      v46 = &v30;
      v47 = 4LL;
      TlgCreateWsz(&v48, v15);
      v16 = (const CHAR *)*((_QWORD *)v10 + 8);
      v31 = v10[6];
      v49 = &v31;
      v50 = 4LL;
      TlgCreateSz(&v51, v16);
      v17 = (const CHAR *)*((_QWORD *)v10 + 10);
      v32 = v10[18];
      v52 = &v32;
      v53 = 4LL;
      TlgCreateSz(&v54, v17);
      TlgCreateWsz(&v55, *((LPCWSTR *)v10 + 11));
      v18 = (const CHAR *)*((_QWORD *)v10 + 13);
      v33 = v10[24];
      v56 = &v33;
      v57 = 4LL;
      TlgCreateSz(&v58, v18);
      TlgCreateWsz(&v59, *((LPCWSTR *)v10 + 14));
      v19 = v10[2];
      v20 = (const CHAR *)*((_QWORD *)v10 + 5);
      v60 = &v27;
      v28 = v10[15];
      v27 = v19;
      v62 = &v28;
      v61 = 4LL;
      v63 = 4LL;
      TlgCreateSz(&v64, v20);
      TlgCreateWsz(&v65, a3);
      v25 = a4;
      v66 = &v25;
      v26[0] = a5;
      v67 = 1LL;
      v69 = 1LL;
      v68 = v26;
      v71 = 4LL;
      v70 = &v72;
      TlgWrite(v21, &unk_18019E332, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x19u, &pData);
    }
  }
  else
  {
    v22 = (const struct _TlgProvider_t *)v12[1];
    if ( *(_DWORD *)v22 > 4u )
    {
      v37 = 8LL;
      v36 = &`HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v23 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v38 = (__int64 *)&v28;
      v28 = v23;
      v39 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v41 = 4LL;
      v27 = CurrentThreadId;
      v40 = &v27;
      TlgCreateWsz(&pDesc, a3);
      v26[0] = a4;
      v43 = v26;
      v25 = a5;
      v45.Ptr = (ULONGLONG)&v25;
      v46 = &v72;
      v44 = 1LL;
      *(_QWORD *)&v45.Size = 1LL;
      v47 = 4LL;
      TlgWrite(v22, &unk_18019E882, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)((char *)this + 8));
}
