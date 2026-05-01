/*
 * XREFs of ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x1803ABD20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x1803AC434 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

void __fastcall ImmersiveIconsLoggingTelemetry::LoadIconW::StopActivity(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  int v8; // eax
  int v9; // esi
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const WCHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  int v18; // ecx
  const CHAR *v19; // rdx
  DWORD v20; // ecx
  const CHAR *v21; // rdx
  TraceLoggingHProvider v22; // r10
  const struct _TlgProvider_t *v23; // rdi
  int v24; // edx
  UINT32 cData; // esi
  int v26; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  int v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+A0h] [rbp-68h]
  int v42; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-60h] BYREF
  int *v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+C8h] [rbp-40h] BYREF
  int *v48; // [rsp+D8h] [rbp-30h]
  int v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E8h] [rbp-20h] BYREF
  int *v52; // [rsp+F8h] [rbp-10h]
  int v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+118h] [rbp+10h] BYREF
  int *v57; // [rsp+128h] [rbp+20h]
  int v58; // [rsp+130h] [rbp+28h]
  int v59; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v62; // [rsp+158h] [rbp+50h]
  int v63; // [rsp+160h] [rbp+58h]
  int v64; // [rsp+164h] [rbp+5Ch]
  int *v65; // [rsp+168h] [rbp+60h]
  int v66; // [rsp+170h] [rbp+68h]
  int v67; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+178h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR v69; // [rsp+188h] [rbp+80h] BYREF
  int *v70; // [rsp+1A8h] [rbp+A0h]
  int v71; // [rsp+1B0h] [rbp+A8h]
  int v72; // [rsp+1B4h] [rbp+ACh]
  DWORD *v73; // [rsp+1B8h] [rbp+B0h]
  UINT32 v74; // [rsp+1C0h] [rbp+B8h]
  int v75; // [rsp+1C4h] [rbp+BCh]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<ImmersiveIconsLogging>::get(
         v5,
         lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    if ( **(_DWORD **)(v6 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0LL) )
    {
      v8 = v4[1];
      v9 = v7 + 4;
      v38 &= v7;
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v30 = v8;
      v36 = &v30;
      v37 = v9;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v42 = 0;
      v40 = v4 + 14;
      v41 = v9;
      TlgCreateSz(&v43, v11);
      v12 = *v4;
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v46 = 0;
      v31 = v12;
      v44 = &v31;
      v45 = v9;
      TlgCreateWsz(&v47, v13);
      v14 = v4[6];
      v15 = (const CHAR *)*((_QWORD *)v4 + 8);
      v50 = 0;
      v32 = v14;
      v48 = &v32;
      v49 = v9;
      TlgCreateSz(&v51, v15);
      v16 = v4[18];
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v54 = 0;
      v33 = v16;
      v52 = &v33;
      v53 = v9;
      TlgCreateSz(&v55, v17);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 11));
      v18 = v4[24];
      v19 = (const CHAR *)*((_QWORD *)v4 + 13);
      v59 = 0;
      v34 = v18;
      v57 = &v34;
      v58 = v9;
      TlgCreateSz(&v60, v19);
      TlgCreateWsz(&v61, *((LPCWSTR *)v4 + 14));
      v20 = v4[2];
      v64 = 0;
      v67 = 0;
      v21 = (const CHAR *)*((_QWORD *)v4 + 5);
      v62 = &v28;
      v29 = v4[15];
      v28 = v20;
      v65 = &v29;
      v63 = v9;
      v66 = v9;
      TlgCreateSz(&v68, v21);
      TlgWrite(v22, &unk_18046A2F2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v23 = *(const struct _TlgProvider_t **)(v6 + 8);
    if ( *(_DWORD *)v23 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0LL) )
    {
      cData = v24 + 4;
      v26 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v72 &= v24;
      v70 = &v29;
      v29 = v26;
      v71 = v24 + 4;
      CurrentThreadId = GetCurrentThreadId();
      v75 = 0;
      v28 = CurrentThreadId;
      v74 = cData;
      v73 = &v28;
      TlgWrite(v23, &unk_18046A2B8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, cData, &v69);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ImmersiveIconsLoggingTelemetry::LoadIconW *)((char *)this + 8));
}
