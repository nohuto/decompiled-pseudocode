/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x1800AE9E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::Fire(LPCWSTR *this, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  void *v5; // r8
  int v6; // r11d
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  char *v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  char *v18; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  char *v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]
  __int64 *v24; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+2Fh]
  int v29; // [rsp+CCh] [rbp+33h]
  __int64 v30; // [rsp+108h] [rbp+6Fh] BYREF

  v30 = a2;
  Context = 0LL;
  v3 = a3;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, this[9]);
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = (char *)this + 84;
    v21 = (char *)(this + 11);
    v24 = &v12;
    v15 = (char *)(this + 10);
    v27 = &v30;
    v16 = v6;
    v19 = v6;
    v22 = v6;
    v12 = v3;
    v25 = v6 + 4;
    v28 = v6 + 4;
    TlgWrite(v9, &unk_180171F01, v7, v8, v6 + 4, &pData);
  }
}
