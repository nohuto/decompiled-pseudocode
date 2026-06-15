/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18004E690
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::Fire(LPCWSTR *this, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // r10d
  LPCGUID v6; // r8
  TraceLoggingHProvider v7; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-61h] BYREF
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  char *v13; // [rsp+80h] [rbp-19h]
  int v14; // [rsp+88h] [rbp-11h]
  int v15; // [rsp+8Ch] [rbp-Dh]
  char *v16; // [rsp+90h] [rbp-9h]
  int v17; // [rsp+98h] [rbp-1h]
  int v18; // [rsp+9Ch] [rbp+3h]
  char *v19; // [rsp+A0h] [rbp+7h]
  int v20; // [rsp+A8h] [rbp+Fh]
  int v21; // [rsp+ACh] [rbp+13h]
  __int64 *v22; // [rsp+B0h] [rbp+17h]
  int v23; // [rsp+B8h] [rbp+1Fh]
  int v24; // [rsp+BCh] [rbp+23h]
  __int64 *v25; // [rsp+C0h] [rbp+27h]
  int v26; // [rsp+C8h] [rbp+2Fh]
  int v27; // [rsp+CCh] [rbp+33h]
  __int64 v28; // [rsp+108h] [rbp+6Fh] BYREF

  v28 = a2;
  Context = 0LL;
  v3 = a3;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, this[9]);
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = (char *)this + 84;
    v19 = (char *)(this + 11);
    v22 = &v10;
    v25 = &v28;
    v13 = (char *)(this + 10);
    v14 = v5;
    v17 = v5;
    v20 = v5;
    v10 = v3;
    v23 = v5 + 4;
    v26 = v5 + 4;
    TlgWrite(v7, &unk_180176219, v6, (LPCGUID)v7, v5 + 4, &pData);
  }
}
