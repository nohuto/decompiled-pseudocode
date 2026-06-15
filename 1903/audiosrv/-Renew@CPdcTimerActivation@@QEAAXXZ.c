/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800FAD30
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800FAB5C (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // r8
  const struct _TlgProvider_t *v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  _QWORD *v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _QWORD v22[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[152]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v25; // [rsp+160h] [rbp+60h]
  int v26; // [rsp+168h] [rbp+68h]
  int v27; // [rsp+16Ch] [rbp+6Ch]
  int *v28; // [rsp+170h] [rbp+70h]
  int v29; // [rsp+178h] [rbp+78h]
  int v30; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v31; // [rsp+180h] [rbp+80h]
  int v32; // [rsp+188h] [rbp+88h]
  int v33; // [rsp+18Ch] [rbp+8Ch]
  int *v34; // [rsp+190h] [rbp+90h]
  int v35; // [rsp+198h] [rbp+98h]
  int v36; // [rsp+19Ch] [rbp+9Ch]
  int *v37; // [rsp+1A0h] [rbp+A0h]
  int v38; // [rsp+1A8h] [rbp+A8h]
  int v39; // [rsp+1ACh] [rbp+ACh]

  v22[1] = *((_QWORD *)this + 2);
  v22[0] = 1LL;
  v22[2] = 552LL;
  memset_0(v23, 0, 0x90uLL);
  v18 = 0LL;
  v19 = 0LL;
  v2 = *(_QWORD *)this;
  v20 = v22;
  v17[0] = 1;
  v17[1] = 300;
  v21 = 0LL;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientRenewActivation(v2, v17, &v12);
    Context = 0LL;
    v11 = v3;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B8588;
      qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v4);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v6 = *((_QWORD *)this + 2);
      v27 = 0;
      v25 = &v15;
      v15 = v6;
      v26 = 8;
      v7 = *(_DWORD *)(v6 + 64);
      v30 = 0;
      v10 = v7;
      v28 = &v10;
      v29 = 4;
      v8 = *(_QWORD *)(v6 + 536);
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v16 = v8;
      v31 = &v16;
      v34 = &v11;
      v13 = v12;
      v37 = &v13;
      v32 = 8;
      v35 = 4;
      v38 = 4;
      TlgWrite(v5, &unk_180179996, (LPCGUID)v5, (LPCGUID)4, 7u, &pData);
    }
  }
}
