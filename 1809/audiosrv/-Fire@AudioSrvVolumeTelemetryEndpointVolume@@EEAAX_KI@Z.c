/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x1800AE820
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(
        AudioSrvVolumeTelemetryEndpointVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  void *v5; // r8
  int v6; // r11d
  const WCHAR *v7; // rdx
  int v8; // ecx
  int v9; // r11d
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  TraceLoggingHProvider v12; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  int v14; // [rsp+34h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  __int64 v16; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  char *v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+78h] [rbp-41h]
  int v20; // [rsp+7Ch] [rbp-3Dh]
  char *v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  char *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  char *v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A8h] [rbp-11h]
  int v29; // [rsp+ACh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-9h] BYREF
  int *v31; // [rsp+C0h] [rbp+7h]
  int v32; // [rsp+C8h] [rbp+Fh]
  int v33; // [rsp+CCh] [rbp+13h]
  __int64 *v34; // [rsp+D0h] [rbp+17h]
  int v35; // [rsp+D8h] [rbp+1Fh]
  int v36; // [rsp+DCh] [rbp+23h]
  __int64 *v37; // [rsp+E0h] [rbp+27h]
  int v38; // [rsp+E8h] [rbp+2Fh]
  int v39; // [rsp+ECh] [rbp+33h]
  __int64 v40; // [rsp+128h] [rbp+6Fh] BYREF

  v40 = a2;
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
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v7 = (const WCHAR *)*((_QWORD *)this + 11);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v18 = (char *)this + 72;
      v21 = (char *)this + 76;
      v24 = (char *)this + 80;
      v27 = (char *)this + 84;
      v19 = v6;
      v22 = v6;
      v25 = v6;
      v28 = v6;
      TlgCreateWsz(&pDesc, v7);
      v8 = *((_DWORD *)this + 24);
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v31 = &v14;
      v34 = &v16;
      v14 = v8;
      v37 = &v40;
      v32 = v9;
      v16 = v3;
      v35 = v9 + 4;
      v38 = v9 + 4;
      TlgWrite(v12, &unk_180171FB2, v10, v11, 0xAu, &pData);
    }
  }
}
