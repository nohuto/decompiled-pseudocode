/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180065EC8
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x180065E08 (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     Pdcv2ActivationClientActivate @ 0x18002FA10 (Pdcv2ActivationClientActivate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180064810 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x1800673B4 (Pdcv2ActivationClientSetBrokeredProcessId.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        CAudioStream **a3)
{
  wchar_t *ClientFriendlyName; // rdx
  __int64 v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  const struct _TlgProvider_t *v10; // r8
  __int64 v11; // rcx
  struct _FILETIME cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  const wchar_t *v23; // [rsp+78h] [rbp-88h]
  _QWORD *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  _QWORD v26[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[152]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v29; // [rsp+160h] [rbp+60h]
  __int64 v30; // [rsp+168h] [rbp+68h]
  int *v31; // [rsp+170h] [rbp+70h]
  __int64 v32; // [rsp+178h] [rbp+78h]
  __int64 *v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  int *v35; // [rsp+190h] [rbp+90h]
  __int64 v36; // [rsp+198h] [rbp+98h]
  __int64 *v37; // [rsp+1A0h] [rbp+A0h]
  __int64 v38; // [rsp+1A8h] [rbp+A8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  v26[1] = a3;
  *(_QWORD *)this = 0LL;
  v26[0] = 1LL;
  v26[2] = 512LL;
  memset_0(v27, 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[24]);
  v21[0] = 1;
  v21[1] = 300;
  v24 = v26;
  v7 = L"Unknown";
  v22 = 0LL;
  v23 = L"Unknown";
  v25 = 0LL;
  if ( ClientFriendlyName )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( ClientFriendlyName[v8] );
    if ( v8 )
      v7 = ClientFriendlyName;
    v23 = v7;
  }
  v17 = Pdcv2ActivationClientActivate(**((_QWORD **)this + 1), v21, *((_QWORD *)this + 2), v6, cData, pData, this, &v15);
  if ( v17 >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((unsigned int *)a3 + 16));
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v15 + 1, &Context)
    && HIDWORD(v15) )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 4u )
  {
    v11 = *((_QWORD *)this + 2);
    v29 = &v19;
    v19 = v11;
    v30 = 8LL;
    v16 = *(_DWORD *)(v11 + 64);
    v31 = &v16;
    v32 = 4LL;
    v20 = *(_QWORD *)(v11 + 504);
    v33 = &v20;
    v35 = &v17;
    v37 = &v15;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 4LL;
    TlgWrite(v10, &unk_180174A79, (LPCGUID)v10, (LPCGUID)4, 7u, &v28);
  }
  return this;
}
