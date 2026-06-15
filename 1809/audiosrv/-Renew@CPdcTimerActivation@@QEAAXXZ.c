/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800EF140
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800EEF54 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x180133790 (Pdcv2ActivationClientRenewActivation.c)
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
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  _QWORD *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  _QWORD v21[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[152]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v24; // [rsp+150h] [rbp+50h]
  int v25; // [rsp+158h] [rbp+58h]
  int v26; // [rsp+15Ch] [rbp+5Ch]
  int *v27; // [rsp+160h] [rbp+60h]
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v30; // [rsp+170h] [rbp+70h]
  int v31; // [rsp+178h] [rbp+78h]
  int v32; // [rsp+17Ch] [rbp+7Ch]
  int *v33; // [rsp+180h] [rbp+80h]
  int v34; // [rsp+188h] [rbp+88h]
  int v35; // [rsp+18Ch] [rbp+8Ch]
  int *v36; // [rsp+190h] [rbp+90h]
  int v37; // [rsp+198h] [rbp+98h]
  int v38; // [rsp+19Ch] [rbp+9Ch]

  v21[1] = *((_QWORD *)this + 2);
  v21[0] = 1LL;
  v21[2] = 512LL;
  memset_0(v22, 0, 0x90uLL);
  v17 = 0LL;
  v18 = 0LL;
  v2 = *(_QWORD *)this;
  v19 = v21;
  v16[0] = 1;
  v16[1] = 300;
  v20 = 0LL;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientRenewActivation(v2, v16, &v9);
    Context = 0LL;
    v12 = v3;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v4);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v6 = *((_QWORD *)this + 2);
      v26 = 0;
      v24 = &v14;
      v14 = v6;
      v25 = 8;
      v7 = *(_DWORD *)(v6 + 64);
      v29 = 0;
      v11 = v7;
      v27 = &v11;
      v28 = 4;
      v8 = *(_QWORD *)(v6 + 504);
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v15 = v8;
      v30 = &v15;
      v33 = &v12;
      v36 = &v9;
      v31 = 8;
      v34 = 4;
      v37 = 4;
      TlgWrite(v5, &unk_1801749BE, (LPCGUID)v5, (LPCGUID)4, 7u, &pData);
    }
  }
}
